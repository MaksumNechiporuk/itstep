#include<iostream>
#include<string>
#include<list>
#include<map>
#include<ctime>
#include<Windows.h>

using namespace std;

int size_b = 3, Size_Sity = 1;

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}
class Image
{
public:
	string name;
	int size;
};

class FlyweightFabric
{
	static map<string, Image*> imgs;
public:
	static Image* GetImg(string key, int size)
	{
		for (auto it = imgs.begin(); it != imgs.end(); it++)
		{
			if((*it).first == key)
			return (*it).second;
		}
			
		Image* img = new Image();
		img->name = key;
		img->size = size;

		imgs.insert(make_pair(key, img));
		return img;
	}
};

map<string, Image*> FlyweightFabric::imgs = {};

class Blocks
{
	string name;
	Image * img;

public:
	void CreateBloks(string name, int size)
	{
		this->name = name;
		img = FlyweightFabric::GetImg(name, size);
	}
	
	void Show()
	{
	
		cout << img->name << endl;
		cout << img->size << endl;	
		SetCol(7);
	}
	string GetName()
	{
		return name;
	}
	int  GetImageSize()
	{
		return img->size;
	}
	void func(Blocks &a, Blocks &b)
	{
		b.name = a.name;
		b.img = a.img;
	}
	Blocks operator = (Blocks &v1)
	{
		this->name = v1.name, this->img = v1.img;
		return *this;
	}
};

Blocks *Add_New_blocks_to_sity(Blocks *&b, int &size, Blocks *&arr1)
{
	Blocks *arr2 = new Blocks[size + 1];
	string name=b->GetName();
	int size_img=b->GetImageSize();
   
	for (int i = 0; i < size; i++)
	   {
		   arr2[i] = arr1[i];
	   }  

	   arr2[size].CreateBloks(name, size_img);

	   size++;
	arr1 = arr2;
	return arr2;

}
Blocks *Add_New_blocks(Blocks *&arr, int &size)
{
	Blocks *arr1 = new Blocks[size + 1];
	string name;
	cout << "Enter name ";
	cin >> name;
	cout << "Enter size ";
	int size_img;
	cin >> size_img;
	arr1[size_b].CreateBloks(name, size_img);
	for (int i = 0; i < size_b; i++)
	{
		arr1[i] = arr[i];
	}
	size++;

	return arr1;
}
Blocks* BuildSity(Blocks *&b, int &size, Blocks *&city_b)
{
	Blocks *arr1 = new Blocks[size - 1];
	int c;
	cin >> c;
	c--;
	for (int i = 0, j = 0; i < size; j++, i++)
	{
		if (c == i)
		{
			j--;
			continue;
		}
		arr1[j] = b[i];
	}
	Blocks *a = (&b[c]);
	Add_New_blocks_to_sity(a, Size_Sity, city_b);
	
	size--;
	return arr1;
}
Blocks* DestroySity(Blocks *&b, int &size, Blocks *&city_b)
{
	Blocks *arr1 = new Blocks[size - 1];
	int c;
	cin >> c;
	c--;
	for (int i = 0, j = 0; i < size; j++, i++)
	{
		if (c == i)
		{
			j--;
			continue;
		}
		arr1[j] = b[i];
	}
	Blocks *a = (&b[c]);
	Add_New_blocks_to_sity(a, size_b, city_b);
	size--;
	return arr1;
}

void menu()
{
	Blocks *blocks = new Blocks[size_b];
	Blocks *sity_blocks = new Blocks[Size_Sity];
	
	blocks[0].CreateBloks("Bloc 1", 20);
	blocks[1].CreateBloks("Bloc 2", 20);
	blocks[2].CreateBloks("Bloc 3", 20);
	sity_blocks[0].CreateBloks("Bloc 4", 30);
	int c = 0;
	for (;c!=5;)
	{

		cout << "1.Create new bloc\n2.Build city\n3.Destroy city's bloc\n4.Show blocks\n5.Exit\n";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			blocks = Add_New_blocks(blocks, size_b);
			
			break;
		}
		case 2:
		{
			if (size_b != 0)
			{
				for (int i = 0; i < size_b; i++)
				{
					SetCol(rand() % 10 + 5);
					cout << i + 1 << ".";
					blocks[i].Show();
				}
				blocks = BuildSity(blocks, size_b, sity_blocks);
			}
			break;
		}
		case 3:
		{
			if (Size_Sity != 0)
			{
				for (int i = 0; i < Size_Sity; i++)
				{
					SetCol(rand() % 10 + 5);
					cout << i + 1 << ".";
					sity_blocks[i].Show();
				}
				sity_blocks = DestroySity(sity_blocks, Size_Sity, blocks);
			}
			break;
		}
		case 4:
		{
			cout << "My blocks\n";
				for (int i = 0; i < size_b; i++)
				{
					SetCol(rand() % 10 + 5);
					cout << i + 1 << ".";
					blocks[i].Show();
				}
			cout << endl;
			cout << "Sity blocks\n";
			for (int i = 0; i < Size_Sity; i++)
				{
				SetCol(rand() % 10 + 5);
					cout << i + 1 << ".";

					sity_blocks[i].Show();
				}
			break;
		}
		}
		system("pause");
		system("cls");
	}
}
void main()
{
	menu();
	system("pause");
}
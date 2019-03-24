#include<iostream>

#include<string>
#include<list>
#include<ctime>

using namespace std;



class IComputer
{
public:
	
	virtual void Add_GPU(string GPU) = 0;
	virtual void Add_HDD(int HDD) = 0;
	virtual void Add_SSD(int SSD)=0;
	virtual void Add_RAM(int SSD) = 0;
	virtual void Add_Matherboard(string Matherboard) = 0;
	virtual void Show() = 0;
};

class Computer:public IComputer
{
public:
	string CPU;
	string GPU;
	int HDD;
	int SSD,RAM;
	string Matherboard;
	 Computer()
	{

	}
	void Add_GPU(string GPU)
	{
		this->GPU = GPU;
	}
	void Add_HDD(int HDD)
	{
		this->HDD = HDD;
	}
	 void Add_SSD(int SSD) {
		 this->SSD = SSD;
	 }
	 void Add_Matherboard(string Matherboard) {
	 this->Matherboard = Matherboard;
	 }
	 void Add_RAM(int RAM)
	 {
		 this->RAM = RAM;
	 }
	 void Show()
	 {
		 cout << "CPU: " << CPU << "   " << "GPU: " << GPU << "   " << "HDD: " << HDD << "   " << "SSD: " << SSD <<"   "<<"RAM:"<<RAM<< "   " << "Matherboard: " << Matherboard << endl;
	 }
};


class AMD : public Computer
{
public:
	AMD()
	{
		CPU ="AMD";
	}
};
class Intel : public Computer
{
public:
	Intel()
	{
		CPU = "Intel";
	}
};

class Decorator : public Computer
{
protected:
	Computer * _c;
public:
	Decorator(Computer * c)
	{
		_c = c;
	}
};


class HomeComputer : public Decorator
{
public:
	HomeComputer(Computer * c): Decorator(c)
	{
	}
	void Add_GPU(string GPU)
	{
		_c->Add_GPU(GPU);
	
	}
	void Add_HDD(int HDD)
	{
		_c->Add_HDD(HDD);
	
	}
	void Add_SSD(int SSD) {

		_c->Add_SSD(SSD);

	}
	void Add_RAM(int RAM) {

		_c->Add_RAM(RAM);

	}
	void Add_Matherboard(string Matherboard) {
		_c->Add_Matherboard(Matherboard);
		
	}
	void Show()
	{
		_c->Show();

	}
};

class GameComputer : public Decorator
{
public:
	GameComputer(Computer * c) : Decorator(c)
	{
	}
	void Add_GPU(string GPU)
	{
		_c->Add_GPU(GPU);
	}
	void Add_HDD(int HDD)
	{
		_c->Add_HDD(HDD);
	}
	void Add_SSD(int SSD) {

		_c->Add_SSD(SSD);
	}
	void Add_Matherboard(string Matherboard) {
		_c->Add_Matherboard(Matherboard);
	}
	void Add_RAM(int RAM) {

		_c->Add_RAM(RAM);

	}
	void Show()
	{
		_c->Show();
	}
};

void menu()
{
	int c;
	cout << "1.Intel\n2.AMD\n";
	cin >> c;
	switch (c)
	{
	case 1:
	{
		Computer *com = new Intel();
		cout << "1.Home\n2.Game\n";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			Decorator *new_com = new HomeComputer(com);
			((HomeComputer *)new_com)->Add_GPU("Intel graphics ");
			((HomeComputer *)new_com)->Add_HDD(1000);
			((HomeComputer *)new_com)->Add_RAM(6);
			((HomeComputer *)new_com)->Add_SSD(120);
			((HomeComputer *)new_com)->Add_Matherboard("Gigabyte GA - A320M - H");
			((HomeComputer *)new_com)->Show();

			break;
		}
		case 2:
		{
			Decorator *new_com = new HomeComputer(com);
			((HomeComputer *)new_com)->Add_GPU("Nvidia GTX 1080 TI");
			((HomeComputer *)new_com)->Add_HDD(3000);
			((HomeComputer *)new_com)->Add_RAM(16);
			((HomeComputer *)new_com)->Add_SSD(500);
			((HomeComputer *)new_com)->Add_Matherboard("Gigabyte Z370 HD3");
			((HomeComputer *)new_com)->Show();
			break;
		}

		}

		break;
	}
	case 2:
	{
		Computer *com = new AMD();
		cout << "1.Home\n2.Game\n";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			Decorator *new_com = new HomeComputer(com);
			((HomeComputer *)new_com)->Add_GPU("AMD graphics ");
			((HomeComputer *)new_com)->Add_HDD(1000);
			((HomeComputer *)new_com)->Add_SSD(120);
			((HomeComputer *)new_com)->Add_RAM(6);
			((HomeComputer *)new_com)->Add_Matherboard("Gigabyte GA - A320M - H");
			((HomeComputer *)new_com)->Show();

			break;
		}
		case 2:
		{
			Decorator *new_com = new HomeComputer(com);
			((HomeComputer *)new_com)->Add_GPU("Nvidia GTX 1080 TI");
			((HomeComputer *)new_com)->Add_HDD(3000);
			((HomeComputer *)new_com)->Add_SSD(500);
			((HomeComputer *)new_com)->Add_RAM(16);
			((HomeComputer *)new_com)->Add_Matherboard("Gigabyte Z370 HD3");
			((HomeComputer *)new_com)->Show();
			break;
		}

		}

		break;
	}

	}
}

int main()
{
	menu();


	system("pause");

}
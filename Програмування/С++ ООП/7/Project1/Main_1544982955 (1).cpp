#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<io.h>
#include<iomanip>
#include<string>

using namespace std;
void path_f(char path[])
{
	cout << "path: ";
	cin >> path;
}
void main()
{


	char path[250];


	int c = 0;
	for (;;)
	{
		cout << "1.Create a folder\n";
		cout << "2.Create a file\n";
		cout << "3.Delete the file\n";
		cout << "4.Rename file\n";
		cout << "5.Copy\n";
		cout << "6.Exit\n";
		cin >> c;
		if (c == 6)break;
		switch (c)
		{
		case 1:
		{
			path_f(path);
			if (CreateDirectory(path, false) == 0)
				cout << "Error\n";
			else
				cout << "OK\n";
			path[0] = '\0';
			break;
		}
		case 2:
		{
			path_f(path); if (CreateFile(path, GENERIC_READ, 0, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL) == 0)
				cout << "Error\n";
			else
				cout << "OK\n";

			path[0] = '\0';
			break;
		}
		case 3:
		{
			path_f(path);
			if (remove(path) != 0)
				cout << "Error\n";
			else
				cout << "Delete\n";
			path[0] = '\0';
			break;
		}
		case 4:
		{
			char path2[250];
			path_f(path);
			cout << "path2: ";
			cin >> path2;
			if (rename(path, path2) != 0)
				cout << "Error\n";
			else
				cout << "OK\n";

			path[0] = '\0';
			break;
		}
		case 5:
		{
			path_f(path);
			char path2[250];
			cout << "path2: ";
			cin >> path2;
			if (CopyFile(path, path2, true))
				cout << "OK\n";
			else
				cout << "Error\n";

			path[0] = '\0';
			break;
		}

		}
		system("pause");
		system("cls");
	}
}
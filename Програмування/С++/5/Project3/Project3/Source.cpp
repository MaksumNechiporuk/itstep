#include<iostream>
#include <string>
using  namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string login;
	int choice, choice_valut, choice_valut1;
	double number1, number2, valuta, kvaluta;
	char operation;
	cout << "����i�� ���i� ��� ���������i�\n";
	getline(cin, login);
	if (login == "max")
	{
		cout << "���i� ����������\n";
		cout << "����\n1.�����������\n2.��������� �����\n3.������ �� �������i ������ i �i���������\n3.�i����\n4.�������� ���\n";
		cin >> choice;
		if (choice == 1 || choice == 4)
		{
			cout << "�����������\n����i�� ����� �����\t";
			cin >> number1;
			cout << "����i�� ����� �����\t";
			cin >> number2;
			cout << "�����i�� ���� ������i�\n+\n-\n*\n/\n";
			cin >> operation;
			if (operation == '/'&&number2 == 0)
			{
				cout << "����� ����� � �i���� ����, � �� ���� �i���� �� �����. ��v� ��� ����i��� ������ ����� �i��i��� �� ����\n";
				cout << "����i�� ����� �����\t";
				cin >> number2;
			}
			switch (operation)
			{
			case'+':
			{
				cout << number1 + number2 << endl;
				break;
			}
			case'-':
			{
				cout << number1 - number2 << endl;
				break;
			}
			case'*':
			{
				cout << number1 * number2 << endl;
				break;
			}
			case'/':
			{
				cout << number1 / number2 << endl;
				break;
			}
			}
		}
		if (choice == 2 || choice == 4)
		{
			cout << "��������� �����\n��� � ��� ������?\n1.�����i\n2.������\n3.����i\n4.����\n";
			cin >> choice_valut;
			cout << "����i�� ���� ��� � ��� �\n";
			cin >> valuta;
			switch (choice_valut)
			{
			case 1:
			{
				cout << "������������ �\n1.������\n2.����i\n3.����\n";
				cin >> choice_valut1;
				switch (choice_valut1)
				{
				case 1:
				{
					kvaluta = valuta / 26.13;
					cout << kvaluta << " �����i�\n";
					break;
				}
				case 2:
				{
					kvaluta = valuta / 0.41;
					cout << kvaluta << " ����i�\n";
					break;
				}
				case 3:
				{
					kvaluta = valuta / 30.72;
					cout << kvaluta << " ����\n";
					break;
				}
				default:
					break;
				}
				break;
			}
			case 2:
			{
				cout << "������������ �\n1.�����i\n2.����i\n3.����\n";
				cin >> choice_valut1;
				switch (choice_valut1)
				{
				case 1:
				{
					kvaluta = valuta * 26.13;
					cout << kvaluta << " �������\n";
					break;
				}
				case 2:
				{
					kvaluta = valuta * 62.51;
					cout << kvaluta << " ����i�\n";
					break;
				}
				case 3:
				{
					kvaluta = valuta * 0.85;
					cout << kvaluta << " ����\n";
					break;
				}
				default:
					break;
				}

				break;
			}
			case 3:
			{
				cout << "������������ �\n1.�����i\n2.������\n3.����\n";
				cin >> choice_valut1;
				switch (choice_valut1)
				{
				case 1:
				{
					kvaluta = valuta * 0.41;
					cout << kvaluta << " �������\n";
					break;
				}
				case 2:
				{
					kvaluta = valuta / 62.51;
					cout << kvaluta << " �����i�\n";
					break;
				}
				case 3:
				{
					kvaluta = valuta / 73.48;
					cout << kvaluta << " ����\n";
					break;
				}
				default:
					break;
				}

				break;
			}
			case 4:
			{
				cout << "������������ �\n1.�����i\n2.������\n3.����i\n";
				cin >> choice_valut1;
				switch (choice_valut1)
				{
				case 1:
				{
					kvaluta = valuta * 30.72;
					cout << kvaluta << " �������\n";
					break;
				}
				case 2:
				{
					kvaluta = valuta / 0.85;
					cout << kvaluta << " �����i�\n";
					break;
				}
				case 3:
				{
					kvaluta = valuta * 73.66;
					cout << kvaluta << " ����i�\n";
					break;
				}
				default:
					break;
				}

				break;
			}
			}

		}
		if (choice == 3 || choice == 4)
		{
			cout << "������ �������i ������. ����� +27 ����i +15, ��� ����i�\n ������ ������ ��� ���� ������. ����� +28 ����i +12 ��� � ����i��i��� ����i�.\n ������ �i��������� ���� ���������. ����� +18 ����i +10. �i��� ���� ���� ���.\n ";
		}

	}
	else
	{
		cout << "���i� ������������\n";
	}
	system("pause");
}
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
	cout << "Введiть логiн для авторизацiї\n";
	getline(cin, login);
	if (login == "max")
	{
		cout << "Логiн правильний\n";
		cout << "Меню\n1.Калькулятор\n2.Конвертер валют\n3.Погода на сьогоднi завтра i пiслязавтра\n3.Кiнець\n4.Виконати все\n";
		cin >> choice;
		if (choice == 1 || choice == 4)
		{
			cout << "Калькулятор\nВведiть перше число\t";
			cin >> number1;
			cout << "Введiть друге число\t";
			cin >> number2;
			cout << "Виберiть знак операцiї\n+\n-\n*\n/\n";
			cin >> operation;
			if (operation == '/'&&number2 == 0)
			{
				cout << "Друге число є рiвним нулю, а на нуль дiлити не можна. Тоvу вам потрiбно ввести число вiдмiнне від нуля\n";
				cout << "Введiть друге число\t";
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
			cout << "Конвертер валют\nЯка у вас валюта?\n1.Гривнi\n2.Долари\n3.Рублi\n4.Євро\n";
			cin >> choice_valut;
			cout << "Введiть суму яка у вас є\n";
			cin >> valuta;
			switch (choice_valut)
			{
			case 1:
			{
				cout << "Конвертувати в\n1.Долари\n2.Рублi\n3.Євро\n";
				cin >> choice_valut1;
				switch (choice_valut1)
				{
				case 1:
				{
					kvaluta = valuta / 26.13;
					cout << kvaluta << " доларiв\n";
					break;
				}
				case 2:
				{
					kvaluta = valuta / 0.41;
					cout << kvaluta << " рублiв\n";
					break;
				}
				case 3:
				{
					kvaluta = valuta / 30.72;
					cout << kvaluta << " євро\n";
					break;
				}
				default:
					break;
				}
				break;
			}
			case 2:
			{
				cout << "Конвертувати в\n1.Гривнi\n2.Рублi\n3.Євро\n";
				cin >> choice_valut1;
				switch (choice_valut1)
				{
				case 1:
				{
					kvaluta = valuta * 26.13;
					cout << kvaluta << " гривень\n";
					break;
				}
				case 2:
				{
					kvaluta = valuta * 62.51;
					cout << kvaluta << " рублiв\n";
					break;
				}
				case 3:
				{
					kvaluta = valuta * 0.85;
					cout << kvaluta << " євро\n";
					break;
				}
				default:
					break;
				}

				break;
			}
			case 3:
			{
				cout << "Конвертувати в\n1.Гривнi\n2.Долари\n3.Євро\n";
				cin >> choice_valut1;
				switch (choice_valut1)
				{
				case 1:
				{
					kvaluta = valuta * 0.41;
					cout << kvaluta << " гривень\n";
					break;
				}
				case 2:
				{
					kvaluta = valuta / 62.51;
					cout << kvaluta << " доларiв\n";
					break;
				}
				case 3:
				{
					kvaluta = valuta / 73.48;
					cout << kvaluta << " євро\n";
					break;
				}
				default:
					break;
				}

				break;
			}
			case 4:
			{
				cout << "Конвертувати в\n1.Гривнi\n2.Долари\n3.Рублi\n";
				cin >> choice_valut1;
				switch (choice_valut1)
				{
				case 1:
				{
					kvaluta = valuta * 30.72;
					cout << kvaluta << " гривень\n";
					break;
				}
				case 2:
				{
					kvaluta = valuta / 0.85;
					cout << kvaluta << " доларiв\n";
					break;
				}
				case 3:
				{
					kvaluta = valuta * 73.66;
					cout << kvaluta << " рублiв\n";
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
			cout << "Погода сьогоднi чудова. Вдень +27 вночi +15, без опадiв\n Погода завтра теж буде чудова. Вдень +28 вночi +12 але є ймовiрнiсть опадiв.\n Погода пiслязавтра буде дощдливою. Вдень +18 вночi +10. Цiлий день буде дощ.\n ";
		}

	}
	else
	{
		cout << "Логiн неправильний\n";
	}
	system("pause");
}
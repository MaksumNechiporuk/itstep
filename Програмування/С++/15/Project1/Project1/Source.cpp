#include<iostream>
#include<ctime>
#include<iomanip>
#include"windows.h"
using namespace std;
int main()
{
	srand(time(0));
	int const size = 20;//Розмір масива
	int arr[size], choice, choice1,p,l=0,r=size-1,digit,s;//choice,choice-змінні для створення можливості вибору дій,p-змінна для сортування вставкою,l-ліва межа масива,r-права межа масива
	setlocale(LC_ALL, "ukr");
	bool check = false,f, check1=false;// check-змінна для перевірки виконання дій,f-для сортування бульбашкою
	for (;;)//Головний цикл
	{
		cout << "1.Заповнити масив вручну\n2.Заповнити масив рандомно\nВаш вибiр_____\b\b\b";//Меню №1
		cin >> choice;
		for (;;)//Блок вибору способу заповнення масива
		{

			switch (choice)
			{
			case 1:
			{
				for (int i = 0; i < size; i++)//Заповнення вручну
				{
					cout << "arr[" << i << "]=";
					cin >> arr[i];
				}
				check = true;
				break;
			}
			case 2://Рандомне заповнення
			{
				for (int i = 0; i < size; i++)
				{
					arr[i] = rand() % 500;
					cout << "arr[" << i << "]=" << arr[i] << endl;

				}
				check = true;
				break;
			}
			}
			if (check == false)//Перевірка чи масив заповнений
			{
				cout << endl << "Масив незаповнений\n";
				system("pause");
				system("cls");
				break;
			}
			else if (check == true)//Перевірка чи масив заповнений
			{
				check = false;
				system("pause");
				system("cls");
				break;
			}
		}
		for (;;)//цикл для вирішення подальшої роботи з масивом
		{
			cout << "1.Сортувати масив\n2.Знайти елемент масива\n3.Повернутися до попереднього меню\n4.Вийти\nВаш вибiр_____\b\b\b";//Меню №2
			cin >> choice;
			system("cls");
			if (choice == 3)//Умова переходу до попередньго меню
			{
				system("cls");
				break;
			}
			if (choice == 4)
				break;
			switch (choice)
			{
			case 1://Сортування масива
			{
				for (;;)//Меню №3
				{
					system("cls");
					check = true;//Перевірка відсортованості масива
					cout << "Виберiть вид сортування\n1.Бульбашка\n2.Вставка\n3.Вибiрка\n4.Шейкер\n5.Повернутися до попереднього меню\nВаш вибiр_____\b\b\b";
					cin >> choice;
					if (choice == 5)//Умова переходу до попередньго меню
					{
						system("cls");
						break;
					}
					system("cls");
					cout << "Сортувати\n1.По зростанню\n2.По спаданню\nВаш вибiр_____\b\b\b";//Меню №4
					cin >> choice1;
					system("cls");
					switch (choice)
					{
					case 1:
					{
						for (int i = 0; i < size; i++)//Сортування бульбашкою
						{
							f = false;
							for (int j = 0; j < size - 1 - i; j++)
							{
								if (choice1 == 1)//Сортування по зростанню
								{
									if (arr[j] > arr[j + 1])
									{
										swap(arr[j], arr[j + 1]);
										f = true;
									}
								}
								else if (choice1 == 2)//Сортування по спаданню
								{
									if (arr[j] < arr[j + 1])
									{
										swap(arr[j], arr[j + 1]);
										f = true;
									}
								}

							}
							if (f == false)
							{
								
								break;
							}
						}
						break;
					}
					case 2://Вставка
					{
						for (int i = 1; i < size; i++)//метод вставки 
						{
							p =i;
							for (int j = i - 1; (j >= 0); j--)
							{
								if (choice1 == 1)//Сортування по зростанню
								{
									if (arr[j] > arr[p])
									{
										swap(arr[p], arr[j]);
										p--;
									}
									else
									{
										
										break;
									
									}
									}
								else if (choice1 == 2)//Сортування по спаданню
								{
									if (arr[j] < arr[p])
									{
										swap(arr[p], arr[j]);
										p--;
									}
									else
									{
										
										break;

									}
								}

							}
						}
						break;
					}
					case 3:
					{
						for (int i = 0; i < size-1; i++)//Вибірка
						{
							for (int j = i + 1; j < size; j++)
							{
								if (choice1 == 1)//Сортування по зростанню
								{
									if (arr[i] > arr[j])
									{
										swap(arr[i], arr[j]);
									
									}
								}
								else if (choice1 == 2)//Сортування по спаданню
								{
									if (arr[i] < arr[j])
									{
										swap(arr[i], arr[j]);
										
									}
								}
							}
						}
						break;
					}
					case 4:
					{
						for (int i = 0; l<r; i++)//Шейкер
						{
							for (int j = l; j < r; j++)
							{
								if (choice1 == 1)//Сортування по зростанню
								{
									if (arr[j] > arr[j + 1])
									{
										swap(arr[j], arr[j + 1]);
									}
								}
								else if (choice1 == 2)//Сортування по спаданню
								{
									if (arr[j] < arr[j + 1])
									{
										swap(arr[j], arr[j + 1]);
									}
								}
							}
							r--;
							for (int k = r; k > l; k--)
							{
								if (choice1 == 1)//Сортування по зростанню
								{
									if (arr[k] < arr[k - 1])
									{
										swap(arr[k], arr[k - 1]);

									}
								}
								else if (choice1 == 2)//Сортування по спаданню
								{
									if (arr[k] < arr[k - 1])
									{
										swap(arr[k], arr[k - 1]);
									}
								}
							}
							l++;
						}
						break;
					}
					}
					for (int i = 0; i < size; i++)
					{
						cout << "arr[" << i << "]=" << arr[i] << endl;
					}
					system("pause");
				}
				break;
			}
		
			case 2://Пошук елемента масива
			{
				for (;;)//Меню №5
				{
					system("cls");
					cout << "Виберiть вид пошуку\n1.Лiнiйний\n2.Бiнарний\n3.Назад\nВаш вибiр_____\b\b\b";
					cin >> choice;
					system("cls");
					if (choice == 3)
						break;
					cout << "Введiть число яке ви хочете знайти\nЧисло_____\b\b\b";
					cin >> digit;
					system("cls");
					switch (choice)
					{
					case 1: //Лінійний пошук
					{
						for (int i = 0; i < size; i++)
						{
							if (arr[i] == digit)
							{
								check1 = true;
								cout << arr[i] << " - позицiя числа " << i << endl;
							
							}
						}
						if (check1 == false)
						{
							cout << "Даного числа не знайдено\n";
							system("pause");
							system("cls");
						}
						system("pause");
						break;
					}
					case 2:
					{
						if (check == true)
						{
							for (int i = 0;; i++)
							{

								s = (l + r) / 2;
								if (choice1 == 1)//Якщо масив відсортовано  по зростанню
								{
									if (arr[s] < digit)
									{
										l = s ;
									}
									else if (arr[s] > digit)
									{
										r = s ;
									}
								}
								else if (choice1 == 2)//Якщо масив відсортовано  по спаданню
								{
									if (arr[s] > digit)
									{
										l = s ;
									}
									else if (arr[s] < digit)
									{
										r = s ;
									}
								}

								if (arr[s] == digit)
								{

									check1 = true;
									cout << arr[s] << " - позицiя числа " << s << endl;
									system("pause");
									system("cls");
									break;
								}

								if ((l = s + 1) == r)
								{
									break;
								}
								else if (l == (r = s - 1))
									break;
							}
							if (check1 == false)
							{
								cout << "Даного числа не знайдено\n";
								system("pause");
								system("cls");
							}
						}
						l = 0, r = size - 1, s = 0;
						break;
					}
					}
					if (check == false)
					{
						cout << "Щоб знайти елемент масива даним способом потрiбно вiдсортувати масив\n";
						system("pause");
						system("cls");

						break;
					}
				}
				break;
			}
			}
			
		}
		if (choice == 4)
			break;
		
	}




	system("pause");
}
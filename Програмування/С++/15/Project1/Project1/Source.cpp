#include<iostream>
#include<ctime>
#include<iomanip>
#include"windows.h"
using namespace std;
int main()
{
	srand(time(0));
	int const size = 20;//����� ������
	int arr[size], choice, choice1,p,l=0,r=size-1,digit,s;//choice,choice-���� ��� ��������� ��������� ������ ��,p-����� ��� ���������� ��������,l-��� ���� ������,r-����� ���� ������
	setlocale(LC_ALL, "ukr");
	bool check = false,f, check1=false;// check-����� ��� �������� ��������� ��,f-��� ���������� ����������
	for (;;)//�������� ����
	{
		cout << "1.��������� ����� ������\n2.��������� ����� ��������\n��� ���i�_____\b\b\b";//���� �1
		cin >> choice;
		for (;;)//���� ������ ������� ���������� ������
		{

			switch (choice)
			{
			case 1:
			{
				for (int i = 0; i < size; i++)//���������� ������
				{
					cout << "arr[" << i << "]=";
					cin >> arr[i];
				}
				check = true;
				break;
			}
			case 2://�������� ����������
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
			if (check == false)//�������� �� ����� ����������
			{
				cout << endl << "����� ������������\n";
				system("pause");
				system("cls");
				break;
			}
			else if (check == true)//�������� �� ����� ����������
			{
				check = false;
				system("pause");
				system("cls");
				break;
			}
		}
		for (;;)//���� ��� �������� �������� ������ � �������
		{
			cout << "1.��������� �����\n2.������ ������� ������\n3.����������� �� ������������ ����\n4.�����\n��� ���i�_____\b\b\b";//���� �2
			cin >> choice;
			system("cls");
			if (choice == 3)//����� �������� �� ����������� ����
			{
				system("cls");
				break;
			}
			if (choice == 4)
				break;
			switch (choice)
			{
			case 1://���������� ������
			{
				for (;;)//���� �3
				{
					system("cls");
					check = true;//�������� ������������� ������
					cout << "�����i�� ��� ����������\n1.���������\n2.�������\n3.���i���\n4.������\n5.����������� �� ������������ ����\n��� ���i�_____\b\b\b";
					cin >> choice;
					if (choice == 5)//����� �������� �� ����������� ����
					{
						system("cls");
						break;
					}
					system("cls");
					cout << "���������\n1.�� ���������\n2.�� ��������\n��� ���i�_____\b\b\b";//���� �4
					cin >> choice1;
					system("cls");
					switch (choice)
					{
					case 1:
					{
						for (int i = 0; i < size; i++)//���������� ����������
						{
							f = false;
							for (int j = 0; j < size - 1 - i; j++)
							{
								if (choice1 == 1)//���������� �� ���������
								{
									if (arr[j] > arr[j + 1])
									{
										swap(arr[j], arr[j + 1]);
										f = true;
									}
								}
								else if (choice1 == 2)//���������� �� ��������
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
					case 2://�������
					{
						for (int i = 1; i < size; i++)//����� ������� 
						{
							p =i;
							for (int j = i - 1; (j >= 0); j--)
							{
								if (choice1 == 1)//���������� �� ���������
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
								else if (choice1 == 2)//���������� �� ��������
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
						for (int i = 0; i < size-1; i++)//������
						{
							for (int j = i + 1; j < size; j++)
							{
								if (choice1 == 1)//���������� �� ���������
								{
									if (arr[i] > arr[j])
									{
										swap(arr[i], arr[j]);
									
									}
								}
								else if (choice1 == 2)//���������� �� ��������
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
						for (int i = 0; l<r; i++)//������
						{
							for (int j = l; j < r; j++)
							{
								if (choice1 == 1)//���������� �� ���������
								{
									if (arr[j] > arr[j + 1])
									{
										swap(arr[j], arr[j + 1]);
									}
								}
								else if (choice1 == 2)//���������� �� ��������
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
								if (choice1 == 1)//���������� �� ���������
								{
									if (arr[k] < arr[k - 1])
									{
										swap(arr[k], arr[k - 1]);

									}
								}
								else if (choice1 == 2)//���������� �� ��������
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
		
			case 2://����� �������� ������
			{
				for (;;)//���� �5
				{
					system("cls");
					cout << "�����i�� ��� ������\n1.�i�i����\n2.�i������\n3.�����\n��� ���i�_____\b\b\b";
					cin >> choice;
					system("cls");
					if (choice == 3)
						break;
					cout << "����i�� ����� ��� �� ������ ������\n�����_____\b\b\b";
					cin >> digit;
					system("cls");
					switch (choice)
					{
					case 1: //˳����� �����
					{
						for (int i = 0; i < size; i++)
						{
							if (arr[i] == digit)
							{
								check1 = true;
								cout << arr[i] << " - �����i� ����� " << i << endl;
							
							}
						}
						if (check1 == false)
						{
							cout << "������ ����� �� ��������\n";
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
								if (choice1 == 1)//���� ����� �����������  �� ���������
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
								else if (choice1 == 2)//���� ����� �����������  �� ��������
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
									cout << arr[s] << " - �����i� ����� " << s << endl;
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
								cout << "������ ����� �� ��������\n";
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
						cout << "��� ������ ������� ������ ����� �������� ����i��� �i���������� �����\n";
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
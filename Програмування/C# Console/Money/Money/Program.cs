using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Money
{
    class Program
    {
        static void Main(string[] args)
        {
            Menu();
        }

        static void Menu()
        {

            Money money = new Money();
            money.Money_ = 500;
            while (true)
            {
                Console.WriteLine("1.Money + money");
                Console.WriteLine("2.Money - money");
                Console.WriteLine("3.Money / digit");
                Console.WriteLine("4.Money * digit");
                Console.WriteLine("5.Money ++");
                Console.WriteLine("6.Money --");
                Console.WriteLine(money);
                int c=0;
                c = int.Parse(Console.ReadLine());
                try
                {
                    switch (c)
                    {
                        case 1:
                            {
                                Console.WriteLine("Enter money");
                                Money moneySum = new Money();
                                moneySum.Money_ = double.Parse(Console.ReadLine());
                                money = money + moneySum;
                                break;
                            }
                        case 2:
                            {
                                Console.WriteLine("Enter money");
                                Money moneySum = new Money();
                                moneySum.Money_ = double.Parse(Console.ReadLine());
                                money = money - moneySum;
                                break;
                            }
                        case 3:
                            {
                                Console.WriteLine("Enter digit");

                                double digit = double.Parse(Console.ReadLine());
                                money = money / digit;

                                break;
                            }
                        case 4:
                            {

                                Console.WriteLine("Enter digit");

                                double digit = double.Parse(Console.ReadLine());
                                money = money * digit;

                                break;
                            }
                        case 5:
                            {
                                money++;
                                break;
                            }
                        case 6:
                            {
                                money--;
                                break;
                            }
                    }
                }
                catch(Exception ex)
                {
                    Console.WriteLine(ex.Message);
                    break;
                }
               
                Console.ReadKey();
                Console.Clear();

            }


        }
    }

 
}

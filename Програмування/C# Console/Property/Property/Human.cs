using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Property
{
    class Human
    {
        private string surname;

        public string Surname
        {
            get { return surname; }
            set { surname = value; }
        }

        private string name;

        public string Name
        {
            get { return name; }
            set { name = value; }
        }

        private string mail;

        public string Mail
        {
           get { return mail; }
           private set { mail = value; }
        }
        private double money=1000;

        public double Money
        {
           private get { return money; }
            set {if(value>0&&money>value)
                money-= value;
            else
                    Console.WriteLine("Not enough money");
        }
        }

        public Human()
        {
            Console.WriteLine("Enter mail");
            mail = Console.ReadLine();
       
        }

        public void Show()
        {
            Console.WriteLine($"Name: {name}  Surname: {surname} Money: {money} Mail: {mail}");
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Property
{
    class Program
    {
        static void Main(string[] args)
        {
            Human p = new Human();
            p.Name = "Human 1";
            p.Surname = "Petrov";
            p.Show();
            p.Money =  200;
            p.Show();
            p.Money = 200;
            p.Show();
            p.Money = 200;
            p.Show();
            p.Money = 500;
            p.Show();


        }
    }
}

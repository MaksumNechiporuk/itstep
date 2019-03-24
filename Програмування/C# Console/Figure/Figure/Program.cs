using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Figure
{
    class Program
    {
        static void Main(string[] args)
        {
            Figure a = new Figure();
            Figure b = new Figure();
            a.name = "Triangle";
            b.name = "triangle";
            a.area = 12;
            b.area = 16;
            Console.WriteLine("==  " + (a==b));
            Console.WriteLine(">  " + (a > b));
            Console.WriteLine("<  " + (a <b));

            Console.WriteLine(("Figure1="+(a.area)));
            Console.WriteLine("Figure2=" + (b.area));
             Console.WriteLine("Figure1 + Figure2  " + (a + b));

            Console.WriteLine("Figure1 - Figure2  " + (a- b));
            Console.WriteLine("Figure1 - digit  " + (a  -5));
            Console.WriteLine(" digit  - Figure1  " + (5 - a));
              Console.WriteLine("Figure1 + digit  " + (a + 5));
            Console.WriteLine(" digit  + Figure1  " + (5 + a));

        }
    }
}

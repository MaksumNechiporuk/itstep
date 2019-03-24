using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace operation____
{
    class Program
    {
        static void Main(string[] args)
        {
            Group p = new Group();
            Human h = new Human("Ivanov");
            p[4] = "p1";
            Console.WriteLine(p);
            Console.WriteLine("---------------------------------");
            p[4] = "Petrov";
            Console.WriteLine(p);
            Console.WriteLine("---------------------------------");
            Console.WriteLine(p[0]);
            Console.WriteLine("---------------------------------");
            Group group = (Group)h;
            Console.WriteLine(group);
            Console.WriteLine("---------------------------------");

            Group p1 = new Group();
            p1 = p + group;
            Console.WriteLine(p1);

        }
    }
}

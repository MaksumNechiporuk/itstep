using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4
{
    class Program
    {
        static void Main(string[] args)
        {
            string a, b;
            Console.WriteLine("Enter a");
            a = Console.ReadLine();
            Console.WriteLine("Enter b");
            b = Console.ReadLine();
            for(int i=0;i<a.Length;i++)
            {
                char r = a[i];
               var c= b.Count(b=>b == r);
            }
        }
    }
}

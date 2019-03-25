using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 3, b = 7;

            for (int i = a; i <= b; ++i)
            {
                for (int j = 0; j < i; ++j)
                {
                    Console.Write(i.ToString() + " ");
                }
                Console.WriteLine();
            }
        }
    }
}

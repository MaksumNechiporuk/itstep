using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            string line1 = Console.ReadLine();
            n = Convert.ToInt32(line1);
            int left = n;
            int rev = 0;
            int r = 0;
            while (left > 0)
            {
                r = left % 10;
                rev = rev * 10 + r;
                left = left / 10; 
            }
       Console.WriteLine(rev);
        }
    }
}

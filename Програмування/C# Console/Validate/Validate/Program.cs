using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Validate
{
    class Program
    {
        static void Main(string[] args)
        {
            string n = @"\(\d{3}\)-\d{3}-\d{2}-\d{2}";
            string name = @"^[A-Z]{1}[a-z]{2,10}\s[A-Z]{1}[a-z]{2,10}$";

            string n1 = Console.ReadLine();
            if (Regex.IsMatch(n1, name))
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }




        }
    }
}

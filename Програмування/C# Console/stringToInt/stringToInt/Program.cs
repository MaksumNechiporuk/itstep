using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace stringToInt
{
    class Program
    {
        static void Main(string[] args)
        {
            string n;
            double res = 0;
            n = Console.ReadLine();
            Console.WriteLine(Last_Bracket_C(n));
            Console.WriteLine(Last_Bracket_O(n));
            Console.WriteLine(Multiplication(n));
            char[] n_char = new char[n.Length];
                    n.CopyTo()


            while (true)
            {
                if (Multiplication(n) == -1)
                {
                    break;
                }
                else
                {
                    res = Double.Parse(n[Multiplication(n) - 1].ToString()) * Double.Parse(n[Multiplication(n) + 1].ToString());
                    n_char[Multiplication(n)] = (char)res;

                }
            }
           
            Console.WriteLine(res.ToString());
        }
        static int Last_Bracket_O(string a)
        {
            return a.LastIndexOf('(');
        }
        static int Last_Bracket_C(string a)
        {
            return a.IndexOf(')');
        }

        static int Multiplication(string a)
        {
            return a.IndexOf('*');
        }
        static int Division(string a)
        {
            return a.IndexOf('/');
        }
        static int Add(string a)
        {
            return a.IndexOf('+');
        }
    }
}

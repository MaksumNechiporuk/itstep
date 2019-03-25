using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace STRING1
{
    class Program
    {
        static void Main(string[] args)
        {
            string str;
            char a;
            Console.Write("Enter str\n");
            str = Console.ReadLine();
            Console.Write("Enter symbol\n");
            a = (char)Console.Read();
            int pos = str.LastIndexOf(a);
            str = str.Replace(a,char.ToUpper(a));
            Console.WriteLine(str);
            char[] ch = str.ToCharArray();
            for (int i = pos; i < ch.Length; i++)
            {
                ch[i] = ' ';
            }
           str = new string(ch);
           Console.WriteLine(str);
        }
    }
}

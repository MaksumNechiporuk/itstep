using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace STRING2
{
    class Program
    {
        static void Main(string[] args)
        {
            string str,str1;
            Console.Write("Enter str1\n");
            str = Console.ReadLine();
            Console.Write("Enter str2\n");
            str1 = Console.ReadLine();
            char []str_c =str.ToCharArray();
            char[] str_c1 = str1.ToCharArray();
            
            int count = 0,count_all=0;
            char a=' ';
            bool c = false;
            for (int i = 0; i < str_c1.Length; i++)
            {
                for (int j = 0; j <str_c.Length ; j++)
                {
                    if(str_c[j]==str_c1[i])
                    {
                        a = str_c[j];
                        str_c[i] =' ';
                        count++;
                        count_all++;
                        c = true;
                    }
                }
                if (c == true)
                {
                    Console.WriteLine(a + " - " + count);
                    count = 0;
                    c = false;
                }
            }
            str = new string(str_c);
            str = str.Trim();
            Console.WriteLine("Total number of deleted characters "+count_all);
            Console.WriteLine("The number of characters remaining in the line " + str.Length);
     
            Console.WriteLine("Rez="+str);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2._2
{
    class Program
    {
        static void Main(string[] args)
        {
            int m = 5, n = 5;
            int[,] arr = new int[m,n];
            Random r = new Random();
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    arr[i,j] = r.Next(20);

                    Console.Write("{0}\t", arr[i, j].ToString());      
                }
                Console.WriteLine();     
            }
            int m1;
            int n1;

            while (true)
            {
                Console.Write("\nEnter m  ");
                string valueStr = Console.ReadLine();
                int.TryParse(valueStr, out m1);
                Console.Write("\nEnter n  ");
                valueStr = Console.ReadLine();
                int.TryParse(valueStr, out n1);
                if (m1 < 5 && n1 < 5&&m1!=n1)
                    break;
                
            }
         
            int temp;
            for (int i = 0; i < m; ++i)
            {
                temp = arr[i, m1];
                arr[i, m1] = arr[i, n1];
                arr[i, n1] = temp;
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    

                    Console.Write("{0}\t", arr[i, j].ToString());
                }
                Console.WriteLine();
            }

        }
    }
}

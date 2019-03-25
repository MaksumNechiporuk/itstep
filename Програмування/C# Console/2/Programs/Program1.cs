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
            int[] arr = new int[10];
            Random r = new Random();
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = r.Next(-10, 10);
                Console.Write(arr[i]+"  ");
            }
            int b;
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] >= 0)
                  for (int j = i; j < arr.Length; j++)
                {
                   if(  arr[j] < 0)
                    {
                        b = arr[j];
                        arr[j] = arr[i];
                        arr[i] = b;
                    }
                }
            }
            Console.WriteLine();
            for (int i = 0; i < arr.Length; i++)
            {
                Console.Write(arr[i] + "  ");
            }

        }
    }
}

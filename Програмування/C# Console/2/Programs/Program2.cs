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
                Console.Write(arr[i] + " ");
            }

            bool result = false;

            while (result == false)
            {
                Console.Write("\nGive me integer, please: ");
                string valueStr = Console.ReadLine();
                int value;
                result = int.TryParse(valueStr, out value);
                if (result == false)
                {
                    Console.WriteLine("\nERROR! It is not integer.");
                }
                else
                {
                    int counter = 0;
                    Console.WriteLine();
                    foreach (int elem in arr)
                    {
                        if (elem == value)
                            counter++;
                        Console.Write(elem + " ");
                    }
                    Console.WriteLine(String.Format("\n\nValue ({0}) has encountered {1} times in the array.", value, counter));
                }
            }
        }
    }
}
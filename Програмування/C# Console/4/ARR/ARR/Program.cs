using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ARR
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[10] { 1, 0, 3, 5, 4 ,0,6,0,0,10};
            Show(arr);
            DeleteNull(arr);
            Show(arr);
            int[,] arr1 = new int[5, 10];
        }

        static void DeleteNull(int []arr)
        {
            int j = arr.Count() - 1;
            for (int k = 0; k < arr.Count(); k++)
                for (int i=0;i<arr.Count();i++)
            {
                if(arr[i]==0)
                {

                        int a = arr[i];
                        arr[i] = arr[j];
                        arr[j] = a;
                    if (arr[j] == 0)
                    {
                        arr[j] = -1;
                        j--;
                    }

                }
            }
        }
        static void Show(int[] arr)
        {
            foreach(var a in arr)
            {
                Console.Write(a+"  ");

            }
            Console.Write("\n");

        }
    }
}

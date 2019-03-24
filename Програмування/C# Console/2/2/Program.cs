using System;


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
            for (int i = arr.Length - 1; i >= 0; --i)
            {
                if (arr[i] >= 0)
                {
                    b = arr[i];
                    for (int j = i; j < arr.Length - 1; ++j)
                    {
                        arr[j] = arr[j + 1];
                    }
                    arr[arr.Length - 1] = b;
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

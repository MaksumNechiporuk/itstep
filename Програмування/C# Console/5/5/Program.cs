using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            Rectangle rectangle = new Rectangle(15, 5);
            Rectangle rectangle1 = new Rectangle(10, 3);

            Console.WriteLine(rectangle);
            Console.WriteLine();

            Console.WriteLine(rectangle1);
            Rectangle rectangle3= rectangle + rectangle1;
            Console.WriteLine();
            Console.WriteLine(rectangle3);
             rectangle3 = rectangle - rectangle1;
            Console.WriteLine();
            Console.WriteLine(rectangle3);
            rectangle3--;
            Console.WriteLine();
            Console.WriteLine(rectangle3);
            rectangle3++;
            Console.WriteLine();
            Console.WriteLine(rectangle3);
            Console.WriteLine(rectangle> rectangle1);



        }
    }
}

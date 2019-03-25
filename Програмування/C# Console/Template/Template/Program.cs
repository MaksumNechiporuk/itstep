using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Template
{
    class Program
    {
        static void Main(string[] args)
        {
            //MyClass<string> a = new Der("12");
            //Console.WriteLine(a);

            MyClass<int> a1 = new Der1(5);
            Console.WriteLine(a1 );
            
            MyClass<double> a3 = new Der2(14.12);
            Console.WriteLine(a3);
        }
    }

    class MyClass <T> where T:struct
    {
       public T position;

        public MyClass(T p)
        {
            position = p;
        }

        public override string ToString()
        {
            Console.WriteLine(position);
            return " ";
        }
    }
    //class Der : MyClass<string>
    //{
    //    public Der(string p) : base(p)
    //    {
    //    }
    //}
    class Der1 : MyClass<int>
    {
        public Der1(int p) : base(p)
        {
        }
    }
    class Der2 : MyClass<double>
    {
        public Der2(double p) : base(p)
        {
        }     
    }
}

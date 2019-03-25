using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Library
{
    public  class Person
    {
      public  string name;
        public int salary;

        public override string ToString()
        {
            Console.WriteLine(name+ "  "+ salary);
            return "";
        }

    }
}

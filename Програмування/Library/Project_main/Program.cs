using Library;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_main
{
    class Program
    {
        static void Main(string[] args)
        {
            Person [] persons = new Person[3];
            persons[0] = new Person() { name = "Ivanov", salary = 10000 };
            persons[1] = new Person() { name = "Petrov", salary = 8000 };
            persons[2] = new Person() { name = "Ivanov 2", salary = 15000 };
            Firm firm = new Firm(persons);
            foreach(var item in firm)
            {
                Console.WriteLine(item);
            }
            
        }
    }
}

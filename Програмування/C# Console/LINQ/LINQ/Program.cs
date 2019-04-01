using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LINQ
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Person> people = new List<Person>
            {
                new Person{Surname="Petrov",Name="Petro",Salary=3000,AmountMonth=6},
                new Person{Surname="Sidorov",Name="Pavlo",Salary=5000,AmountMonth=2},
                new Person{Surname="Ivanov",Name="Ivan",Salary=4000,AmountMonth=1},
                new Person{Surname="Kalinin",Name="Maxim",Salary=10000,AmountMonth=5},
                new Person{Surname="Sodorov",Name="Zahar",Salary=7300,AmountMonth=8},
                new Person{Surname="Antonov",Name="Ivan",Salary=6200,AmountMonth=10},

        };

            HeaderShow("Name");
            var Name = people.Select(x => x.Name).ToList();
            foreach (var item in Name)
            {
                Console.WriteLine(item);
            }
            Console.WriteLine();
            var Salary = people.Sum(x => (double)x.Salary * x.AmountMonth);
            HeaderShow("Salary");

            Console.WriteLine(Salary);
            Console.WriteLine();
            Console.WriteLine("Big salary");
            IEnumerable<Person> BigSalary = people.Where(x=>x.Salary>5000).ToList();
            foreach (var item in BigSalary)
            {
                Console.WriteLine($"{item.Name}  {item.Surname}  {item.Salary}");
            }
            Console.WriteLine();

            var res5 = people.Select(x => new {FirmName ="My cool firm",FIO=x.Name+" "+x.Surname,TotalSalary=people.Select(r=>r.Salary*r.AmountMonth),AVGSalary=(int)people.Average(t=>t.Salary)});

        }
        static void HeaderShow(string str)
        {
            Console.WriteLine(str);
        }
    }

  
    class Person
    {
        public string Name { get; set; }
        public string Surname { get; set; }
        public int Salary { get; set; }
        static int amount=1;
        int number;
        public int AmountMonth { get; set; }
        public Person()
        {
            number = amount;
            amount++;
        }
    }

}

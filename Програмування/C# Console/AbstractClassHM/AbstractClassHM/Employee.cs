using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractClassHM
{
  abstract  class Employee
    {
        public string Name { get; set; }
        public string SurName { get; set; }
        public double Salary { get; set; }
        public abstract void IssueSalary();
        public Employee(string n,string surN)
        {
            Name = n;
            SurName = surN;
        }
        public void Show()
        {

            Console.WriteLine($"Name: {Name,20}  {SurName}                Salary: {Salary}");
        }
    }
}

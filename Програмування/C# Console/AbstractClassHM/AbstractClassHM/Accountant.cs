using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractClassHM
{
     class Accountant : Employee
    {
        public Accountant(string n, string surN) : base(n, surN) { }
        
        

        public override void IssueSalary()
        {
            Salary = 7000;
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractClassHM
{
    class Manager : Employee
    {
        private double AmountSell;

        public Manager(string n, string surN) : base(n,surN)
        {
        }

        public void CalculateSumSale()
        {
            Random random = new Random();
            AmountSell = random.Next(200000, 1000000);
        }
        public override void IssueSalary()
        {
            Salary = AmountSell * 0.05;
        }
    }
}

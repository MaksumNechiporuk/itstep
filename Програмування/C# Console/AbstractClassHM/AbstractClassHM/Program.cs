using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace AbstractClassHM
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee[] employees=new Employee[10];
            Random random = new Random();
            for (int i = 0; i < 10; i++)
            {
                if (random.Next(10) % 2 == 0)
                    employees[i] = new Manager("Manager" + i, i.ToString());
                else employees[i] = new Accountant("Accountant" +i,i.ToString());
                Thread.Sleep(50);

            }
            Console.WriteLine("Salary fund:" + AccrualPayments(employees));
        }
        static double AccrualPayments(Employee []employees)
        {
            double sum = 0;


            for (int i = 0; i < 10; i++)
            {
                if (employees[i]is Manager)
                {
                   ((Manager) employees[i]).CalculateSumSale();
                    ((Manager)employees[i]).IssueSalary();
                }
                else
                    ((Accountant)employees[i]).IssueSalary();
                employees[i].Show();
                sum += employees[i].Salary;
            }
            return sum;
        }
    }
}

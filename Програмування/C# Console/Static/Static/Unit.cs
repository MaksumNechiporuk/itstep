using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Static
{
    public class Unit
    {
        private string name;
        static string type; 
        readonly  int power;
        static int count = 0;
        private int number;
        public int Number { get => number; set => number = value; }
        public string Name { get => name; set => name = value; }
        public int Power { get=>  power;}
        public Unit()
        {
            Random r = new Random();
            count++;
            number = count;
            power = r.Next(1,100);
            type = "default";
            Thread.Sleep(50);
        }
      
        public Unit(string  type_)
        {
      
            type = type_;
            Random r = new Random();
            count++;
            number = count;
            power = r.Next(1, 100);

        }
        public void Show()
        {
            Console.WriteLine("Name:{0}  Power: {1} Number: {2} Count:{3}  Type:{4}",name,power,number,count,type);
        }
    }
}

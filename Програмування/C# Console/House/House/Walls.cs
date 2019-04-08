using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    class Walls : IPart
    {
        public string Name { get; set; }
        public Walls(string n)
        {
            Name = n;

        }
        public void Show()
        {
            Console.WriteLine(Name);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    class Roof : IPart
    {

        public string Name { get; set; }
        public Roof(string n)
        {
            Name = n;
        
        }
        public void Show()
        {
            Console.WriteLine(Name);
        }
    }
}

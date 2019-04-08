using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    class Window : IPart
    {
        public string Name { get; set; }
        public Window(string n)
        {
            Name = n;

        }
        public void Show()
        {
            Console.WriteLine(Name);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    class Basement : IPart
    {
        public string Name { get; set; }
        string material;
        public Basement(string n,string m)
        {
            Name = n;
            material = m;
        }
        public void Show()
        {
            Console.WriteLine(Name + "  " + material);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    class Door : IPart
    {
        public string Name { get; set; }
        private string Material;
        public Door(string n,string m)
        {
            Name = n;
            Material = m;
        }   
        public void Show()
        {
            Console.WriteLine(Name+"  "+Material);
        }
    }
}

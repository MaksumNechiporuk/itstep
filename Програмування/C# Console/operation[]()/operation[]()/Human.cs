using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace operation____
{
    class Human
    {
        public string name;

        public Human(string n)
        {
            name = n;
        }
        public static explicit operator Group(Human h)
            {
            Group group = new Group();
            group[0] = h.name;
            return group;
            
            }
    }
}

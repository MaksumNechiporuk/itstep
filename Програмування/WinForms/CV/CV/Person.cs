using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CV
{
    class Person
    {
        public string Name { get; }
        public string SurName { get; }
        public int Age { get;  }
        public string Gouder { get; }
        public string City { get; }
        public List<string> reasons = new List<string>();
        public Person(string n,string s,int a,string g,string c,List<string> r)
        {
            Name = n;
            SurName = s;
            Age = a;
            Gouder = g;
            City = c;
            reasons = r;
        }
    }
}

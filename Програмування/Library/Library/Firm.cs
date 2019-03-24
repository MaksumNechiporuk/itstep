using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Library
{
    public class Firm: IEnumerable
    {
      public  Person[] persons = new Person[3];

        public IEnumerator GetEnumerator()
        {
            return persons.GetEnumerator();
        }
        public Firm(Person []p)
        {
            persons = p;
        }
    }
}

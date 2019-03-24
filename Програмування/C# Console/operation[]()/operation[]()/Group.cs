using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace operation____
{
    class Group
    {
        public string []name;
        public int size = 0;

       

        public string this [int i]
        {
            get
            {
                return name[i];
            }

            set
            {
                if(i>0&&i<size)
                {

                    name[i] = value;
                   
                }
                else
                {
                    size++;
                    Array.Resize(ref name, size);
                    name[size - 1] = value;
                }
            }
        }
        public override string ToString()
        {
            for(int i=0;i<name.Length;i++)
            Console.WriteLine(name[i]);
            return "";
        }
        public static Group operator +( Group g1,  Group g2)
        {
                      for (int i = 0; i < g1.size; i++)
            {
                g2[0] = g1.name[i];
            }
                  return g2;
        }
    }
}

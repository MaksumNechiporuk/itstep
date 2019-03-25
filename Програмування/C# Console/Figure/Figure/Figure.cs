using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Figure
{
    class Figure
    {
         
        public string name { get; set; }
        public double area { get; set; }
        public static bool operator ==(Figure c1, Figure c2)
        {
            return ((c1.area == c2.area) &&(c1.name.ToUpper()==c2.name.ToUpper()));
            
        }
        public static bool operator !=(Figure c1, Figure c2)
        {
            return !((c1.area == c2.area) && (c1.name.ToUpper() == c2.name.ToUpper()));
        }
        public static bool operator >(Figure c1, Figure c2)
        {
            return c1.area > c2.area;
        }
        public static bool operator <(Figure c1, Figure c2)
        {
            return c1.area < c2.area;
        }

        public static double operator +(Figure c1, Figure c2)
        {
            return c1.area + c2.area;
        }

        public static double operator -(Figure c1, Figure c2)
        {
            return c1.area - c2.area;
        }

        public static double operator -(Figure c1, double c2)
        {
            return c1.area - c2;
        }


        public static double operator -(double c1, Figure c2)
        {
            return c1 - c2.area;
        }

        public static double operator +(Figure c1, double c2)
        {
            return c1.area + c2;
        }


        public static double operator +(double c1, Figure c2)
        {
            return c1 + c2.area;
        }

    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5
{
    class Rectangle
    {
        public int lenght { get; set; }
        public int width { get; set; }
        public int area;
        public Rectangle(int l,int w)
        {
            lenght = l;
            width = w;
        }

        public override string ToString()
        {
            for (int j = 0; j < width; j++)
            {
                for (int i = 0; i < lenght; i++)
                {
                    if (j == 0 || j == width - 1) Console.Write("* ");
                    else if (i == 0 || i == lenght - 1) Console.Write("* ");
                    else Console.Write("  ");
                }
                Console.WriteLine();
            }
            return " ";
        }
        public static bool operator >(Rectangle r1, Rectangle r2)
        {
            return (r1.lenght *r1.width )> (r2.lenght * r2.width);
        }

        public static bool operator <(Rectangle r1, Rectangle r2)
        {
            return !((r1.lenght * r1.width) > (r2.lenght * r2.width));
        }
        public static Rectangle operator +(Rectangle r1, Rectangle r2)
        {
            int w = r1.width > r2.width ? r2.width : r1.width;
            int l = r1.lenght + r2.lenght;
            Rectangle rectangle = new Rectangle(l, w*2);
            return rectangle;
        }

        public static Rectangle operator -(Rectangle r1, Rectangle r2)
        {
            int w = r1.width > r2.width ? r2.width : r1.width;
            int l = r1.lenght - r2.lenght;
            Rectangle rectangle = new Rectangle(l, w * 2);
            return rectangle;
        }
      
        public static Rectangle operator --(Rectangle  r1)
        {
            r1.lenght--;
            return r1;
        }

        public static Rectangle operator ++(Rectangle r1)
        {
            r1.lenght++;
            return r1;
        }
    }
}

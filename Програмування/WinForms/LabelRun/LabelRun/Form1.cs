using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LabelRun
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            Random a = new Random();
            Point point = new Point(label1.Location.X - 10, label1.Location.Y - 10);
            Rectangle rectangle = new Rectangle(point,new Size(label1.Location.X , label1.Location.Y));
            if(rectangle.Contains(e.Location))
            {
               Point point1 = new Point(a.Next(5, Width - 100), a.Next(5, Height-100));

                label1.Location = point1;

            }


        }
    }
}

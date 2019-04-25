using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Paint
{
    public partial class Form1 : Form
    {
        Graphics g;
        int initX;
        int initY;
        bool paint = false;
        DialogResult result;
        public Form1()
        {
            InitializeComponent();
            g = CreateGraphics();

        }

        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            if (paint&& initX!=0&& initY!=0)
            {               
                Pen sb = new Pen(colorDialog1.Color);
                g.DrawLine(sb, e.X, e.Y, initX, initY);
                initX = e.X;
                initY = e.Y;            
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            paint = true;

            initX = e.X;
            initY = e.Y;

        }

        private void Form1_MouseUp(object sender, MouseEventArgs e)
        {
            paint = false;

        }

        private void button1_Click(object sender, EventArgs e)
        {
             result = colorDialog1.ShowDialog();

            button1.Visible = false;
        }
    }
}

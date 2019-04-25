using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
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
            Rectangle rectangle = new Rectangle(point, new Size(label1.Width + 20, label1.Height + 20));
            if (rectangle.Contains(new Point(e.X, e.Y)))
            {
                Point point1 = new Point(a.Next(5, Width - 100), a.Next(5, Height - 100));

                label1.Location = point1;
            }
            }


        

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private  void label1_MouseMove(object sender, MouseEventArgs e)
        {
            label1.Text = "Ви виграли";
            CancellationTokenSource source = new CancellationTokenSource();
            var t = Task.Run(async delegate
            {
                await Task.Delay(TimeSpan.FromSeconds(1), source.Token);
                return 42;
            });

            t.Wait();
            label1.Text = "Злови мене";

        }
    }
}

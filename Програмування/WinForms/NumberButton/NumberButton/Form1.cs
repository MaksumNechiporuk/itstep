using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace NumberButton
{
    public partial class Form1 : Form
    {
        int x = 0, y = 0,i=0,pos=0,count=0;
        List<int> number = new List<int>();
        public Form1()
        {
            InitializeComponent();
            timer1.Start();
            number.Add(0);
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            AddButton();
            i++;
            if (i > 15)
                timer1.Stop();
            if(i%4==0)
            {
                y += 60;
                x = 0;
            }

        }

        void AddButton()
        {
            Random a = new Random();
            Button button = new Button
            {
                Text = a.Next(1, 100).ToString(),
                Size = new Size(70, 50),
                Location = new Point(x, y)
            };
            button.Click += Button_Click;
            Controls.Add(button);
            x += button.Height+20;
          
        }

        private void Button_Click(object sender, EventArgs e)
        {
         Button b=(sender as Button);
            number.Add(int.Parse(b.Text));
            count++;
            if (number[pos] <= number[number.Count-1])
            {
                pos++;
                b.Enabled = false;
            }
            else
            {
                DialogResult result = MessageBox.Show("Game Over", "Game", MessageBoxButtons.OK);
                this.Close();
            }

            if (pos == 16)
            {
                DialogResult result = MessageBox.Show("Yon Win", "Game", MessageBoxButtons.OK);
                this.Close();
            }
          

        }
    }
}

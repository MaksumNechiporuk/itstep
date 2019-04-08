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

namespace TamagotchiHW
{
    public partial class Form1 : Form
    {
        List<string> a =new List<string>{ "Покормить", "Погулять", "Положить спать", "Полікувати", "Пограти"  };
        List<int> pos = new List<int> { 0, 1, 2, 3, 4 };
        int health = 3;
        public Form1()
        {
            InitializeComponent();
            RandomWord();
        }
        private void Form1_Load(object sender, EventArgs e)
        {

        }
        void RandomWord()
        {
           try {
                Random random = new Random();
                int b = random.Next(pos.Count);
                label1.Text = a[b];
                a.RemoveAt(b);
                pos.RemoveAt(b);
                Thread.Sleep(20);

            }
            catch
            {
                pos = new List<int> { 0, 1, 2, 3, 4 };
                a = new List<string> { "Покормить", "Погулять", "Положить спать", "Полікувати", "Пограти" };
                RandomWord();

            }
        }

private void button1_Click(object sender, EventArgs e)
        {
            RandomWord();

        }

        private void button2_Click(object sender, EventArgs e)
        {

            health--;
            if(health==0)
            {
                pictureBox1.ImageLocation = "bad.jpg";
                DialogResult result = MessageBox.Show("Полікувати", "My box", MessageBoxButtons.YesNo);
                if (result == DialogResult.Yes)
                {
                    health = 3;
                    pictureBox1.ImageLocation = "good.png";

                }
                else
                {
                    pictureBox1.ImageLocation = "RIP.jpg";
                    button1.Visible = false;
                    button2.Visible = false;
                    label1.Visible = false;
                }
            }
            RandomWord();

        }
    }
}

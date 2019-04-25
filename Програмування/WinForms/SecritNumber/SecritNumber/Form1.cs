using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SecritNumber
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Guesswork();
        }
        Button button;
        Label lable;
        Random random = new Random();
        Label a = new Label();

        public void  Guesswork()
        {
            Text = "Just a game!";
            BackColor = Color.DarkSeaGreen;
            ForeColor = Color.Yellow;
            Size = new Size(250, 250);

            button = new Button();
            button.Text = "Play!";
            Controls.Add(button);
            button.BackColor = Color.DodgerBlue;
            button.Location = new Point(80, 100);
            button.Size = new Size(70, 50);
            AcceptButton = button;

            lable = new Label();
            lable.Text = "Please, think out the number between \n1 and 2000. \n\nI will be guessing it.";
            lable.Location = new Point(30, 10);
            lable.Size = new Size(200, 60);
            Controls.Add(lable);
            a.Location = new Point(80, 80);
            Controls.Add(a);


            button.Click += new EventHandler(buttonClick);
        }

        private void buttonClick(object sender, EventArgs e)
        {
            a.Text = random.Next(1, 2000).ToString();
            int min = 1;
            int max = 2000;
            int quantity = 0;
            bool win ;
            string caption = "Work";

            while (true)
            {
                if (min == int.Parse(a.Text) || max == int.Parse(a.Text))
                {
                    win = true;
                    quantity--;
                    break;
                }
                if (min == max)
                {
                    win = false;
                    break;
                }
                quantity++;
                int middle = (max + min) / 2;
                string Message = "Is your number more than " + middle as string;
                DialogResult result = MessageBox.Show(Message, caption, MessageBoxButtons.YesNo);

                if (result == DialogResult.Yes)
                    min = middle;
                else
                    max = middle;               
            }
            if (win == true)
            {
                string tmp = "YOUR NUMBER IS   " + min + "\nQuantity of attempts is " + quantity;
                MessageBox.Show(tmp, caption, MessageBoxButtons.OK, MessageBoxIcon.Stop);
            }
            else
            {
                MessageBox.Show("You lose");
            }
        }
    }
}

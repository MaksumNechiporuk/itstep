using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Photo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
 
            Button button = new Button();
            button.Location = new Point(30, 380);
            button.Width = 150;
            button.Height = 50;
            button.Click += Button_Click;
            Controls.Add(button);
            Image img = new Bitmap(this.GetType(), "2.jpg");
            //PictureBox picture = new PictureBox();
            //picture.Image=img;
            //Controls.Add(picture);

            //Graphics g = CreateGraphics();
            //g.DrawImage(img, new Point(30, 30));

           

        }

        private void Button_Click(object sender, EventArgs e)
        {
            Graphics g = this.CreateGraphics();
             Image img = new Bitmap(this.GetType(), "2.jpg");
            int width = 150;
            double ind = img.Width / img.Height;
            int height = (int)(width * ind);
            Rectangle rect = new Rectangle(10, 10, width, height);
            g.DrawImage(img, rect);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;
using System.Windows.Forms;

namespace Olympiad
{
    public partial class Form1 : Form
    {
        public List<string> colleges = new List<string>();
        StreamReader FAQ = new StreamReader(@"college.txt");
        public Form1()
        {
            InitializeComponent();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            Random_Form f = new Random_Form(colleges);
            f.RandomProgram.Image= Image.FromFile(Path.Combine(Environment.CurrentDirectory, "excel.png"));
            f.Text = "EXCEL";
            button1.Enabled = false;
            f.Show();
        }
       private void button3_Click(object sender, EventArgs e)
        {
            Random_Form f = new Random_Form(colleges);
            
            f.RandomProgram.Image = Image.FromFile(Path.Combine(Environment.CurrentDirectory, "acces.png"));
            f.Text = "ACCES";
            button3.Enabled = false;
            f.Show();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            Random_Form f = new Random_Form(colleges);
            f.RandomProgram.Image = Image.FromFile(Path.Combine(Environment.CurrentDirectory, "word.png"));
            f.Text = "WORD";
            button2.Enabled = false;
            f.Show();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            while (!FAQ.EndOfStream)
            {
                colleges.Add(FAQ.ReadLine());
            }
        }
    }
}

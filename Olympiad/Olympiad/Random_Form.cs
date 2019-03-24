using System;
using System.Collections.Generic;
using System.Threading;
using System.Windows.Forms;


namespace Olympiad
{
    public partial class Random_Form : Form
    {
        private int _index;
        int i = 0;
        int count;
        Random random = new Random();
        int r = 0;
        public List<string> colleges = new List<string>(); 
        public Random_Form(List<string> c)
        {
            InitializeComponent();
            timer1.Interval = 100;
            _index = 0;
            colleges = c;

            foreach (var item in colleges)
            {
                listBox1.Items.Add(item);
                count++;
            }
            r = random.Next(30, 60);
            if ((count <= 1))
            {
                r = 1;
            }

            timer1.Start();
        }
        private void Start_Click(object sender, EventArgs e)
        {              
            colleges.RemoveAt(i);
            count = 0;
            foreach (var item in colleges)
            {
                listBox1.Items.Add(item);
                count++;
            }
            i = 0;
            _index = 0;
            Close();      
            GC.Collect();
        }
        private void Excel_Load(object sender, EventArgs e)
        {
            Start.Visible = false;
           
        }
        private void timer1_Tick(object sender, EventArgs e)
        {
            i++;
            if (i == count)
                i = 0;
            listBox1.SetSelected(i, true);
             Thread.Sleep(200);
                _index++;
            if (_index == r)
            {
                Start.Visible = true;
                timer1.Stop();          
            }
        }

    }
}

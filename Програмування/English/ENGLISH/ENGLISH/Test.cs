using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ENGLISH
{
    public partial class Test : Form
    {
        public Test()
        {
            InitializeComponent();
        }

       

        private void button2_Click(object sender, EventArgs e)
        {
            button2.BackColor = Color.Red;
          
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            button1.BackColor = Color.Red;
          
        }

        private void button3_Click(object sender, EventArgs e)
        {
            button3.BackColor = Color.Red;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            button4.BackColor = Color.Red;
        }
    }
}

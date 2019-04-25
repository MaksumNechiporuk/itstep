using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Drop
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_DragDrop(object sender, DragEventArgs e)
        {
        string []data=   (string [])e.Data.GetData(DataFormats.FileDrop);
        string filename = data[0];
            StreamReader reader = new StreamReader(filename,Encoding.Default);
            textBox1.Text= reader.ReadToEnd();
            reader.Close();
           
            
        }

        private void textBox1_DragEnter(object sender, DragEventArgs e)
        {
            e.Effect = DragDropEffects.Copy;
        }

     

       
      

        private void darkToolStripMenuItem_Click(object sender, EventArgs e)
        {
           

            textBox1.ForeColor = Color.White;
            textBox1.BackColor = Color.Black;
            
        }

        private void whiteToolStripMenuItem_Click(object sender, EventArgs e)
        {
            textBox1.ForeColor = Color.Black;
            textBox1.BackColor = Color.White;

        }

     
    }
}

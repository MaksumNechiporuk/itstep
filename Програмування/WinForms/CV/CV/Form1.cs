using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CV
{
    public partial class Form1 : Form
    {
        int p;
        List<Person> peoples = new List<Person>();
        List<string> reasons = new List<string>();
        string g;
        public Form1()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
           label4.Text= trackBar1.Value.ToString();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            peoples.Add(new Person(TBname.Text, TBsurname.Text, int.Parse(label4.Text), g, TBcity.Text, reasons));
            TBname.Clear();
            TBsurname.Clear();
            label4.Text = "0";
            TBcity.Clear();
            checkBox1.Checked = false;
            checkBox2.Checked = false;
            checkBox3.Checked = false;
            radioButton1.Checked = false;
            radioButton2.Checked = false;
            listBox1.Items.Clear();
            foreach (var item in peoples)
            {
                listBox1.Items.Add(item.Name + " "+item.SurName);
            }
        }
        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            reasons.Clear();
            CheckBox a=(sender as CheckBox);
            reasons.Add(a.Text);
        }
        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            RadioButton a = (sender as RadioButton);
          g=a.Text;
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
                p=listBox1.SelectedIndex;
                listBox2.Items.Clear();
                listBox2.Items.Add("Age:"+peoples[p].Age );
                listBox2.Items.Add("Gouder:"+peoples[p].Gouder );

                 listBox2.Items.Add("City:"+ peoples[p].City);
                 listBox2.Items.Add("Reasons:");
            foreach (var item1 in peoples[p].reasons)
                {
                listBox2.Items.Add(item1);

            }

        }
    }
}

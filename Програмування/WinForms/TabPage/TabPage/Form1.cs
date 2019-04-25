using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TabPage
{
    public partial class Form1 : Form
    {
        List<Person> people = new List<Person>();
        int i;
        public Form1()
        {
            InitializeComponent();
            people.Add(new Person("Ivanov", "0983451856"));
            listBox1.Items.Clear();
            foreach (var item in people)
            {
                listBox1.Items.Add(item.Name);
            }
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            i=listBox1.SelectedIndex;
            tabControl1.SelectedIndex=1;
            listBox2.Items.Add(people[i].Name);
            listBox2.Items.Add(people[i].Number);

        }

        private void tabControl1_SelectedIndexChanged(object sender, EventArgs e)
        {
            listBox2.Items.Clear();
            Height = 300;
            listBox3.Items.Clear();
            listBox4.Items.Clear();
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            people.Add(new Person(NameT.Text, Number.Text));
            listBox1.Items.Clear();
            NameT.Clear();Number.Clear();
            foreach (var item in people)
            {
                listBox1.Items.Add(item.Name);
            }
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            Send();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Height = 560;
            foreach (var item in people[i].ms)
            {
                listBox3.Items.Add(item);
            }
            foreach (var item in people[i].ms1)
            {
                listBox4.Items.Add(item);
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
           
            tabControl1.SelectedIndex = 2;
          
        }

        private void textBox1_KeyDown(object sender, KeyEventArgs e)
        {
           if( e.KeyCode== Keys.Enter)
            {
                Send();

            }
        }
         void Send()
        {
            string[] mes = new string[] { "Привіт", "Як справи?", "Бувай", "Я зараз зайнятий", "Я тобі потім напишу" };
            listBox3.Items.Add(textBox1.Text);
            people[i].ms.Add(textBox1.Text);
            textBox1.Clear();
            Random random = new Random();
            int k = random.Next(0, mes.Count());
            listBox4.Items.Add(mes[k]);
            people[i].ms1.Add(mes[k]);
        }
    }

    class Person
    {
        public string Name { get; set; }
        public string Number { get; set; }
        public List<string> ms =new List<string>();
        public List<string> ms1 = new List<string>();
        public Person(string n,string numb)
        {
            Name = n;
        Number = numb;
        }
    }
}

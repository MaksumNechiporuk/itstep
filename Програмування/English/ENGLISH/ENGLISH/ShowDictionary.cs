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
    public partial class ShowDictionary : Form
    {
        List<NotStudiedDictionary> notStudied = new List<NotStudiedDictionary>();
        public ShowDictionary()
        {
            InitializeComponent();

        }
        public ShowDictionary(List<NotStudiedDictionary> notStudieds)
        {
            InitializeComponent();
            notStudied = notStudieds;
        }
        private void ShowDictionary_Load(object sender, EventArgs e)
        {
           int  i = 0;
            foreach (var item in notStudied)
            {
                ENGword.Items.Add(item.GetWordsEng());
                UKRword.Items.Add(item.GetWordsUkr());
                i++;
            }
        }
        private void ENGword_SelectedIndexChanged(object sender, EventArgs e)
        {         
            for (int i = 0; i < ENGword.Items.Count; i++)
            {
                if (ENGword.GetSelected(i) == true)
                {
                    UKRword.SetSelected(i, true);
                    break;
                }
            }
        }
        private void FindButton_Click(object sender, EventArgs e)
        {
            int i = 0, lastlastFoundIndex, lastFoundIndex=-1;
            try
            {
                if (comboBox1.Text == "English")
                {
                    i = ENGword.FindString(textBox1.Text);
                }
                else
                {
                    bool ch=false;
                    for (i = lastFoundIndex + 1; i < UKRword.Items.Count; i++)
                    {
                        var currVal = UKRword.Items[i].ToString();
                        if (currVal.IndexOf(textBox1.Text, StringComparison.OrdinalIgnoreCase) > -1)
                        {
                            UKRword.SetSelected(i, true);
                            lastlastFoundIndex = i;
                            ch = true;
                            break;
                        }
                       
                    }
                    if (ch == false)
                        i = -1;
                }
                ENGword.SetSelected(i, true);
                UKRword.SetSelected(i, true);
            }
            catch
            {
                if (i == -1)
                    MessageBox.Show("Not found!!!");
            }
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            textBox1.Clear();
        }
    }
}

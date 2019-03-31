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

namespace ENGLISH
{
    public partial class Main : Form
    {
        List<NotStudiedDictionary> notStudiedList = new List<NotStudiedDictionary>();
        List<StudyDictionary> studyDictionaries= new List<StudyDictionary>();

        public Main()
        {
            InitializeComponent();
        }

        private void OpenD_Click(object sender, EventArgs e)
        {
            ShowDictionary showDictionary = new ShowDictionary();
            showDictionary.Show();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            NotStudiedDictionary notStudied = new NotStudiedDictionary();
            notStudiedList.Add(notStudied);
            using (StreamReader sr = new StreamReader("Dictionary.txt", System.Text.Encoding.Default))
            {
                string line;
                while ((line = sr.ReadLine()) != null)
                {
                    notStudied = notStudied.AddWord(line);
                    notStudiedList.Add(notStudied);
                    notStudied = new NotStudiedDictionary();
                }
                notStudiedList.RemoveAt(0);
            }
        }

        private void OpenStudy_Click(object sender, EventArgs e)
        {
            studyDictionaries.Clear();
            ChooseWords showDictionary = new ChooseWords(notStudiedList, studyDictionaries);
            showDictionary.Show();
        }
    }
}

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Threading.Tasks;

using System.Windows.Forms;

namespace ENGLISH
{
    public partial class Test : Form
    {
        List<NotStudiedDictionary> notStudiedList = new List<NotStudiedDictionary>();
        List<StudyDictionary> studyDictionaries = new List<StudyDictionary>();
        int word;
        string[] words;
        List<int> arr = new List<int>() { 0, 1, 2, 3, 4 };

        public Test(List<NotStudiedDictionary> notStudieds, List<StudyDictionary> studies)
        {
            InitializeComponent();
            notStudiedList = notStudieds;
            studyDictionaries = studies;
            SelectWord();
            TextButton();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            CheckAnswer(button2);

        }

        private void button1_Click_1(object sender, EventArgs e)
        {

            CheckAnswer(button1);

        }

        private void button3_Click(object sender, EventArgs e)
        {
            CheckAnswer(button3);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            CheckAnswer(button4);
        }
        int RandomWord(int i)
        {
            Random random = new Random();
            return random.Next(0, i);
        }
        void SelectWord()
        {
            int t = RandomWord(arr.Count);
            word =arr[t];
            arr.RemoveAt(t);
            labelWord.Text = studyDictionaries[word].GetWordsEng();
            words = new string[4];
            words[RandomWord(4)] = studyDictionaries[word].GetWordsUkr();
            for (int i = 0; i < words.Length; i++)
            {
                if (words[i] == null)
                {
                    words[i] = notStudiedList[RandomWord(notStudiedList.Count)].GetWordsUkr();
                    int k = 0;
                    while (true)
                    {
                        if (words[i] == words[k])
                        {
                            Thread.Sleep(20);
                            words[i] = notStudiedList[RandomWord(notStudiedList.Count)].GetWordsUkr();
                        }                      
                        k++;
                        if (k == 4) break;
                    }
                }
            }
        }
        void TextButton()
        {

            for (int i = 0; i < 4; i++)
            {
                while (true)
                {
                    int j = RandomWord(4);
                    if (words[j] != null)
                    {
                        if (i == 0)
                            button1.Text = words[j];
                        if (i == 1)
                            button2.Text = words[j];
                        if (i == 2)
                            button3.Text = words[j];
                        if (i == 3)
                            button4.Text = words[j];
                        words[j] = null;
                        break;
                    }
                }
            }
            button1.BackColor = Color.White;
            button2.BackColor = Color.White;
            button3.BackColor = Color.White;
            button4.BackColor = Color.White;


        }

        void  CheckAnswer(Button b)
        {
            if (b.Text == studyDictionaries[word].GetWordsUkr())
            {
                b.BackColor = Color.Green;
                func();
                SelectWord();
                TextButton();

            }
            else b.BackColor = Color.Red;
            func();
            b.BackColor = Color.White;
        }
        public void func()
        {
            CancellationTokenSource source = new CancellationTokenSource();
            var t = Task.Run(async delegate
            {
                await Task.Delay(TimeSpan.FromSeconds(1), source.Token);
                return 42;
            });
            t.Wait();
        }
        private void Test_Load(object sender, EventArgs e)
        {

        }
    }
}

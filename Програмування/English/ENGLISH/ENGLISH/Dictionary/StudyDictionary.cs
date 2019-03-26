using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ENGLISH
{
    public class StudyDictionary : Dictionary
    {

 
        public int Count { get; set; }
        public void AddWord(List<NotStudiedDictionary> notStudieds,int i)
        {
            engWord= notStudieds[i].GetWordsEng();
            ukrWord= notStudieds[i].GetWordsUkr();
            Count = 0;
        }
        public void WriteToFile()
        {
            if(Count==3)
            {
                StreamWriter writer = new StreamWriter("Learned.txt");
                writer.WriteLine(engWord + " - " + ukrWord + "\n");
            }
        }
        public void Swap()
        {
            string t = engWord;
            engWord = ukrWord;
            ukrWord = t;
        }
        public string GetWordsEng()
        {
            return engWord;
        }
        public string GetWordsUkr()
        {
            return ukrWord;
        }
    }
}

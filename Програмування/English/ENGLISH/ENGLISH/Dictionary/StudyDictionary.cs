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

        private int count;
        public void AddWord(List<NotStudiedDictionary> notStudieds,int i)
        {
            engWord= notStudieds[i].GetWordsEng();
            ukrWord= notStudieds[i].GetWordsUkr();
            count = 0;
        }
        public void WriteToFile()
        {
            if(count==3)
            {
                StreamWriter writer = new StreamWriter("Learned.txt");
                writer.WriteLine(engWord + " - " + ukrWord + "\n");
            }
        }
    }
}

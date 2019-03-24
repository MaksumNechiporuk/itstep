using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ENGLISH
{
    class NotStudiedDictionary : Dictionary
    {

        public NotStudiedDictionary AddWord(string words)
        {
            bool c = true;
            words=words.Trim();
            //engWord = "\0";
            //ukrWord = "\0";
            foreach (var item in words)
            {
                if (item == '–')
                {
                    c = false;
                    continue;
                }
                    if (c==true)
                {
                    engWord += item;
                }
                else
                {
                    ukrWord += item;
                }
            
            }
            return this;
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

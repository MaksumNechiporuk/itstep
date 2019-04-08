using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CountWord
{
    class Program
    {
        static void Main(string[] args)
        {
            char[] delimiters = { ' ', ',', '.' ,'!','?'};
            string s = "I love you! And you, and you, and you...";
            string[] words = s.Split(delimiters, StringSplitOptions.RemoveEmptyEntries);
            CountWords cw = new CountWords();
            foreach (string i in words)
            {
                cw.AddWord(i);
            }
            cw.PrintStats();

        }
    }
    class CountWords
    {
        private static Dictionary<string, int> dict;

        public
        CountWords()
        {
            dict = new Dictionary<string, int>();
        }

        public void
        AddWord(string word)
        {
            if (dict.ContainsKey(word))
            {
                dict[word] += 1;
            }
            else
            {
                dict.Add(word, 1);
            }
        }

        public void
        PrintStats()
        {
            foreach (var i in dict)
            {
                Console.WriteLine("Word {0} - {1}", i.Value, i.Key);
            }
        }
    }
}

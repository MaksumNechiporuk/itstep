using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CountryDictionary
{
    class Program
    {
        static void Main(string[] args)
        {
            CountryDictionary dic = new CountryDictionary();       
                dic.Words.Add("Ukraine", "Україна");
                dic.Words.Add("France", "Франція");
                dic.Words.Add("USA", "США");
                dic.Words.Add("China", "Китай");
                dic.Words.Add("Japan", "Японія");
             
            Console.WriteLine("1.English -> Ukrainian\n2.Ukrainian -> English.");
        
            string dir = Console.ReadLine();
            bool res=false;

            if (dir == "1")
                res = false;
            else if (dir == "2")
                res = true;
                do
                {
                    if (res == false)
                    dic.PrintDictionary(dic.Words, true);              
                    else
                    dic.PrintDictionary(dic.Words, false);
                Console.ReadLine();
                Console.Clear();

                Console.WriteLine("1.English -> Ukrainian\n2.Ukrainian -> English.\n3.Exit");

                 dir = Console.ReadLine();
                res = false;

                if (dir == "1")
                    res = false;
                else if (dir == "2")
                    res = true;
                else break;

            } while (true);
        }
        class CountryDictionary
        {
            public Dictionary<string, string> Words;

            public CountryDictionary()
            {
                Words = new Dictionary<string, string>();
            }
            public void PrintDictionary(Dictionary<string, string> glossary,bool a)
            {
                Console.WriteLine();
                if(a==true)
                foreach (KeyValuePair<string, string> kvp in glossary)
                {
                    Console.WriteLine("{0, 16} - {1}", kvp.Key, kvp.Value);
                }
                else 
                    foreach (KeyValuePair<string, string> kvp in glossary)
                    {
                        Console.WriteLine("{0, 16} - {1}", kvp.Value, kvp.Key);
                    }
                Console.WriteLine();
            }
        }
    }
}
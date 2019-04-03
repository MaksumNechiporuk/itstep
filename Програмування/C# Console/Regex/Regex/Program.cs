using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Regex1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            string line = GetSitePage();
            string pattern = @"city[/]\d+""[>](\D*)</a></div>";
            Regex r = new Regex(pattern);
            if (r.IsMatch(line))
            {
                Console.WriteLine("yes");
                MatchCollection mc = r.Matches(line);  
                for (int i = 0; i < mc.Count; i++)
                {
                    Console.WriteLine(mc[i].Groups[1]);                 
                }
            }
            else Console.WriteLine("no");
        }
        static string GetSitePage()
        {
            string line = "";
            string result = "";
            WebRequest request = WebRequest.Create("https://postcode.in.ua/ua/codes/city/1007/a");
            WebResponse response = request.GetResponse();
            using (Stream stream = response.GetResponseStream())
            {
                using (StreamReader reader = new StreamReader(stream,Encoding.Default))
                {
                    while ((line = reader.ReadLine()) != null)
                    {
                        result += line;
                    }
                }
            }
            response.Close();
            Console.WriteLine("Запит виконаний");
            Console.Read();
            return result;
        }
    }
    }


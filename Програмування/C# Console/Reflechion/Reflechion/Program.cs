using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Management;

namespace Reflechion
{
    class Program
    {
        static void Main(string[] args)
        {
            // Type myType = Type.GetType("Reflechion.User");
            //object obj= Activator.CreateInstance(myType);
            // MemberInfo []info = myType.GetMembers();
            // foreach (var item in info)
            // {
            //     Console.WriteLine(item.Name);
            // }
            // Directory.GetDirectories(" ");

            ObjectQuery winQuery = new ObjectQuery("SELECT * FROM Win32_LogicalMemoryConfiguration");

            ManagementObjectSearcher searcher = new ManagementObjectSearcher(winQuery);

            foreach (ManagementObject item in searcher.Get())
            {
                Console.WriteLine("Total Space = " + item["TotalPageFileSpace"]);
                Console.WriteLine("Total Physical Memory = " + item["TotalPhysicalMemory"]);
                Console.WriteLine("Total Virtual Memory = " + item["TotalVirtualMemory"]);
                Console.WriteLine("Available Virtual Memory = " + item["AvailableVirtualMemory"]);
            }
            Console.Read();

        }
    }

    public class User
    {
        public string Name { get; set; }
        public int Age { get; set; }
        public User(string n, int a)
        {
            Name = n;
            Age = a;
        }
        public User()
        {
                
        }
        public void Display()
        {
            Console.WriteLine("Имя: {0}  Возраст: {1}", this.Name, this.Age);
        }
        public int Payment(int hours, int perhour)
        {
            return hours * perhour;
        }
    }
}
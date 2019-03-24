using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Enum
{

    class Program
    {
        static void Main(string[] args)   
            {

            EnumMenu b = new EnumMenu();
            b.MakeChain();


              }

    }
    class EnumMenu
    {
       public enum menu { Add, Remove, Show , ShowAll , Exit };
        string[] a = { "1.Add", "\n2.Remove", "\n3.Show", "\n4.ShowAll", "\n5.Exit" };

        public void ShowMenu(int l)
        {
            for (int i = 0; i < a.Length; i++)
            {
                if (i == l)
                    Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine(a[i]);
                Console.ForegroundColor = ConsoleColor.White;
            }
        }
     
        public void MakeChain()
        {
            int i = 0;
            while (true)
            {
                ShowMenu(i);

                ConsoleKeyInfo console = Console.ReadKey();
                switch(console.Key)
                {
                    case ConsoleKey.DownArrow:
                    {
                          if(i==4)
                            {
                                i = 0;
                                break;
                            }
                            i++;
                            break;
                    }
                    case ConsoleKey.UpArrow:
                        {
                            if (i == 0)
                            {
                                i = 5;
                                break;
                            }
                            i--;
                            break;
                        }
                }
                Console.Clear();
            }
        }
    }
}





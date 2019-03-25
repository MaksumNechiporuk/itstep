using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4
{
    class Student
    {
        string name_s;
        string surname_s;
        DateTime date;
        public int group { get; set; }
        int[][] marks = new int[3][];
        readonly string allName;
        public Student(string surn, string name, int day, int month, int year)
        {
            name_s = name;
            surname_s = surn;
            date = new DateTime(year, month, day);
            allName = name_s + "  " + surname_s;
        }
        public void AddMarks(int[] m, int[] m1, int[] m2)
        {
            marks[0] = new int[m.Length];
            marks[0] = m;
            marks[1] = new int[m1.Length];
            marks[1] = m1;
            marks[2] = new int[m2.Length];
            marks[2] = m2;
        }
        public void Delete()
            {
            Array.Clear(marks, 0, 3);
            Show();
            }
      public   double GPA(int[] m)
        {
            double gpa = 0;
            int i;
            for (i = 0; i < m.Length; i++)
            {
                gpa += m[i];
            }
            gpa /= i;
            return gpa;
        }
        private int Age()
        {
            int now = int.Parse(DateTime.Now.ToString("yyyyMMdd"));
            int dob = int.Parse(date.ToString("yyyyMMdd"));
            int age = (now - dob) / 10000;
        return age;
        }
        public   void Show()
        {
            Console.WriteLine("Name:"+allName+"  Age:"+ Age()+"   Group:"+group);
            Console.ForegroundColor = ConsoleColor.Red;
            Console.WriteLine("Marks");
            Console.ForegroundColor = ConsoleColor.White;
   
            for (int i = 0; i < 3; i++)
            {
                if (marks[i] != null)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    if (i == 0)
                        Console.WriteLine("Programming");
                    else if (i == 1)
                        Console.WriteLine("Administration");
                    else
                        Console.WriteLine("Design");
                    Console.ForegroundColor = ConsoleColor.White;

                    for (int j = 0; j < marks[i].Length; j++)
                    {
                        Console.Write("{0}\t", marks[i][j]);
                    }
                    Console.WriteLine();
                }
            }
            for (int i = 0; i < 3; i++)
            {
                Console.ForegroundColor = ConsoleColor.Yellow;
                if (i == 0)
                    Console.Write("Programming  ");
                else if (i == 1)
                    Console.Write("Administration  ");
                else
                    Console.Write("Design  ");
                Console.WriteLine(GPA(marks[i]));

            }
            Console.ForegroundColor = ConsoleColor.Red;
            double s = (GPA(marks[0]) + GPA(marks[1]) + GPA(marks[2]) )/ 3;
            Console.WriteLine("GPA="+s);
            Console.ForegroundColor = ConsoleColor.White;


        }
        public Student()
        {
            Random random = new Random();

            List<string> sn =new List<string> { "Бондаренко", "Мельник", "Шевченко", "Ткаченко", "Коваленко", "Бойко" };
            List<string> n = new List<string> { "Олексій", "Олександр", "Максим", "Борис", "Юрій", "Владислав" };
            int c, b;
            c = random.Next(0,5);
            b = random.Next(0, 5);
            name_s = n[b];
            surname_s = sn[c];
        }
    }
}

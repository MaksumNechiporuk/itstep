using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace _4
{
    class Program
    {
        static void Main(string[] args)
        {
            
            Student student = new Student("Ivanov", "Petro", 11, 10,1990);
            student.AddMarks(CreateArr(), CreateArr(), CreateArr());
            student.group = 5;
            student.Show();


        }
        static int[] CreateArr()
        {

            Random random = new Random();
            Thread.Sleep(200);
            int[] marks = new int[random.Next(3,10)];
            for (int i = 0; i < marks.Length; i++)
            {
                marks[i] = random.Next(1, 12);
            }
            return marks;
        }
    }
}

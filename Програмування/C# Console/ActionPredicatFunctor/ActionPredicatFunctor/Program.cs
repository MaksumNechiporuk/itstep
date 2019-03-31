using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ActionPredicatFunctor
{
    class Program
    {
        static void Main(string[] args)
        {
          
            List<Worker> workers = GetWorkers();
            workers.ForEach(ShowWorkers);
            SetColor(ConsoleColor.Red);
            var thisA = workers.Select(ThisA).ToList();

            foreach (var item in thisA)
            {
                Console.WriteLine(item);
            }
            SetColor(ConsoleColor.Yellow);

            workers.Sort(Compare);
            workers.ForEach(ShowWorkers);
            SetColor(ConsoleColor.White);
            var stringWorker = workers.Select(ComposeStrings).ToList();
            foreach (var item in stringWorker)
            {
                Console.WriteLine(item);
            }
            SetColor(ConsoleColor.Red);

            for (int i=0;i<workers.Count;i++)
            {
                AddSalary(workers[i]);
            }
            workers.ForEach(ShowWorkers);

        }

        static void AddSalary( Worker w)
        {
            double p = w.Salary * 0.1;
            w.Salary += p;
        }
        static string ThisA(Worker w)
        {
            if (w.Name[0] == 'А')
                return (w.Name + "  " + w.SurName + "  " + w.Age + "  " + w.Salary);
            else
                return null;
        }
        static void SetColor(ConsoleColor col)
        {
            Console.ForegroundColor = col;
        }
        static int Compare(Worker w1, Worker w2)
        {
            return w1.Age == w2.Age ? 0 : w1.Age > w2.Age ? 1 : -1;
        }
        static List<Worker> GetWorkers()
        {
            List<Worker> workers = new List<Worker>
            {
                new Worker{ Name = "Макс",SurName="Нечипорук",Age=18,Salary=2000 },
                new Worker{ Name = "Захар",SurName="Хращук",Age=17,Salary=7000  },
                new Worker{ Name = "Юра",SurName="Терешкович",Age=18,Salary=1000  },
                new Worker{ Name = "Борис",SurName="Соловйов",Age=18,Salary=5000  },
                new Worker{ Name = "Антон",SurName="Андросюк",Age=19,Salary=3000  }
            };                           
            return workers;
        }
        static string ComposeStrings(Worker w)
        {
            return w.Name + ":" + w.SurName;
        }
        static void ShowWorkers(Worker w)
        {
            Console.WriteLine(w.Name+"  "+w.SurName+"  "+w.Age + "  " +w.Salary);
        }
    }

}

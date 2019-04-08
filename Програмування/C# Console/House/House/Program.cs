using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace House
{
    class Program
    {
        static void Main(string[] args)
        {
            Team team = new Team();
            while (true)
            {

                team.Build();

                Thread.Sleep(2000);
                Console.Clear();

                if (team.Build()==true)
                    break;
                Console.Clear();

            }
        }
    }
}

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Static
{
    class Program
    {
        static void Main(string[] args)
        {
            Army army = new Army();
             army.u[0] = new Unit() { Name = "Mag 1" };
            army.u[1] = new Unit() { Name = "Mag 2" };
            army.u[2] = new Unit() { Name = "Mag 3" };
            army.ShowInfo();
            
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Static
{
    class Army
    {
        public Unit[] u=new Unit[3];

      public void ShowInfo()
        {
            int power = 0;
            for (int i = 0; i < u.Length; i++)
            {
                u[i].Show();
                power+=u[i].Power;
            }
            Console.WriteLine("Total power - "+power);
        }
    }
}

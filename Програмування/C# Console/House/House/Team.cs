using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    class Team
    {
        House myHouse = new House();

        Worker Worker;
        TeamLeader Leader ;
        public Team()
        {
            Worker = new Worker(myHouse);
             Leader = new TeamLeader(myHouse);
        }
       public  bool Build()
        {
            Worker.Build();
            Leader.Build();
            if (myHouse.roof != null)
                return true;
            return false;

        }
    }
}

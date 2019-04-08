using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    class TeamLeader : IWorker
    {
        public string workerType { get; set; }
        House house = new House();
        public TeamLeader(House h)
        {
            house = h;
        }
        public void Build()
        {
            house.basement?.Show();
            house.walls[0]?.Show();
            house.walls[1]?.Show();
            house.walls[2]?.Show();
            house.walls[3]?.Show();
            house.door[0]?.Show();
            house.door[1]?.Show();
            house.door[2]?.Show();
            house.door[3]?.Show();
            house.roof?.Show();


        }
    }
}

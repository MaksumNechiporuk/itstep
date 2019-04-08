using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    class Worker : IWorker
    {
        public string workerType { get; set; }
        House house=new House();
        public Worker(House h)
        {
            house = h;
        }
        public void Build()
        {
            if (house.basement == null)
                house.basement = new Basement("Фундамент", "Стовпчастий");
            else if (house.walls[0] == null)
                house.walls[0] = new Walls("Стіна 1");
            else if (house.walls[1] == null)
                house.walls[1] = new Walls("Стіна 2");
            else if (house.walls[2] == null)
                house.walls[2] = new Walls("Стіна 3");
            else if (house.walls[3] == null)
                house.walls[3] = new Walls("Стіна 4");
            else if (house.door[0] == null)
                house.door[0] = new Door("Двері 1", "Металеві");
            else if (house.door[1] == null)
                house.door[1] = new Door("Двері 2", "Дерев’яні");
            else if (house.door[2] == null)
                house.door[2] = new Door("Двері 3", "Скляні");
            else if (house.door[3] == null)
                house.door[3] = new Door("Двері 4", "Профільні");
            else if (house.roof == null)
                house.roof = new Roof("Дах");
            


        }
        
    }
}

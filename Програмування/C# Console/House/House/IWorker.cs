using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace House
{
    interface IWorker
    {
         string  workerType { get; set; }

        void Build();
    }
}

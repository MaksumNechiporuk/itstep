using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Ping
{
    class Program
    {
        static void Main(string[] args)
        {
           
            Server game = new Server();
            game.Connecting();
        }
    }
  

    class Server
    {
     
        Client adv;
        public Server()
        {
            adv = new Client(Connected);
        }
        public void Connecting()

        {
            Console.WriteLine("Ping");
            adv.Ping();
        }
      void Connected()
        {
            Console.WriteLine("Connected");
        }
    }
    class Client
    {
        Action act;
        int p = 0;
       
        public Client(Action a)
        {
            act = a;

        }
        public void Ping()
        {
            Random random = new Random();

            while (true)
            {
                Console.WriteLine(".");
                p = random.Next(5);

                if (p == 0)
                {
                    break;
                }
                Thread.Sleep(500);
            }
                act();    
        }

    }
}

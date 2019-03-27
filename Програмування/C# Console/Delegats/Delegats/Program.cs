using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Delegats
{
    class Program
    {
        static void Main(string[] args)
        {
            Scene_1 scene_ = new Scene_1();
            scene_.Run();
            Game game = new Game();
            game.StartGame();
        }
    }
    class Scene_1
    {
        bool another = false;
        Adv adv;
        public Scene_1()
        {
            adv = new Adv(GoToAnotherScene);
        }
        public void Run()
        {
            Console.WriteLine("run");
            adv.ShowAdv();
        }
        void GoToAnotherScene()
        {
            another = true;
            Console.WriteLine("Go to another scene");
        }
    }
  
    class Game

    {
        int score = 100;
        int scoreForAdnView = 5;
        Adv adv;
        public Game()
        {
            adv = new Adv(AddScore);
        }
        public void StartGame()
           
        {
            Console.WriteLine("StartGame");
             adv.ShowAdv();
        }
        public void AddScore()
        {
            score += scoreForAdnView;
            Console.WriteLine(score);
        }
    }
    class Adv
    {
        Action act;
        int timeShow = 0;
        int timeTotal = 60;
        public Adv(Action a)
        {
            act = a;
        }
        public void ShowAdv()
        {
            while (true)
            {
                Console.WriteLine(".");
                timeShow++;
                if (Console.KeyAvailable)
                {
                    Console.ReadKey();
                    break;
                }
                if (timeShow >= timeTotal)
                {
                    break;
                }
                Thread.Sleep(100);
            }

      if(timeShow>=timeTotal)
            {
            act();
             }
        }

    }
}

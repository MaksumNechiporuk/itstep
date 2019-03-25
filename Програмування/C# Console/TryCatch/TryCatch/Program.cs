using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TryCatch
{
    class Program
    {
        static void Main(string[] args)
        {

            try
            {
                Foo();
            }
            catch(MyException ex)
            {
                Console.WriteLine("Message: " + ex.Message);
            }

            Console.WriteLine("____________________________________________ascasx");

       }
        static void Foo()
        {

            try
            {
                string a;
                Console.WriteLine("Enter a");
                a = Console.ReadLine();
                int b = Convert.ToInt32(a);
            }
            catch (Exception e)
            {               
                throw new MyException();
            }
           
           
        }
    }
  

    [Serializable]
    public class MyException : Exception
    {
        string owner = "Maks";
    
        public MyException()
        {
           
        }
        public override string Message
        {
            get
            {
                Console.WriteLine(base.Source);
                Console.WriteLine(base.Message);
                Console.WriteLine(owner);
                Console.WriteLine(DateTime.Now);
                return base.Message;
            }
        }
        public MyException(string message) : base(message) { }
       
        
        public MyException(string message, Exception inner) : base(message, inner) { }
        protected MyException(
          System.Runtime.Serialization.SerializationInfo info,
          System.Runtime.Serialization.StreamingContext context) : base(info, context) { }
    }

}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Money
{
    class Money
    {
        public double Money_ { get; set; }


       
        public override string ToString()
        {
            Console.WriteLine("Money:" + Money_);
            return " ";
        }
        public static Money operator +(Money m1,Money m2)
        {
            Money sum = new Money();
            sum.Money_ = m1.Money_ + m2.Money_;
           
            return sum;
        }
        public static Money operator -(Money m1, Money m2)
        {
            Money s = new Money();
            s.Money_ = m1.Money_ - m2.Money_;
            if (s.Money_ < 0)
                throw new Exception("Банкрот");
            return s;
        }
        public static Money operator /(Money m1,double num)
        {
            Money div = new Money();
            div.Money_ = m1.Money_/num;
            if (div.Money_ < 0)
                throw new Exception("Банкрот");
            return div;
        }
        public static Money operator *(Money m1, double num)
        {
            Money muv = new Money();
            muv.Money_ = m1.Money_ * num;
            if (muv.Money_ < 0)
                throw new Exception("Банкрот");
            return muv;
        }
        public static Money operator --(Money m1)
        {
            m1.Money_ -= 0.01;
            if (m1.Money_ < 0)
                throw new Exception("Банкрот");
            return m1;
        }
        public static Money operator ++(Money m1)
        {
            m1.Money_ += 0.01;        
            return m1;
        }
    }
}

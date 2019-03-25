using System;


namespace STRING
{
    class Program
    {
        static void Main(string[] args)
        {
            string str;
            Console.WriteLine("Enter string ");
            str= Console.ReadLine();
            StringInfo(str);

     
        }

        static void StringInfo( string a)
        {
            Console.WriteLine("Symbols "+a.Length);
            int leter = 0, lower = 0, upper = 0, digit = 0, punctuation = 0, space = 0; ;
            for (int i = 0; i < a.Length; i++)
            {
                char b = a[i];
                if(char.IsLetter(b))
                {
                    leter++;

                }
                if (char.IsDigit(b))
                {
                    digit++;

                }
                if (char.IsUpper(b))
                {
                    upper++;

                }
                if (char.IsLower(b))
                {
                    lower++;

                }
                if (char.IsPunctuation(b))
                {
                    punctuation++;

                }
                if (char.IsWhiteSpace(b))
                {
                    space++;

                }
            }
            Console.WriteLine("Leters: "+ leter);
            Console.WriteLine("Uppers: " + upper);
            Console.WriteLine("Lowers: " + lower);
            Console.WriteLine("Numbers: " + digit);
            Console.WriteLine("Punctuations: " + punctuation);
            Console.WriteLine("Space: " + space);


        }
    }
}

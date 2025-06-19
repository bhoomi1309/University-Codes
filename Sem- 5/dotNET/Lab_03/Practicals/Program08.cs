using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3
{
    class Program08
    {
        public void Even(int n)
        {
            try
            {
                if (n % 2 == 0)
                {
                    throw new EvenException("Even Number Exception");
                }
            }
            catch (EvenException e)
            {
                Console.WriteLine(e.Message);
                Console.WriteLine(e.ToString());
            }
        }
    }

    class EvenException : Exception
    {
        public EvenException(string s)
            : base(s) { 
        }
    }
}

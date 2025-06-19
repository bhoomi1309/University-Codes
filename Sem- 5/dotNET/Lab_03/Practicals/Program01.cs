using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3
{
    class Program01
    {
        public void DivideByZero()
        {
            int a = 1;
            int b = 0;
            try
            {
                double ans = a / b;
                Console.WriteLine("Ans: " + ans);
            }
            catch (DivideByZeroException e)
            {
                Console.WriteLine("Division By Zero Exception Caught");
            }
            catch (Exception e) {
                Console.WriteLine("Exception Caught");
            }
        }
    }
}

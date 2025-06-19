using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab1
{
    class Program08
    {
        public double CalculateIfElse(double x, double y, string sign)
        {
            if(sign == "+")
            {
                return x + y;
            }
            if (sign == "-")
            {
                return x - y;
            }
            if (sign == "*")
            {
                return x * y;
            }
            if (sign == "/")
            {
                return x / y;
            }
            return -1;
        }

        public double CalculateSwitchCase(double x, double y, string sign)
        {
            switch (sign)
            {
                case "+": return x + y;
                case "-": return x - y;
                case "*": return x * y;
                case "/": return x / y;
                default: return -1;
            }
        }
    }
}

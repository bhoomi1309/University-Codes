using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab1
{
    class Program10
    {
        public int MaxFrom3(int a, int b, int c)
        {
            int max = (a > b) ? ((a > c ? a : c)) : ((b > c ? b : c));
            return max;
        }
    }
}

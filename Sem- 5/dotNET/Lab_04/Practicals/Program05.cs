using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_04.Practicals
{
    class Program05
    {
        public int Area(int x, int y)
        {
            return x * y;
        }

        public int Area(int x)
        {
            return x * x;
        }

        public double Area(double r)
        {
            return Math.PI * r * r;
        }
    }
}

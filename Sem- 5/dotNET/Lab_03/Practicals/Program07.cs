using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3
{
    interface Shape
    {
        public double Circle(double r);
        public double Triangle(double b, double h);
        public double Square(double x);
    }

    class Area : Shape
    {
        public double Circle(double r)
        {
            return Math.Sqrt(r) * Math.PI;
        }

        public double Square(double x)
        {
            return x * x;
        }

        public double Triangle(double b, double h)
        {
            return 0.5 * b * h;
        }
    }
}

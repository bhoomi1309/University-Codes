using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP.Lab_2
{
    class Rectangle
    {
        public double Length, Breadth, Area;

        public Rectangle(double length, double breadth)
        {
            this.Length = length;
            this.Breadth = breadth;
            this.Area = this.Length * this.Breadth;
        }
    }
}

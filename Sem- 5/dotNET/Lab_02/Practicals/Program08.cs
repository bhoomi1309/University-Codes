using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab2
{
    class Distance
    {
        public int dist1;
        public int dist2;
        public int dist3;

        public Distance(int dist1, int dist2)
        {
            this.dist1 = dist1;
            this.dist2 = dist2;
        }

        public void Calculatedist3()
        {
            this.dist3 = this.dist1 + this.dist2;
        }

        public void Display()
        {
            Console.WriteLine("Distance 1: " + dist1);
            Console.WriteLine("Distance 2: " + dist2);
            Console.WriteLine("Total Distance: " + dist3);
        }
    }
}

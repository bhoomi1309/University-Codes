using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab1
{
    class Program09
    {
        public void Swap(int x, int y)
        {
            Console.WriteLine($"\n1st Variable: {x}");
            Console.WriteLine($"2nd Variable: {y}");
            x = x + y;
            y = x - y;
            x = x - y;
            Console.WriteLine("\nAfter Swapping");
            Console.WriteLine($"1st Variable: {x}");
            Console.WriteLine($"2nd Variable: {y}");
        }
    }
}

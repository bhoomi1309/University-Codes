using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_1
{
    internal class Program04
    {
        public int area()
        {
            Console.WriteLine("Area in Square Feet\n");
            Console.Write("Enter length: ");
            int l = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter width: ");
            int w = Convert.ToInt32(Console.ReadLine());
            return l * w;
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_1
{
    internal class Program05
    {
        public void area()
        {
            Console.WriteLine("Area of Square\n");
            Console.Write("Enter width: ");
            float w = Convert.ToSingle(Console.ReadLine());
            Console.WriteLine($"Area of Square= {w * w}\n");

            Console.WriteLine("\nArea of Rectangle\n");
            Console.Write("Enter length: ");
            int l = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter breadth: ");
            int b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"Area of Rectangle= {l * b}\n");

            Console.WriteLine("\nArea of Circle\n");
            Console.Write("Enter radius: ");
            float r = Convert.ToSingle(Console.ReadLine());
            Console.WriteLine($"Area of Circle= {Math.PI * r * r}\n");
        }
    }
}

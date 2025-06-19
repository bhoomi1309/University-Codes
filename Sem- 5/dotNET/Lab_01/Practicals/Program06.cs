using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab1
{
    class Program06
    {
        public void CalculateCToF()
        {
            Console.WriteLine("Celsius to Fahrenheit");
            Console.Write("Enter Celsius: ");
            float c = Convert.ToSingle(Console.ReadLine());
            float f = (c * 9 / 5) + 32;
            Console.WriteLine($"Temperature in F= {f}\n");
        }

        public void CalculateFToC()
        {
            Console.WriteLine("\nFahrenheit to Celsius");
            Console.Write("Enter Fahrenheit: ");
            float f = Convert.ToSingle(Console.ReadLine());
            float c = (f - 32) * 5 / 9;
            Console.WriteLine($"Temperatur in Celsius= {c}\n");
        }
    }
}

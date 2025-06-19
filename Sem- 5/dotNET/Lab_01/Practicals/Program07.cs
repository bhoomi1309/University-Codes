using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab1
{
    class Program07
    {
        public void SimpleInterest()
        {
            Console.WriteLine("Simple Interest");
            Console.Write("Enter Principal Amount: ");
            double P = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter Rate of Interest: ");
            double R = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter Time: ");
            int T = Convert.ToInt32(Console.ReadLine());
            double SI = (P * R * T) / 100;
            Console.WriteLine($"Simple Interest: {SI}");
        }
    }
}

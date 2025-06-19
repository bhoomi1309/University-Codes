using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_1
{
    public class Program03
    {
        public void print()
        {
            Console.WriteLine("Print Name and Country\n");
            Console.Write("Enter Name: ");
            string Name = Console.ReadLine();
            Console.Write("Enter Country: ");
            string Country = Console.ReadLine();
            Console.WriteLine("Hello " + Name + " from " + Country);
        }
    }
}

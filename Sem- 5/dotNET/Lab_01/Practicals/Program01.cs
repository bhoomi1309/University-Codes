using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_1
{
    public class Program01
    {
        public void print()
        {
            Console.WriteLine("Print Name, Address, Phone and City\n");
            Console.Write("Enter Name: ");
            string Name = Console.ReadLine();
            Console.Write("Enter Address: ");
            string Address = Console.ReadLine();
            Console.Write("Enter Phone: ");
            int Phone = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter City: ");
            string City = Console.ReadLine();
            Console.WriteLine("Hello " + Name);
            Console.WriteLine($"{Name} lives {Address}, {City}");
            Console.WriteLine($"Phone Number is {Phone}");
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_1
{
    public class Program02
    {
        public void get2Numbers(){
            Console.WriteLine("Get 2 Numbers from User\n");
            Console.Write("Enter Number 1: ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Number 2: ");
            int b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"Numbers are: {a} {b}");
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP.Lab_2
{
    class Candidate
        {
        int ID;
        string Name;
        int Age;
        double Weight;
        double Height;

        public void GetCandidateDetails()
        {
            Console.WriteLine("Enter Candidate Details");
            Console.Write("ID: ");
            ID = Convert.ToInt32(Console.ReadLine());
            Console.Write("Name: ");
            Name = Console.ReadLine();
            Console.Write("Age: ");
            Age = Convert.ToInt32(Console.ReadLine());
            Console.Write("Weight: ");
            Weight = Convert.ToDouble(Console.ReadLine());
            Console.Write("Height: ");
            Height = Convert.ToDouble(Console.ReadLine());
        }

        public void DisplayCandidateDetails()
        {
            Console.WriteLine("\nCandidate Details");
            Console.WriteLine("ID: "+ID);
            Console.WriteLine("Name: "+Name);
            Console.WriteLine("Age: "+Age);
            Console.WriteLine("Weight: "+Weight);
            Console.WriteLine("Height: "+Height);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP.Lab_2
{
    class Staff
    {
        string Name;
        public string Department;
        string Designation;
        int Experience;
        double Salary;

        public void GetStaffDetails()
        {
            Console.WriteLine("Enter Staff Details");
            Console.Write("Name: ");
            Name = Console.ReadLine();
            Console.Write("Department: ");
            Department = Console.ReadLine();
            Console.Write("Designation: ");
            Designation = Console.ReadLine();
            Console.Write("Experience: ");
            Experience = Convert.ToInt32(Console.ReadLine());
            Console.Write("Salary: ");
            Salary = Convert.ToDouble(Console.ReadLine());
        }

        public void DisplayStaffDetails()
        {
            Console.WriteLine("\nCandidate Details");
            Console.WriteLine("Name: " + Name);
            Console.WriteLine("Salary: " + Salary);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP.Lab_2
{
    class Student
    {
        int Enrollment_No;
        string Student_Name;
        int Semester;
        double CPI;
        double SPI;

        public Student()
        {
            Console.WriteLine("Enter Student Details");
            Console.Write("Enrollment Number: ");
            Enrollment_No = Convert.ToInt32(Console.ReadLine());
            Console.Write("Name: ");
            Student_Name = Console.ReadLine();
            Console.Write("Semester: ");
            Semester = Convert.ToInt32(Console.ReadLine());
            Console.Write("CPI: ");
            CPI = Convert.ToDouble(Console.ReadLine());
            Console.Write("SPI: ");
            SPI = Convert.ToDouble(Console.ReadLine());
        }

        public void DisplayStudentDetails()
        {
            Console.WriteLine("\nStudent Details");
            Console.WriteLine("Enrollment No: " + Enrollment_No);
            Console.WriteLine("Name: " + Student_Name);
            Console.WriteLine("Semester: " + Semester);
            Console.WriteLine("CPI: " + CPI);
            Console.WriteLine("SPI: " + SPI);
        }
    }
}

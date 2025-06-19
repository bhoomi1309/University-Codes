using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab2
{
    interface Gross
    {
        public void Gross_sal();
    }

    public class Employee
    {
        public string Name;
        public double Basic;

        public void Basic_sal()
        {
            Console.Write("Employee Name: ");
            Name = Console.ReadLine();
            Console.Write("Basic Salary: ");
            Basic = Convert.ToDouble(Console.ReadLine());
        }
    }

    public class EmpSalary : Employee, Gross
    {

        public double TA;
        public double DA;
        public double HRA;

        public void Disp_sal()
        {
            Console.Write("Enter HRA: ");
            HRA = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter TA: ");
            TA = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter DA: ");
            DA = Convert.ToDouble(Console.ReadLine());
        }

        public void Gross_sal()
        {
            double daAmount = Basic * DA;
            double hraAmount = Basic * HRA;
            double GrossSal = Basic + TA + daAmount + hraAmount;
            Console.WriteLine("Employee: " + Name);
            Console.WriteLine("Gross Salary: " + GrossSal);
        }
    }
}

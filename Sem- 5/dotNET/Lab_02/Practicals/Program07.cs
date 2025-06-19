using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab2
{
    class Salary
    {
        public double Basic;
        public double TA;
        public double DA;
        public double HRA;

        public Salary(double basic, double ta, double da, double hra)
        {
            Basic = basic;
            TA = ta;
            DA = da;
            HRA = hra;
        }

        public double CalculateSalary()
        {
            double daAmount = Basic * DA;
            double hraAmount = Basic * HRA;
            return Basic + TA + daAmount + hraAmount;
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP.Lab_2
{
    class Account_Details
    {
        public double Amount, Rate;
        public int Account_No, Time;
        public Account_Details() {
            Console.WriteLine("Enter Account Details");
            Console.Write("Account Number: ");
            Account_No = Convert.ToInt32(Console.ReadLine());
            Console.Write("Amount: ");
            Amount = Convert.ToDouble(Console.ReadLine());
            Console.Write("Rate: ");
            Rate = Convert.ToDouble(Console.ReadLine());
            Console.Write("Time: ");
            Time = Convert.ToInt32(Console.ReadLine());
        }
    }

    class Interest : Account_Details
    {
        double SimpleInterest;

        public void CalculateInterest()
        {
            SimpleInterest = (Amount * Rate * Time) / 100;
            Console.WriteLine("Interest: " + SimpleInterest);
        }
    }

}

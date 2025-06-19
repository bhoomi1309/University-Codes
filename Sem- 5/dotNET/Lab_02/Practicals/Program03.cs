using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace OOP.Lab_2
{
    class Bank_Account
    {
        int Account_No;
        string Email;
        string User_Name;
        string Account_Type;
        double Account_Balance;

        public void GetAccountDetails()
        {
            Console.WriteLine("Enter Account Details");
            Console.Write("Account Number: ");
            Account_No = Convert.ToInt32(Console.ReadLine());
            Console.Write("Email: ");
            Email = Console.ReadLine();
            Console.Write("Username: ");
            User_Name = Console.ReadLine();
            Console.Write("Account Type: ");
            Account_Type = Console.ReadLine();
            Console.Write("Balance: ");
            Account_Balance = Convert.ToDouble(Console.ReadLine());
        }

        public void DisplayAccountDetails()
        {
            Console.WriteLine("\nAccount Details");
            Console.WriteLine("Account Number: " + Account_No);
            Console.WriteLine("Email: " + Email);
            Console.WriteLine("Username: " + User_Name);
            Console.WriteLine("Account Type: " + Account_Type);
            Console.WriteLine("Balance: " + Account_Balance);
        }
    }
}

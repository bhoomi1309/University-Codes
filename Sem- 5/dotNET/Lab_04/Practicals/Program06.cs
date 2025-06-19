using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_04.Practicals
{
    class BankAccount
    {
        double Balance;
        string Name;

        public BankAccount(string accountHolderName, double initialBalance) { 
            Balance = initialBalance;
            Name = accountHolderName;
        }

        public void Deposit(double amount) { 
            Balance += amount;
            Console.WriteLine($"Deposited {amount} via cash. New balance: {Balance}");
        }

        public void Deposit(string checkNumber, double amount)
        {
            Balance += amount;
            Console.WriteLine($"Deposited {amount} via check {checkNumber}. New balance: {Balance}");
        }

        public void Withdraw(double amount)
        {
            if (Balance - amount < 0)
            {
                Console.WriteLine("Insufficient Funds");
                return;
            }
            Balance -= amount;
            Console.WriteLine($"Withdrew {amount} via cash. New balance: {Balance}");
        }

        public void Withdraw(string checkNumber, double amount)
        {
            if (Balance - amount < 0)
            {
                Console.WriteLine("Insufficient Funds");
                return;
            }    
            Balance -= amount;
            Console.WriteLine($"Withdrew {amount} via check {checkNumber}. New balance: {Balance}");
        }
    }
}
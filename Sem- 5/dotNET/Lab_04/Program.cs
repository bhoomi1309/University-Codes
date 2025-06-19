// See https://aka.ms/new-console-template for more information


using Lab_04.Practicals;
using System.ComponentModel;

//Addition a = new Addition();
//Console.WriteLine("2 + 3 = " + a.Add(2, 3));
//Console.WriteLine("2.0 + 3.5 = " + a.Add((float)2.0, 3.5f));

//Program02 p2 = new Program02();
//Console.WriteLine("Area of Square " + p2.Area(2));
//Console.WriteLine("Area of Rectangle = " + p2.Area(2, 3));

//HDFC h = new HDFC();
//h.CalculateInterest();
//SBI s = new SBI();
//s.CalculateInterest();
//ICICI i = new ICICI();
//i.CalculateInterest();

//Hospital h = new Hospital();
//h.HospitalDetails();
//Hospital a = new Apollo();
//a.HospitalDetails();
//Hospital w = new Wockhardt();
//w.HospitalDetails();
//GokulSuperspeciality g = new GokulSuperspeciality();
//g.HospitalDetails();

//Program05 p5 = new Program05();
//Console.WriteLine("Area of Square " + p5.Area(2));
//Console.WriteLine("Area of Rectangle = " + p5.Area(2, 3));
//Console.WriteLine("Area of Circle = " + p5.Area(7.0));

BankAccount b = new BankAccount("Bhoomi", 15000);
b.Deposit(2000);
b.Deposit("12345678", 1000);
b.Withdraw(10000);
b.Withdraw("12345678", 10000);



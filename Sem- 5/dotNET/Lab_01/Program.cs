// See https://aka.ms/new-console-template for more information


using Lab_1;
using Lab1;

//Program01 p1 = new Program01();
//p1.print();

//Program02 p2 = new Program02();
//p2.get2Numbers();

//Program03 p3 = new Program03();
//p3.print();

//Program04 p4 = new Program04();
//Console.WriteLine($"Area = {p4.area()}");

//Program05 p5 = new Program05();
//p5.area();

//Program06 p6 = new Program06();
//p6.CalculateCToF();
//p6.CalculateFToC();

//Program07 p7 = new Program07();
//p7.SimpleInterest();

//Program08 p8 = new Program08();
//Console.WriteLine("Calculator");
//Console.Write("Enter Number 1: ");
//double x = Convert.ToDouble(Console.ReadLine());
//Console.Write("Enter Number 2: ");
//double y = Convert.ToDouble(Console.ReadLine());
//Console.Write("Enter Sign: ");
//string sign = Console.ReadLine();
//if (sign != "+" && sign != "-" && sign != "*" && sign != "/")
//{
//    Console.WriteLine("Invalid Sign");
//    return;
//}
//double Ans = p8.CalculateIfElse(x, y, sign);
//Console.WriteLine("Answer (IF-ELSE): " + Ans);
//double Ans2 = p8.CalculateSwitchCase(x, y, sign);
//Console.WriteLine("Answer (SWITCH CASE): " + Ans);

//Program09 p9 = new Program09();
//Console.WriteLine("Swapping 2 Variables without using 3rd Variable: ");
//Console.Write("Number 1: ");
//int x = Convert.ToInt32(Console.ReadLine());
//Console.Write("Number 2: ");
//int y = Convert.ToInt32(Console.ReadLine());
//p9.Swap(x, y);

Program10 p10 = new Program10();
Console.WriteLine("Maximum From 3 Numbers: ");
Console.Write("Number 1: ");
int x = Convert.ToInt32(Console.ReadLine());
Console.Write("Number 2: ");
int y = Convert.ToInt32(Console.ReadLine());
Console.Write("Number 3: ");
int z = Convert.ToInt32(Console.ReadLine());
Console.WriteLine($"Maximum: {p10.MaxFrom3(x, y, z)}");
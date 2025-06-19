// See https://aka.ms/new-console-template for more information

using Lab3;

//Program01 p1 = new Program01();
//p1.DivideByZero();

//Program02 p2 = new Program02();
//p2.IndexOutOfRange();

//Calculate c = new Calculate();
//int Ans = c.SumOfThree(1, 2, 3);
//Console.WriteLine("1 + 2 + 3 = " + Ans);
//int Ans2 = c.SumOfTwo(5, 6);
//Console.WriteLine("5 + 6 = " + Ans2);

//Result r = new Result();
//Console.WriteLine("Addition: 4 + 5 = " + r.Addition(4, 5));
//Console.WriteLine("Subtraction: 6 - 3 = " + r.Subtraction(6, 3));

//Program05 p5 = new Program05();
//p5.StringMethods();

//Program06 p6 = new Program06();
//Console.WriteLine(p6.ReverseCase("Hello World"));

//Area a = new Area();
//Console.WriteLine("Circle: Area = " + a.Circle(4));
//Console.WriteLine("Triangle: Area = " + a.Triangle(4, 6));
//Console.WriteLine("Square: Area = " + a.Square(4));

//Program08 p8 = new Program08();
//p8.Even(2);

//Program09 p9  = new Program09();
//string ans = p9.LongestWord("Hello World! This is the program to search for the Longest word with maximum length");
//Console.WriteLine("Longest Word: "+ans);

Program10 p10 = new Program10();
Console.Write("Enter any Character: ");
char c = Convert.ToChar(Console.Read());
Console.WriteLine("Changed Case: " + p10.ChangeCase(c));
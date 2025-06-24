using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_05.Practicals
{
    class Program03
    {
        Stack<int> s = new Stack<int>();

        public void stack()
        {
            Console.Write("Stack");

            s.Push(1);
            s.Push(2);
            s.Push(3);
            s.Push(4);
            s.Push(5);
            s.Push(6);
            s.Push(7);
            s.Push(8);

            DisplayStack();

            Console.WriteLine("\nPop");
            Console.WriteLine("Element popped: " + s.Pop());
            Console.Write("Element popped: " + s.Pop());

            DisplayStack();

            Console.Write("\nPeek");
            Console.Write("\nElement peeked: " + s.Peek());

            DisplayStack();

            Console.WriteLine("\nContains");
            Console.WriteLine("5 in Stack: " + s.Contains(5));
            Console.Write("10 in Stack: " + s.Contains(10));

            DisplayStack();

            Console.Write("\nClear");
            s.Clear();

            DisplayStack();
        }

        public void DisplayStack()
        {
            Console.Write("\nStack: ");
            foreach (int i in s)
            {
                Console.Write(i+" ");
            }
        }
    }
}

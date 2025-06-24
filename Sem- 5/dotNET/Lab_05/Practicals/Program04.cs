using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_05.Practicals
{
    class Program04
    {
        Queue<int> q = new Queue<int>();

        public void queue()
        {
            Console.Write("Queue");

            q.Enqueue(1);
            q.Enqueue(2);
            q.Enqueue(3);
            q.Enqueue(4);
            q.Enqueue(5);
            q.Enqueue(6);
            q.Enqueue(7);
            q.Enqueue(8);

            DisplayQueue();

            Console.WriteLine("\nDequeue");
            Console.WriteLine("Element dequeued: " + q.Dequeue());
            Console.Write("Element dequeued: " + q.Dequeue());

            DisplayQueue();

            Console.Write("\nPeek");
            Console.Write("\nElement peeked: " + q.Peek());

            DisplayQueue();

            Console.WriteLine("\nContains");
            Console.WriteLine("5 in Queue: " + q.Contains(5));
            Console.Write("10 in Queue: " + q.Contains(10));

            DisplayQueue();

            Console.Write("\nClear");
            q.Clear();

            DisplayQueue();
        }

        public void DisplayQueue()
        {
            Console.Write("\nQueue: ");
            foreach (int i in q)
            {
                Console.Write(i + " ");
            }
        }
    }
}

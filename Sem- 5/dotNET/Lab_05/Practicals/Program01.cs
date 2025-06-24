using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_05.Practicals
{
    class Program01
    {
        ArrayList a = new ArrayList();
        public void arrayList()
        {
            Console.Write("Array List");

            a.Add("Hello");
            a.Add("World");
            a.Add(1);
            a.Add(2.5);
            a.Add("Program");
            a.Add("Lab");
            a.Add(5);
            a.Add(10);

            DisplayArrayList();

            Console.Write("\nRemove: ");
            a.Remove(1);

            DisplayArrayList();

            Console.Write("\nRemoveRange: ");
            a.RemoveRange(0, 4);

            DisplayArrayList();

            Console.Write("\nClear");
            a.Clear();

            DisplayArrayList();
        }

        public void DisplayArrayList()
        {
            Console.Write("\nArrayList: ");
            for (int i = 0; i < a.Count; i++)
            {
                Console.Write(a[i] + " ");
            }
        }
    }
}

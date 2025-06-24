using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_05.Practicals
{
    class Program02
    {
        List<string> StudentName = new List<string>();
        public void list()
        {
            Console.Write("List of Student Names");

            StudentName.Add("Bhoomi");
            StudentName.Add("Komal");
            StudentName.Add("Shreya");
            StudentName.Add("Birva");
            StudentName.Add("Manali");
            StudentName.Add("Siddhi");

            DisplayList();

            Console.Write("\nRemove: ");
            StudentName.Remove("Siddhi");

            DisplayList();

            Console.Write("\nRemoveRange: ");
            StudentName.RemoveRange(0, 4);

            DisplayList();

            Console.Write("\nClear");
            StudentName.Clear();

            DisplayList();
        }

        public void DisplayList()
        {
            Console.Write("\nList: ");
            foreach (string i in StudentName)
            {
                Console.Write(i+" ");
            }
        }
    }
}

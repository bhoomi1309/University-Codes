using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_05.Practicals
{
    class Program05
    {
        Dictionary<int, string> _dictionary = new Dictionary<int, string>();

        public void dictionary()
        {
            _dictionary.Add(1, "Bhoomi");
            _dictionary.Add(2, "Shreya");
            _dictionary.Add(3, "Birva");
            _dictionary.Add(4, "Komal");
            _dictionary.Add(5, "Manali");
            _dictionary.Add(6, "Siddhi");


            DisplayDictionary();

            Console.WriteLine("\nRemove");
            _dictionary.Remove(5);

            DisplayDictionary();

            Console.Write("\nContainsKey");
            Console.Write("\nKey 4 in Dictionary: " + _dictionary.ContainsKey(4));
            Console.WriteLine("\nKey 9 in Dictionary: " + _dictionary.ContainsKey(9));

            Console.Write("\nContainsValue");
            Console.Write("\nValue Komal in Dictionary: " + _dictionary.ContainsValue("Komal"));
            Console.WriteLine("\nValue Manali in Dictionary: " + _dictionary.ContainsValue("Manali"));

            Console.WriteLine("\nClear");
            _dictionary.Clear();

            DisplayDictionary();
        }

        public void DisplayDictionary()
        {
            Console.Write("Dictionary: \n");
            //foreach (var key in _dictionary.Keys)
            //{
            //    Console.WriteLine(key + " " + _dictionary[key]);
            //}

            foreach (var kvp in _dictionary.Keys)
            {
                Console.WriteLine(kvp + " " + _dictionary.GetValueOrDefault(kvp));
            }
        }
    }
}
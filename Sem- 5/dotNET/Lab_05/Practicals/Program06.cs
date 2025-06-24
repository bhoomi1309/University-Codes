using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_05.Practicals
{
    class Program06
    {
        Hashtable _hash = new Hashtable();

        public void hashTable()
        {
            _hash.Add(1, "Bhoomi");
            _hash.Add(2, "Shreya");
            _hash.Add(3, "Birva");
            _hash.Add(4, "Komal");
            _hash.Add(5, "Manali");
            _hash.Add(6, "Siddhi");

            DisplayHashTable();

            Console.WriteLine("\nRemove");
            _hash.Remove(5);

            DisplayHashTable();

            Console.Write("\nContainsKey");
            Console.Write("\nKey 4 in HashTable: " + _hash.ContainsKey(4));
            Console.WriteLine("\nKey 9 in HashTable: " + _hash.ContainsKey(9));

            Console.Write("\nContainsValue");
            Console.Write("\nValue Komal in HashTable: " + _hash.ContainsValue("Komal"));
            Console.WriteLine("\nValue Manali in HashTable: " + _hash.ContainsValue("Manali"));

            Console.WriteLine("\nClear");
            _hash.Clear();

            DisplayHashTable();
        }

        public void DisplayHashTable()
        {
            Console.Write("HashTable: \n");
            foreach (var key in _hash.Keys)
            {
                Console.WriteLine(key + " " + _hash[key]);
            }
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3
{
    class Program05
    {
        public void StringMethods()
        {
            string s = "  Hello, World! Welcome to C# Programming.  ";

            Console.WriteLine("Length: " + s.Length);

            Console.WriteLine("ToUpper: " + s.ToUpper());
            Console.WriteLine("ToLower: " + s.ToLower());

            string trimmed = s.Trim();
            Console.WriteLine("Trimmed: '" + trimmed + "'");

            Console.WriteLine("Substring (7, 5): " + s.Substring(7, 5));

            string replaced = s.Replace("World", "Universe");
            Console.WriteLine("Replace: " + replaced);

            Console.WriteLine("Contains 'C#': " + s.Contains("C#"));

            Console.WriteLine("IndexOf 'Welcome': " + s.IndexOf("Welcome"));

            string[] words = s.Split(' ');
            Console.WriteLine("Split by space:");
            foreach (var word in words)
            {
                Console.Write(word+" ");
            }

            string s2 = "hello, world! welcome to c# programming.";
            Console.WriteLine("\nEquals: " + s.Equals(s2));
            Console.WriteLine("Equals (IgnoreCase): " + s.Trim().Equals(s2, StringComparison.OrdinalIgnoreCase));
        }
    }
}

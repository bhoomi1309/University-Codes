using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3
{
    class Program09
    {
        public string LongestWord(string s)
        {
            string[] Array = s.Split();
            int MaxLen = 0;
            string Longest = "";
            for (int i = 0; i < Array.Length; i++)
            {
                if (Array[i].Length > MaxLen)
                {
                    MaxLen= Array[i].Length;
                    Longest = Array[i];
                }
            }
            return Longest;
        }
    }
}

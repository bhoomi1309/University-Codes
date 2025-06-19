using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3
{
    class Program06
    {
        public string ReverseCase(string input)
        {
            for (int i = 0; i < input.Length; i++)
            {
                char c = input[i];
                if (char.IsLower(c))
                {
                    input = input.Replace(c, char.ToUpper(c));
                }
                if (char.IsUpper(c))
                {
                    input = input.Replace(c, char.ToLower(c));
                }
            }
            return input;
        }
    }
}

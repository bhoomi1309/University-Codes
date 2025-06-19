using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3
{
    class Program10
    {
        public char ChangeCase(char c)
        {
            if (char.IsLower(c)) { 
                return char.ToUpper(c);
            }
            return char.ToLower(c);
        }
    }
}
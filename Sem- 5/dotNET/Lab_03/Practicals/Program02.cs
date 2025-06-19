using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab3
{
    class Program02
    {
        public void IndexOutOfRange()
        {
            try
            {
                Console.WriteLine("Array of 5 Members");
                int[] Arr = new int[5];
                for (int i = 0; i < 5; i++)
                {
                    Console.Write("Enter value at index " + i + ": ");
                    Arr[i] = Convert.ToInt32(Console.ReadLine());
                }
                Console.Write("\nArray: ");
                for (int i = 0; i < 6; i++)
                {
                    Console.Write(Arr[i]+" ");
                }
            }
            catch (IndexOutOfRangeException e)
            {
                Console.WriteLine("\nIndex Out Of Range Exception");
            }
        }
    }
}

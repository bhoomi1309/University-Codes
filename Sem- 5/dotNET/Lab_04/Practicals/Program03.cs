using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_04.Practicals
{
    class RBI
    {
        public virtual void CalculateInterest()
        {
            Console.WriteLine("RBI: Calculating Interest");
        }
    }

    class HDFC: RBI
    {
        public override void CalculateInterest()
        {
            Console.WriteLine("HDFC: Calculating Interest");
        }
    }

    class SBI : RBI
    {
        public override void CalculateInterest()
        {
            Console.WriteLine("SBI: Calculating Interest");
        }
    }

    class ICICI : RBI
    {
        public override void CalculateInterest()
        {
            Console.WriteLine("ICICI: Calculating Interest");
        }
    }
}

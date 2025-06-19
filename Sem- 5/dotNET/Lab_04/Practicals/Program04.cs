using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_04.Practicals
{
    class Hospital
    {
        public virtual void HospitalDetails()
        {
            Console.WriteLine("Hospital Details");
        }
    }

    class Apollo : Hospital
    {
        public override void HospitalDetails()
        {
            Console.WriteLine("Apollo");
        }
    }

    class Wockhardt : Hospital
    {
        public override void HospitalDetails()
        {
            Console.WriteLine("Wockhardt");
        }
    }

    class GokulSuperspeciality : Hospital
    {
        public override void HospitalDetails()
        {
            Console.WriteLine("Gokul Superspeciality");
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab2
{
    class Furniture
    {
        public string material;
        public double price;
        public Furniture(string material, double price)
        {
            this.material = material;
            this.price = price;
        }

        public void DisplayFurniture()
        {
            Console.WriteLine("Material: " + material);
            Console.WriteLine("Price: " + price);
        }
    }

    class Table : Furniture
    {
        public double height;
        public double surfaceArea;
        public Table(string material, double price, double height, double surfaceArea)
             : base(material, price)
        {
            this.height = height;
            this.surfaceArea = surfaceArea;
        }

        public void DisplayTable()
        {
            DisplayFurniture();
            Console.WriteLine("Height: " + height);
            Console.WriteLine("Surface Area: " + surfaceArea);
        }
    }
}

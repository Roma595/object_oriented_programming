using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Lab5_Kotkov
{
    [Serializable]
    public class Bird : Animal
    {
        public bool Can_fly { get; set; }
        public override void InputAnimal()
        {
            base.InputAnimal();
            Console.WriteLine("Умеет летать? (0 - нет, 1 - да):");
            Can_fly = Convert.ToBoolean(Utilities.ValidityEnterInteractive<int>(0, 1));
        }

        public override void Print()
        {
            base.Print();
            Console.WriteLine($"Умеет летать? (0 - нет, 1 - да):   {Convert.ToInt32(Can_fly)}");
        }

    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Lab5_Kotkov
{
    [Serializable]
    [XmlType("Bird")]
    public class Bird : Animal
    {
        [XmlElement(ElementName = "CanFly")]
        public bool _can_fly;
        public override void InputAnimal()
        {
            base.InputAnimal();
            Console.WriteLine("Умеет летать? (0 - нет, 1 - да):");
            _can_fly = Convert.ToBoolean(Utilities.ValidityEnterInteractive<int>(0, 1));
        }

        public override void Print()
        {
            base.Print();
            Console.WriteLine($"Умеет летать? (0 - нет, 1 - да):   {Convert.ToInt32(_can_fly)}");
        }

    }
}

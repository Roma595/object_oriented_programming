using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ConstrainedExecution;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Lab5_Kotkov
{
    [Serializable]
    [XmlType("Animal")]
    public class Animal
    {
        [XmlElement(ElementName = "Name")]
        public string _name;

        [XmlElement(ElementName = "Month")]
        public int _month_of_birth;

        [XmlElement(ElementName = "Year")]
        public int _year_of_birth;

        [XmlElement(ElementName = "Weight")]
        public double _weight;

        [XmlElement(ElementName = "Predator")]
        public bool _predator;

        public virtual void InputAnimal()
        {
            Console.WriteLine("Введите имя:");
            while (string.IsNullOrWhiteSpace(_name))
            {
                _name = Console.ReadLine();
            }

            Console.WriteLine("Введите месяц рождения:");
            _month_of_birth = Utilities.ValidityEnterInteractive<int>(1, 12);

            Console.WriteLine("Введите год рождения:");
            _year_of_birth = Utilities.ValidityEnterInteractive<int>(1900, 2024);

            Console.WriteLine("Введите вес, кг:");
            _weight = Utilities.ValidityEnterInteractive<double>(0.1, 10000.0);

            Console.WriteLine("Хищник? (0 - нет, 1 - да):");
            _predator = Convert.ToBoolean(Utilities.ValidityEnterInteractive<int>(0, 1));

        }

        public virtual void Print()
        {
            Console.WriteLine($"Имя:                               {_name}");
            Console.WriteLine($"Месяц рождения:                    {_month_of_birth}");
            Console.WriteLine($"Год рождения:                      {_year_of_birth}");
            Console.WriteLine($"Вес, кг:                           {_weight}");
            Console.WriteLine($"Хищник? (0 - нет, 1 - да):         {Convert.ToInt32(_predator)}");
        }
    }
}

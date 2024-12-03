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
    public class Animal
    {
        public string Name {  get; set; }

        public int Month_of_birth {  get; set; }

        public int Year_of_birth { get; set; }

        public double Weight {  get; set; }

        public bool Predator {  get; set; }

        public virtual void InputAnimal()
        {
            Console.WriteLine("Введите имя:");
            while (string.IsNullOrWhiteSpace(Name))
            {
                Name = Console.ReadLine();
            }

            Console.WriteLine("Введите месяц рождения:");
            Month_of_birth = Utilities.ValidityEnterInteractive<int>(1, 12);

            Console.WriteLine("Введите год рождения:");
            Year_of_birth = Utilities.ValidityEnterInteractive<int>(1900, 2024);

            Console.WriteLine("Введите вес, кг:");
            Weight = Utilities.ValidityEnterInteractive<double>(0.1, 10000.0);

            Console.WriteLine("Хищник? (0 - нет, 1 - да):");
            Predator = Convert.ToBoolean(Utilities.ValidityEnterInteractive<int>(0, 1));

        }

        public virtual void Print()
        {
            Console.WriteLine($"Имя:                               {Name}");
            Console.WriteLine($"Месяц рождения:                    {Month_of_birth}");
            Console.WriteLine($"Год рождения:                      {Year_of_birth}");
            Console.WriteLine($"Вес, кг:                           {Weight}");
            Console.WriteLine($"Хищник? (0 - нет, 1 - да):         {Convert.ToInt32(Predator)}");
        }
    }
}

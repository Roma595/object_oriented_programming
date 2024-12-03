using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Lab5_Kotkov
{
    internal class Zoo
    {
        public List<Animal> Animals {  get; set; }

        public Zoo() { Animals = []; }
        public void AddAnimal(Animal animal)
        {
            Animals.Add(animal);
        }
        public void AddBird(Bird bird)
        {
            Animals.Add(bird);
        }
        public void Save()
        {
            Console.WriteLine("Введите название файла:");
            try
            {
                string fileName = Console.ReadLine();
                var xs = new XmlSerializer(typeof(List<Animal>), new[] { typeof(Animal), typeof(Bird) });
                using Stream fs = new FileStream($"{fileName}.xml", FileMode.OpenOrCreate);
                xs.Serialize(fs, Animals);

                Console.WriteLine("Данные сохранены");
            }
            catch
            {
                Console.WriteLine("Сохранение не удалось");
            }
            
        }

        public void Load()
        {
            Console.WriteLine("Введите название файла:");
            try
            {
                string fileName = Console.ReadLine();
                var xs = new XmlSerializer(typeof(List<Animal>), new[] { typeof(Animal), typeof(Bird) });
                using (Stream fs = new FileStream($"{fileName}.xml", FileMode.Open))
                Animals = xs.Deserialize(fs) as List<Animal>;
                Console.WriteLine("Данные загружены");
            }
            catch 
            {
                Console.WriteLine("Загрузка не удалась");
            }
            
        }
        public void ClearData()
        {
            Animals.Clear();
        }
    }
}

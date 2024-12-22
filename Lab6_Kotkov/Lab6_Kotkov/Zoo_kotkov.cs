using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;
using static Lab6_Kotkov.Form1;

namespace Lab6_Kotkov
{
    public class Zoo_kotkov
    {
        public List<Animal_kotkov> Animals {  get; set; }

        public Zoo_kotkov() { Animals = []; }

        public  void AddAnimal(Animal_kotkov animal)
        {
            Animals.Add(animal);
        }
        public void AddBird(Bird bird)
        {
           Animals.Add(bird);
        }

        public void ClearData()
        {
            Animals.Clear();
        }

    }
}

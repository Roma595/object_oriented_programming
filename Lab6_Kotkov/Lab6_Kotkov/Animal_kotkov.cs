using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ConstrainedExecution;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;
using static Lab6_Kotkov.Form1;

namespace Lab6_Kotkov
{
    [Serializable]
    public class Animal_kotkov
    {
        public string Name {  get; set; }

        public int Month_of_birth {  get; set; }

        public int Year_of_birth { get; set; }

        public double Weight {  get; set; }

        public bool Predator {  get; set; }


        public virtual void AnimalFromSrtruct(AnimalCH item)
        {
            this.Name = item.Name;
            this.Month_of_birth = item.Month_of_birth;
            this.Year_of_birth = item.Year_of_birth;
            this.Weight = item.Weight;
            this.Predator = item.Predator;
        }

        public virtual void AnimalToSrtruct(ref AnimalCH item)
        {
            item.Name = Name;
            item.Month_of_birth = Month_of_birth;
            item.Year_of_birth = Year_of_birth;
            item.Weight = Weight;
            item.Predator = Predator;
        }

    }
}

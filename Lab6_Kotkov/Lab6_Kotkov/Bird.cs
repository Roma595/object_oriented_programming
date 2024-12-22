using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;
using static Lab6_Kotkov.Form1;

namespace Lab6_Kotkov
{
    [Serializable]
    public class Bird : Animal_kotkov
    {
        public bool Can_fly { get; set; }


        public override void AnimalFromSrtruct(AnimalCH item)
        {
            base.AnimalFromSrtruct(item);
            this.Can_fly = item.Can_fly;
        }

        public override void AnimalToSrtruct(ref AnimalCH item)
        {
            base.AnimalToSrtruct(ref item);
            item.Can_fly = this.Can_fly;
        }



    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Intrinsics.X86;
using System.Text;
using System.Threading.Tasks;


namespace Lab5_Kotkov
{
    internal class Menu
    {
         public static void PrintMenu()
        {
            Console.WriteLine("1. Добавить животное");
            Console.WriteLine("2. Добавить птицу");
            Console.WriteLine("3. Просмотр всех");
            Console.WriteLine("4. Сохранить данные");
            Console.WriteLine("5. Загрузить данные");
            Console.WriteLine("6. Очистить");
            Console.WriteLine("0. Выход\n");
        }

        public static void MainMenu()
        {
            int chooice;
            Zoo zoo = new();
            
            do
            {
                PrintMenu();
                chooice = Utilities.ValidityEnterInteractive<int>(0, 6);
                switch (chooice)
                {
                    case 1:
                        {
                            Animal animal = new();
                            animal.InputAnimal();
                            zoo.AddAnimal(ref animal);
                            Console.WriteLine("Животное добавлено");
                            break;
                        };
                    case 2:
                        {
                            Bird bird = new();
                            bird.InputAnimal();
                            zoo.AddBird(ref bird);
                            Console.WriteLine("Птица добавлена");
                            break;
                        };
                    case 3:
                        {
                            List<Animal> list = zoo.GetAnimals();
                            if(list.Count != 0)
                            {
                                for (int i = 0; i < list.Count; ++i)
                                {
                                    list[i].Print();
                                    Console.WriteLine();
                                }
                            }
                            else
                            {
                                Console.WriteLine("Список пуст");
                            }
                            break;
                        };
                    case 4:
                        {
                            zoo.Save();
                            break;
                        };
                    case 5:
                        {
                            zoo.Load();
                            break;
                        };
                    case 6:
                        {
                            zoo.ClearData();
                            break;
                        };

                }
            }while (chooice != 0);
        }
    }
}

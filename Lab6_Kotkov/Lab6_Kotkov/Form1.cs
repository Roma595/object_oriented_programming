using System.Runtime.InteropServices;
using System.Text;
using System.Windows.Forms;
using static Lab6_Kotkov.Form1;

namespace Lab6_Kotkov
{
    public partial class Form1 : Form
    {
        Zoo_kotkov zoo_cont = new();

        [DllImport("KotkovDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern void LoadData(IntPtr zoo, StringBuilder filename);

        [DllImport("KotkovDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern void SaveData(IntPtr zoo, StringBuilder filename);

        [DllImport("KotkovDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr CreateZoo();

        [DllImport("KotkovDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern int GetSizeZoo(IntPtr zoo);

        [DllImport("KotkovDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern void GetStruct(IntPtr zoo, ref AnimalCH animalCH, int index);
        [DllImport("KotkovDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern void DeleteZoo(IntPtr zoo);

        [DllImport("KotkovDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern void StructToZoo(IntPtr zoo, ref AnimalCH animalCH);


        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
        public struct AnimalCH
        {
            [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 100)]
            public string Name;
            [MarshalAs(UnmanagedType.I4)]
            public int Month_of_birth;
            [MarshalAs(UnmanagedType.I4)]
            public int Year_of_birth;
            [MarshalAs(UnmanagedType.R8)]
            public double Weight;
            [MarshalAs(UnmanagedType.I1)]
            public bool Predator;
            [MarshalAs(UnmanagedType.I1)]
            public bool Can_fly;
            [MarshalAs(UnmanagedType.I1)]
            public bool Bird;
        }

        public Form1()
        {
            InitializeComponent();
            checkBoxCanFly.Enabled = false;
        }

        private void UpdateList(Zoo_kotkov zoo)
        {
            listBox.Items.Clear();
            foreach (var animal in zoo.Animals)
            {
                listBox.Items.Add(animal.Name);
            }
        }

        private void Open_file_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.InitialDirectory = Directory.GetCurrentDirectory();
            if (openFileDialog.ShowDialog() == DialogResult.OK)
            {
                var FileName = new StringBuilder(openFileDialog.FileName);
                IntPtr zoo = CreateZoo();
                LoadData(zoo, FileName);

                zoo_cont.ClearData();

                int n = GetSizeZoo(zoo);

                var item = new AnimalCH();

                for (int i = 0; i < n; ++i)
                {
                    GetStruct(zoo, ref item, i);
                    if (item.Bird)
                    {
                        Bird bird = new();
                        bird.AnimalFromSrtruct(item);
                        zoo_cont.AddBird(bird);
                    }
                    else
                    {
                        Animal_kotkov animal = new();
                        animal.AnimalFromSrtruct(item);
                        zoo_cont.AddAnimal(animal);
                    }
                }

                DeleteZoo(zoo);
            }
            UpdateList(zoo_cont);
        }



        private void listBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            int selectedItem = listBox.SelectedIndex;
            if (selectedItem < 0)
            {
                textBoxName.Text = string.Empty;
                textBoxMonth.Text = string.Empty;
                textBoxYear.Text = string.Empty;
                textBoxWeight.Text = string.Empty;
                checkBoxPredator.Checked = false;
                checkBoxCanFly.Checked = false;
                checkBoxIsBird.Checked = false;
                labelFly.Visible = false;

                return;
            }

            var animal = zoo_cont.Animals[selectedItem];
            textBoxName.Text = animal.Name.ToString();
            textBoxMonth.Text = animal.Month_of_birth.ToString();
            textBoxYear.Text = animal.Year_of_birth.ToString();
            textBoxWeight.Text = animal.Weight.ToString();
            checkBoxPredator.Checked = animal.Predator;
            checkBoxCanFly.Checked = false;
            checkBoxIsBird.Checked = false;
            checkBoxCanFly.Enabled = false;

            if (animal is Bird bird)
            {
                checkBoxCanFly.Enabled = true;
                labelFly.Visible = true;
                checkBoxCanFly.Visible = true;
                checkBoxCanFly.Checked = bird.Can_fly;
                checkBoxIsBird.Checked = true;
            }

        }

        private void buttonDelete_Click(object sender, EventArgs e)
        {
            int selectedItem = listBox.SelectedIndex;
            if (selectedItem != -1)
            {
                listBox.Items.RemoveAt(selectedItem);
                if (selectedItem != listBox.Items.Count)
                {
                    listBox.SelectedIndex = selectedItem;
                }
                else
                {
                    listBox.SelectedIndex = selectedItem - 1;
                }
            }
            else
            {
                MessageBox.Show(
                    "Список пуст",
                    "Сообщение",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Information,
                    MessageBoxDefaultButton.Button1);
            }
        }

        private void buttonAdd_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(textBoxName.Text) || string.IsNullOrEmpty(textBoxMonth.Text) || string.IsNullOrEmpty(textBoxYear.Text) || string.IsNullOrEmpty(textBoxWeight.Text))
            {
                MessageBox.Show(
                    "Не все поля заполненны",
                    "Сообщение",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Information,
                    MessageBoxDefaultButton.Button1);
                return;
            }
            try
            {
                if (checkBoxIsBird.Checked)
                {
                    Bird bird = new();
                    bird.Name = textBoxName.Text;
                    bird.Month_of_birth = Convert.ToInt32(textBoxMonth.Text);
                    bird.Year_of_birth = Convert.ToInt32(textBoxYear.Text);
                    bird.Weight = Convert.ToDouble(textBoxWeight.Text);
                    bird.Predator = checkBoxPredator.Checked;
                    bird.Can_fly = checkBoxCanFly.Checked;

                    zoo_cont.AddBird(bird);

                }
                else
                {
                    Animal_kotkov animal = new();
                    animal.Name = textBoxName.Text;
                    animal.Month_of_birth = Convert.ToInt32(textBoxMonth.Text);
                    animal.Year_of_birth = Convert.ToInt32(textBoxYear.Text);
                    animal.Weight = Convert.ToDouble(textBoxWeight.Text);
                    animal.Predator = checkBoxPredator.Checked;

                    zoo_cont.AddAnimal(animal);
                }
                UpdateList(zoo_cont);
            }
            catch
            {
                MessageBox.Show(
                    "Данные введены некорректно!",
                    "Сообщение",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Information,
                    MessageBoxDefaultButton.Button1);
            }


        }

        private void buttonEdit_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(textBoxName.Text) || string.IsNullOrEmpty(textBoxMonth.Text) || string.IsNullOrEmpty(textBoxYear.Text) || string.IsNullOrEmpty(textBoxWeight.Text))
            {
                MessageBox.Show(
                    "Не все поля заполненны",
                    "Сообщение",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Information,
                    MessageBoxDefaultButton.Button1);
                return;
            }
            int selectedItem = listBox.SelectedIndex;
            var animal = zoo_cont.Animals[selectedItem];
            try
            {
                if (animal is Bird bird)
                {
                    bird.Name = textBoxName.Text;
                    bird.Month_of_birth = Convert.ToInt32(textBoxMonth.Text);
                    bird.Year_of_birth = Convert.ToInt32(textBoxYear.Text);
                    bird.Weight = Convert.ToDouble(textBoxWeight.Text);
                    bird.Predator = checkBoxPredator.Checked;
                    bird.Can_fly = checkBoxCanFly.Checked;
                }
                else
                {
                    animal.Name = textBoxName.Text;
                    animal.Month_of_birth = Convert.ToInt32(textBoxMonth.Text);
                    animal.Year_of_birth = Convert.ToInt32(textBoxYear.Text);
                    animal.Weight = Convert.ToDouble(textBoxWeight.Text);
                    animal.Predator = checkBoxPredator.Checked;
                }
                UpdateList(zoo_cont);
                listBox.SelectedIndex = selectedItem;
            }
            catch
            {
                MessageBox.Show(
                    "Данные введены некорректно!",
                    "Сообщение",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Information,
                    MessageBoxDefaultButton.Button1);
            }




        }

        private void SaveMenu_Click(object sender, EventArgs e)
        {
            SaveFileDialog openFileDialog = new()
            {
                InitialDirectory = Directory.GetCurrentDirectory()
            };
            openFileDialog.Filter = "Текстовые файлы (*.txt)|";
            openFileDialog.DefaultExt = "txt";
            openFileDialog.AddExtension = true;
            if (openFileDialog.ShowDialog() == DialogResult.OK)
            {
                var FileName = new StringBuilder(openFileDialog.FileName);
                IntPtr zoo = CreateZoo();
                var item = new AnimalCH();

                for (int i = 0; i < zoo_cont.Animals.Count; ++i)
                {
                    var animal = zoo_cont.Animals[i];
                    animal.AnimalToSrtruct(ref item);
                    StructToZoo(zoo, ref item);
                }
                SaveData(zoo, FileName);
                
            }
        }

        private void checkBoxIsBird_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBoxIsBird.Checked)
            {
                checkBoxCanFly.Enabled = true;
            }
            else
            {
                checkBoxCanFly.Enabled = false;
            }
        }
    }
}

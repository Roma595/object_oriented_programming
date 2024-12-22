namespace Lab6_Kotkov
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            menuStrip1 = new MenuStrip();
            файлToolStripMenuItem = new ToolStripMenuItem();
            Open_file = new ToolStripMenuItem();
            SaveMenu = new ToolStripMenuItem();
            listBox = new ListBox();
            textBoxName = new TextBox();
            textBoxMonth = new TextBox();
            textBoxYear = new TextBox();
            textBoxWeight = new TextBox();
            labelName = new Label();
            labelMonth = new Label();
            labelYear = new Label();
            labelWeight = new Label();
            labelPredator = new Label();
            labelFly = new Label();
            buttonAdd = new Button();
            buttonEdit = new Button();
            buttonDelete = new Button();
            checkBoxPredator = new CheckBox();
            checkBoxCanFly = new CheckBox();
            checkBoxIsBird = new CheckBox();
            labelIsBird = new Label();
            menuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // menuStrip1
            // 
            menuStrip1.ImageScalingSize = new Size(20, 20);
            menuStrip1.Items.AddRange(new ToolStripItem[] { файлToolStripMenuItem });
            menuStrip1.Location = new Point(0, 0);
            menuStrip1.Name = "menuStrip1";
            menuStrip1.Size = new Size(887, 28);
            menuStrip1.TabIndex = 0;
            menuStrip1.Text = "menuStrip1";
            // 
            // файлToolStripMenuItem
            // 
            файлToolStripMenuItem.DropDownItems.AddRange(new ToolStripItem[] { Open_file, SaveMenu });
            файлToolStripMenuItem.Name = "файлToolStripMenuItem";
            файлToolStripMenuItem.Size = new Size(59, 24);
            файлToolStripMenuItem.Text = "Файл";
            // 
            // Open_file
            // 
            Open_file.Name = "Open_file";
            Open_file.Size = new Size(166, 26);
            Open_file.Text = "Открыть";
            Open_file.Click += Open_file_Click;
            // 
            // SaveMenu
            // 
            SaveMenu.Name = "SaveMenu";
            SaveMenu.Size = new Size(166, 26);
            SaveMenu.Text = "Сохранить";
            SaveMenu.Click += SaveMenu_Click;
            // 
            // listBox
            // 
            listBox.FormattingEnabled = true;
            listBox.Location = new Point(12, 40);
            listBox.Name = "listBox";
            listBox.Size = new Size(373, 324);
            listBox.TabIndex = 1;
            listBox.SelectedIndexChanged += listBox_SelectedIndexChanged;
            // 
            // textBoxName
            // 
            textBoxName.Location = new Point(581, 51);
            textBoxName.Name = "textBoxName";
            textBoxName.Size = new Size(225, 27);
            textBoxName.TabIndex = 2;
            // 
            // textBoxMonth
            // 
            textBoxMonth.Location = new Point(581, 105);
            textBoxMonth.Name = "textBoxMonth";
            textBoxMonth.Size = new Size(225, 27);
            textBoxMonth.TabIndex = 3;
            // 
            // textBoxYear
            // 
            textBoxYear.Location = new Point(581, 168);
            textBoxYear.Name = "textBoxYear";
            textBoxYear.Size = new Size(225, 27);
            textBoxYear.TabIndex = 4;
            // 
            // textBoxWeight
            // 
            textBoxWeight.Location = new Point(581, 224);
            textBoxWeight.Name = "textBoxWeight";
            textBoxWeight.Size = new Size(225, 27);
            textBoxWeight.TabIndex = 5;
            // 
            // labelName
            // 
            labelName.AutoSize = true;
            labelName.Location = new Point(423, 51);
            labelName.Name = "labelName";
            labelName.Size = new Size(39, 20);
            labelName.TabIndex = 8;
            labelName.Text = "Имя";
            // 
            // labelMonth
            // 
            labelMonth.AutoSize = true;
            labelMonth.Location = new Point(423, 105);
            labelMonth.Name = "labelMonth";
            labelMonth.Size = new Size(129, 20);
            labelMonth.TabIndex = 9;
            labelMonth.Text = "Месяц рождения";
            // 
            // labelYear
            // 
            labelYear.AutoSize = true;
            labelYear.Location = new Point(423, 168);
            labelYear.Name = "labelYear";
            labelYear.Size = new Size(108, 20);
            labelYear.TabIndex = 10;
            labelYear.Text = "Год рождения";
            // 
            // labelWeight
            // 
            labelWeight.AutoSize = true;
            labelWeight.Location = new Point(423, 224);
            labelWeight.Name = "labelWeight";
            labelWeight.Size = new Size(53, 20);
            labelWeight.TabIndex = 11;
            labelWeight.Text = "Вес, кг";
            // 
            // labelPredator
            // 
            labelPredator.AutoSize = true;
            labelPredator.Location = new Point(423, 279);
            labelPredator.Name = "labelPredator";
            labelPredator.Size = new Size(71, 20);
            labelPredator.TabIndex = 12;
            labelPredator.Text = "Хищник?";
            // 
            // labelFly
            // 
            labelFly.AutoSize = true;
            labelFly.Location = new Point(423, 337);
            labelFly.Name = "labelFly";
            labelFly.Size = new Size(106, 20);
            labelFly.TabIndex = 13;
            labelFly.Text = "Умеет летать?";
            // 
            // buttonAdd
            // 
            buttonAdd.Location = new Point(642, 397);
            buttonAdd.Name = "buttonAdd";
            buttonAdd.Size = new Size(94, 29);
            buttonAdd.TabIndex = 14;
            buttonAdd.Text = "Добавить";
            buttonAdd.UseVisualStyleBackColor = true;
            buttonAdd.Click += buttonAdd_Click;
            // 
            // buttonEdit
            // 
            buttonEdit.Location = new Point(628, 448);
            buttonEdit.Name = "buttonEdit";
            buttonEdit.Size = new Size(124, 29);
            buttonEdit.TabIndex = 15;
            buttonEdit.Text = "Редактировать";
            buttonEdit.UseVisualStyleBackColor = true;
            buttonEdit.Click += buttonEdit_Click;
            // 
            // buttonDelete
            // 
            buttonDelete.Location = new Point(642, 502);
            buttonDelete.Name = "buttonDelete";
            buttonDelete.Size = new Size(94, 29);
            buttonDelete.TabIndex = 16;
            buttonDelete.Text = "Удалить";
            buttonDelete.UseVisualStyleBackColor = true;
            buttonDelete.Click += buttonDelete_Click;
            // 
            // checkBoxPredator
            // 
            checkBoxPredator.AutoSize = true;
            checkBoxPredator.Location = new Point(642, 279);
            checkBoxPredator.Name = "checkBoxPredator";
            checkBoxPredator.Size = new Size(47, 24);
            checkBoxPredator.TabIndex = 17;
            checkBoxPredator.Text = "да";
            checkBoxPredator.UseVisualStyleBackColor = true;
            // 
            // checkBoxCanFly
            // 
            checkBoxCanFly.AutoSize = true;
            checkBoxCanFly.Location = new Point(642, 340);
            checkBoxCanFly.Name = "checkBoxCanFly";
            checkBoxCanFly.Size = new Size(47, 24);
            checkBoxCanFly.TabIndex = 18;
            checkBoxCanFly.Text = "да";
            checkBoxCanFly.UseVisualStyleBackColor = true;
            // 
            // checkBoxIsBird
            // 
            checkBoxIsBird.AutoSize = true;
            checkBoxIsBird.Location = new Point(495, 384);
            checkBoxIsBird.Name = "checkBoxIsBird";
            checkBoxIsBird.Size = new Size(47, 24);
            checkBoxIsBird.TabIndex = 19;
            checkBoxIsBird.Text = "да";
            checkBoxIsBird.UseVisualStyleBackColor = true;
            checkBoxIsBird.CheckedChanged += checkBoxIsBird_CheckedChanged;
            // 
            // labelIsBird
            // 
            labelIsBird.AutoSize = true;
            labelIsBird.Location = new Point(423, 384);
            labelIsBird.Name = "labelIsBird";
            labelIsBird.Size = new Size(52, 20);
            labelIsBird.TabIndex = 20;
            labelIsBird.Text = "Птица";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(887, 614);
            Controls.Add(labelIsBird);
            Controls.Add(checkBoxIsBird);
            Controls.Add(checkBoxCanFly);
            Controls.Add(checkBoxPredator);
            Controls.Add(buttonDelete);
            Controls.Add(buttonEdit);
            Controls.Add(buttonAdd);
            Controls.Add(labelFly);
            Controls.Add(labelPredator);
            Controls.Add(labelWeight);
            Controls.Add(labelYear);
            Controls.Add(labelMonth);
            Controls.Add(labelName);
            Controls.Add(textBoxWeight);
            Controls.Add(textBoxYear);
            Controls.Add(textBoxMonth);
            Controls.Add(textBoxName);
            Controls.Add(listBox);
            Controls.Add(menuStrip1);
            MainMenuStrip = menuStrip1;
            Name = "Form1";
            Text = "Лаб6 Котков";
            menuStrip1.ResumeLayout(false);
            menuStrip1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private MenuStrip menuStrip1;
        private ToolStripMenuItem файлToolStripMenuItem;
        private ToolStripMenuItem Open_file;
        private ListBox listBox;
        private TextBox textBoxName;
        private TextBox textBoxMonth;
        private TextBox textBoxYear;
        private TextBox textBoxWeight;
        private Label labelName;
        private Label labelMonth;
        private Label labelYear;
        private Label labelWeight;
        private Label labelPredator;
        private Label labelFly;
        private Button buttonAdd;
        private Button buttonEdit;
        private Button buttonDelete;
        private CheckBox checkBoxPredator;
        private CheckBox checkBoxCanFly;
        private ToolStripMenuItem SaveMenu;
        private CheckBox checkBoxIsBird;
        private Label labelIsBird;
    }
}

namespace Images
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.btnAdd = new System.Windows.Forms.Button();
            this.btnShow = new System.Windows.Forms.Button();
            this.RBlist = new System.Windows.Forms.RadioButton();
            this.RBDetails = new System.Windows.Forms.RadioButton();
            this.RBLargeIcon = new System.Windows.Forms.RadioButton();
            this.LBSmall = new System.Windows.Forms.RadioButton();
            this.RBtile = new System.Windows.Forms.RadioButton();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btnOK = new System.Windows.Forms.Button();
            this.TName = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.Price = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.Speed = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.Country = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.Producer = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // btnAdd
            // 
            this.btnAdd.Location = new System.Drawing.Point(69, 280);
            this.btnAdd.Name = "btnAdd";
            this.btnAdd.Size = new System.Drawing.Size(295, 23);
            this.btnAdd.TabIndex = 0;
            this.btnAdd.Text = "Add new subject";
            this.btnAdd.UseVisualStyleBackColor = true;
            this.btnAdd.Click += new System.EventHandler(this.btnAdd_Click);
            // 
            // btnShow
            // 
            this.btnShow.Location = new System.Drawing.Point(69, 309);
            this.btnShow.Name = "btnShow";
            this.btnShow.Size = new System.Drawing.Size(294, 23);
            this.btnShow.TabIndex = 1;
            this.btnShow.Text = "Show";
            this.btnShow.UseVisualStyleBackColor = true;
            this.btnShow.Click += new System.EventHandler(this.btnShow_Click);
            // 
            // RBlist
            // 
            this.RBlist.AutoSize = true;
            this.RBlist.Checked = true;
            this.RBlist.Location = new System.Drawing.Point(70, 348);
            this.RBlist.Name = "RBlist";
            this.RBlist.Size = new System.Drawing.Size(41, 17);
            this.RBlist.TabIndex = 2;
            this.RBlist.TabStop = true;
            this.RBlist.Text = "List";
            this.RBlist.UseVisualStyleBackColor = true;
            this.RBlist.CheckedChanged += new System.EventHandler(this.RBlist_CheckedChanged);
            // 
            // RBDetails
            // 
            this.RBDetails.AutoSize = true;
            this.RBDetails.Location = new System.Drawing.Point(290, 348);
            this.RBDetails.Name = "RBDetails";
            this.RBDetails.Size = new System.Drawing.Size(57, 17);
            this.RBDetails.TabIndex = 3;
            this.RBDetails.Text = "Details";
            this.RBDetails.UseVisualStyleBackColor = true;
            this.RBDetails.CheckedChanged += new System.EventHandler(this.RBlist_CheckedChanged);
            // 
            // RBLargeIcon
            // 
            this.RBLargeIcon.AutoSize = true;
            this.RBLargeIcon.Location = new System.Drawing.Point(161, 370);
            this.RBLargeIcon.Name = "RBLargeIcon";
            this.RBLargeIcon.Size = new System.Drawing.Size(73, 17);
            this.RBLargeIcon.TabIndex = 4;
            this.RBLargeIcon.Text = "LargeIcon";
            this.RBLargeIcon.UseVisualStyleBackColor = true;
            this.RBLargeIcon.CheckedChanged += new System.EventHandler(this.RBlist_CheckedChanged);
            // 
            // LBSmall
            // 
            this.LBSmall.AutoSize = true;
            this.LBSmall.Location = new System.Drawing.Point(290, 387);
            this.LBSmall.Name = "LBSmall";
            this.LBSmall.Size = new System.Drawing.Size(71, 17);
            this.LBSmall.TabIndex = 5;
            this.LBSmall.Text = "SmallIcon";
            this.LBSmall.UseVisualStyleBackColor = true;
            this.LBSmall.CheckedChanged += new System.EventHandler(this.RBlist_CheckedChanged);
            // 
            // RBtile
            // 
            this.RBtile.AutoSize = true;
            this.RBtile.Location = new System.Drawing.Point(69, 387);
            this.RBtile.Name = "RBtile";
            this.RBtile.Size = new System.Drawing.Size(42, 17);
            this.RBtile.TabIndex = 6;
            this.RBtile.Text = "Tile";
            this.RBtile.UseVisualStyleBackColor = true;
            this.RBtile.CheckedChanged += new System.EventHandler(this.RBlist_CheckedChanged);
            // 
            // groupBox1
            // 
            this.groupBox1.BackColor = System.Drawing.SystemColors.MenuHighlight;
            this.groupBox1.Controls.Add(this.btnOK);
            this.groupBox1.Controls.Add(this.TName);
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.Price);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.Speed);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.Country);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.Producer);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.pictureBox1);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(720, 20);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(250, 290);
            this.groupBox1.TabIndex = 7;
            this.groupBox1.TabStop = false;
            // 
            // btnOK
            // 
            this.btnOK.Location = new System.Drawing.Point(153, 228);
            this.btnOK.Name = "btnOK";
            this.btnOK.Size = new System.Drawing.Size(75, 23);
            this.btnOK.TabIndex = 11;
            this.btnOK.Text = "ОК";
            this.btnOK.UseVisualStyleBackColor = true;
            this.btnOK.Click += new System.EventHandler(this.btnOK_Click);
            // 
            // TName
            // 
            this.TName.Location = new System.Drawing.Point(115, 36);
            this.TName.Name = "TName";
            this.TName.Size = new System.Drawing.Size(100, 20);
            this.TName.TabIndex = 10;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.BackColor = System.Drawing.SystemColors.Menu;
            this.label6.Location = new System.Drawing.Point(115, 20);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(39, 13);
            this.label6.TabIndex = 9;
            this.label6.Text = "Назва";
            // 
            // Price
            // 
            this.Price.Location = new System.Drawing.Point(13, 232);
            this.Price.Name = "Price";
            this.Price.Size = new System.Drawing.Size(100, 20);
            this.Price.TabIndex = 8;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.BackColor = System.Drawing.SystemColors.Menu;
            this.label5.Location = new System.Drawing.Point(13, 216);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(29, 13);
            this.label5.TabIndex = 7;
            this.label5.Text = "Ціна";
            // 
            // Speed
            // 
            this.Speed.Location = new System.Drawing.Point(13, 189);
            this.Speed.Name = "Speed";
            this.Speed.Size = new System.Drawing.Size(100, 20);
            this.Speed.TabIndex = 6;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.BackColor = System.Drawing.SystemColors.Menu;
            this.label4.Location = new System.Drawing.Point(13, 173);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(132, 13);
            this.label4.TabIndex = 5;
            this.label4.Text = "Максимальна швидкість";
            // 
            // Country
            // 
            this.Country.Location = new System.Drawing.Point(13, 150);
            this.Country.Name = "Country";
            this.Country.Size = new System.Drawing.Size(100, 20);
            this.Country.TabIndex = 4;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.SystemColors.Menu;
            this.label3.Location = new System.Drawing.Point(13, 134);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(114, 13);
            this.label3.TabIndex = 3;
            this.label3.Text = "Країна виготовлення";
            // 
            // Producer
            // 
            this.Producer.Location = new System.Drawing.Point(13, 108);
            this.Producer.Name = "Producer";
            this.Producer.Size = new System.Drawing.Size(100, 20);
            this.Producer.TabIndex = 2;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.SystemColors.Menu;
            this.label2.Location = new System.Drawing.Point(13, 92);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(56, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Виробник";
            // 
            // pictureBox1
            // 
            this.pictureBox1.BackColor = System.Drawing.SystemColors.Info;
            this.pictureBox1.Location = new System.Drawing.Point(13, 19);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(96, 66);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.SystemColors.ButtonShadow;
            this.label1.Location = new System.Drawing.Point(10, 10);
            this.label1.MinimumSize = new System.Drawing.Size(230, 270);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(230, 270);
            this.label1.TabIndex = 0;
            // 
            // timer1
            // 
            this.timer1.Interval = 1;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(430, 416);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.RBtile);
            this.Controls.Add(this.LBSmall);
            this.Controls.Add(this.RBLargeIcon);
            this.Controls.Add(this.RBDetails);
            this.Controls.Add(this.RBlist);
            this.Controls.Add(this.btnShow);
            this.Controls.Add(this.btnAdd);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnAdd;
        private System.Windows.Forms.Button btnShow;
        private System.Windows.Forms.RadioButton RBlist;
        private System.Windows.Forms.RadioButton RBDetails;
        private System.Windows.Forms.RadioButton RBLargeIcon;
        private System.Windows.Forms.RadioButton LBSmall;
        private System.Windows.Forms.RadioButton RBtile;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.TextBox TName;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox Price;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox Speed;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox Country;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox Producer;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btnOK;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
    }
}


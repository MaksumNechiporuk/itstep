namespace ENGLISH
{
    partial class ShowDictionary
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
            this.ENGword = new System.Windows.Forms.ListBox();
            this.UKRword = new System.Windows.Forms.ListBox();
            this.FindButton = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // ENGword
            // 
            this.ENGword.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.ENGword.FormattingEnabled = true;
            this.ENGword.ItemHeight = 24;
            this.ENGword.Location = new System.Drawing.Point(51, 84);
            this.ENGword.Name = "ENGword";
            this.ENGword.Size = new System.Drawing.Size(331, 436);
            this.ENGword.TabIndex = 0;
            this.ENGword.SelectedIndexChanged += new System.EventHandler(this.ENGword_SelectedIndexChanged);
            // 
            // UKRword
            // 
            this.UKRword.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.UKRword.FormattingEnabled = true;
            this.UKRword.ItemHeight = 24;
            this.UKRword.Location = new System.Drawing.Point(479, 84);
            this.UKRword.Name = "UKRword";
            this.UKRword.Size = new System.Drawing.Size(331, 436);
            this.UKRword.TabIndex = 1;
            // 
            // FindButton
            // 
            this.FindButton.Location = new System.Drawing.Point(855, 462);
            this.FindButton.Name = "FindButton";
            this.FindButton.Size = new System.Drawing.Size(150, 58);
            this.FindButton.TabIndex = 2;
            this.FindButton.Text = "Find";
            this.FindButton.UseVisualStyleBackColor = true;
            this.FindButton.Visible = false;
            this.FindButton.Click += new System.EventHandler(this.FindButton_Click);
            // 
            // textBox1
            // 
            this.textBox1.BackColor = System.Drawing.SystemColors.Window;
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBox1.Location = new System.Drawing.Point(855, 401);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(150, 20);
            this.textBox1.TabIndex = 4;
            this.textBox1.TextChanged += new System.EventHandler(this.FindButton_Click);
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Items.AddRange(new object[] {
            "English",
            "Ukrainian"});
            this.comboBox1.Location = new System.Drawing.Point(855, 333);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(150, 21);
            this.comboBox1.TabIndex = 5;
            this.comboBox1.Text = "English";
            this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            // 
            // ShowDictionary
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1017, 551);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.FindButton);
            this.Controls.Add(this.UKRword);
            this.Controls.Add(this.ENGword);
            this.Name = "ShowDictionary";
            this.Text = "ShowDictionary";
            this.Load += new System.EventHandler(this.ShowDictionary_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ListBox ENGword;
        private System.Windows.Forms.ListBox UKRword;
        private System.Windows.Forms.Button FindButton;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.ComboBox comboBox1;
    }
}
﻿namespace ENGLISH
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
            this.OpenD = new System.Windows.Forms.Button();
            this.OpenStudy = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // OpenD
            // 
            this.OpenD.Location = new System.Drawing.Point(81, 96);
            this.OpenD.Name = "OpenD";
            this.OpenD.Size = new System.Drawing.Size(162, 76);
            this.OpenD.TabIndex = 0;
            this.OpenD.Text = "Open dictionary";
            this.OpenD.UseVisualStyleBackColor = true;
            this.OpenD.Click += new System.EventHandler(this.OpenD_Click);
            // 
            // OpenStudy
            // 
            this.OpenStudy.Location = new System.Drawing.Point(81, 235);
            this.OpenStudy.Name = "OpenStudy";
            this.OpenStudy.Size = new System.Drawing.Size(162, 76);
            this.OpenStudy.TabIndex = 1;
            this.OpenStudy.Text = "Study";
            this.OpenStudy.UseVisualStyleBackColor = true;
            this.OpenStudy.Click += new System.EventHandler(this.OpenStudy_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1040, 632);
            this.Controls.Add(this.OpenStudy);
            this.Controls.Add(this.OpenD);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button OpenD;
        private System.Windows.Forms.Button OpenStudy;
    }
}


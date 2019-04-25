using System;
using System.Drawing;
using System.IO;
using System.Windows.Forms;

namespace Images
{
    public partial class Form1 : Form
    {
        int imgPos = -1;
        int location = 700;
        ListView lv;
        Image Images;
        ImageList ImageList;
        string path;
        public Form1()
        {
            InitializeComponent();
            lv = new ListView();
            ImageList = new ImageList();
            lv.GridLines = true;
            lv.FullRowSelect = true;
            lv.LargeImageList = ImageList;
            lv.SmallImageList = ImageList;
            btnAdd.Enabled = false;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string fullPathToExe = System.IO.Path.Combine(System.IO.Directory.GetCurrentDirectory());
            string imgDir = Path.Combine(Directory.GetParent(fullPathToExe).Parent.Parent.FullName, @"img\");
            path = imgDir;
        }

        private void btnShow_Click(object sender, EventArgs e)
        {
            lv.Location = new Point(10, 20);
            lv.Width = 405;
            lv.Height = 260;
            lv.Columns.Add("Name", 80);
            lv.Columns.Add("Price", 80);
            lv.Columns.Add("Speed", 80);
            lv.Columns.Add("Country", 80);
            lv.Columns.Add("Producer", 80);
            Controls.Add(lv);
            lv.View = View.List;
            lv.MouseClick += Lv_MouseClick;
            btnAdd.Enabled = true;
        }

        private void Lv_MouseClick(object sender, MouseEventArgs e)
        {
            ListViewItem sel = lv.SelectedItems[0];
            if (e.Button == MouseButtons.Right)
            {
                DialogResult dialogResult = MessageBox.Show("Видалити цей елемент?", "Видалення",MessageBoxButtons.YesNo);
                if (dialogResult == DialogResult.Yes)
                {
                lv.Items.Remove(sel);                                                                                               
                }
            }
          
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            this.Width = 700;
            timer1.Start();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            location -= 5;
            groupBox1.Location=new Point(location, 15);
            if (location < 430) timer1.Stop();
        }

        private void RBlist_CheckedChanged(object sender, EventArgs e)
        {
            RadioButton btn = (RadioButton)sender;
            switch(btn.Text)
            {
                case "List":
                    lv.View = View.List;

                    break;
                case "SmallIcon":
                    lv.View = View.SmallIcon;

                    break;
                case "Tile":
                    lv.View = View.Tile;

                    break;
                case "LargeIcon":
                    lv.View = View.LargeIcon;

                    break;

                case "Details":
                    lv.View = View.Details;

                    break;
            }
        }

     
        private void btnOK_Click(object sender, EventArgs e)
        {
            if ( pictureBox1.Image!=null &&TName.Text != "" && Price.Text != "" && Speed.Text != "" && Producer.Text != "" && Country.Text != "")
            {
                ListViewItem item = new ListViewItem(TName.Text);
                item.SubItems.Add(Price.Text);
                item.SubItems.Add(Speed.Text);
                item.SubItems.Add(Producer.Text);
                item.SubItems.Add(Country.Text);
                item.ImageIndex = imgPos;
                lv.Items.Add(item);
                pictureBox1.Image = null;
                TName.Clear();
                Price.Clear();
                Speed.Clear();
                Country.Clear();
                Producer.Clear();
            }
            else
                MessageBox.Show("Заповніть всі поля");
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            openFileDialog1.InitialDirectory = path;
            if(openFileDialog1.ShowDialog()==DialogResult.OK)
            {
                Images =new Bitmap(openFileDialog1.FileName);
                pictureBox1.Image = Images;
                ImageList.Images.Add(Images);          
                imgPos++;
            }
        }
    }
}

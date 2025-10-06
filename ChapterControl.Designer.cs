namespace SimpleWritingProgram
{
    partial class ChapterControl
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

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(ChapterControl));
            this.textToolStrip = new System.Windows.Forms.ToolStrip();
            this.toolStripButton1 = new System.Windows.Forms.ToolStripButton();
            this.leadingButton = new System.Windows.Forms.ToolStripDropDownButton();
            this.leadingOne = new System.Windows.Forms.ToolStripMenuItem();
            this.leadingTwo = new System.Windows.Forms.ToolStripMenuItem();
            this.leadingThree = new System.Windows.Forms.ToolStripMenuItem();
            this.textBox = new SimpleWritingProgram.ChapterTextBox();
            this.textToolStrip.SuspendLayout();
            this.SuspendLayout();
            // 
            // textToolStrip
            // 
            this.textToolStrip.AutoSize = false;
            this.textToolStrip.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.textToolStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripButton1,
            this.leadingButton});
            this.textToolStrip.Location = new System.Drawing.Point(10, 3);
            this.textToolStrip.Name = "textToolStrip";
            this.textToolStrip.Size = new System.Drawing.Size(130, 31);
            this.textToolStrip.TabIndex = 0;
            this.textToolStrip.Text = "toolStrip1";
            // 
            // toolStripButton1
            // 
            this.toolStripButton1.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.toolStripButton1.Image = ((System.Drawing.Image)(resources.GetObject("toolStripButton1.Image")));
            this.toolStripButton1.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripButton1.Name = "toolStripButton1";
            this.toolStripButton1.Size = new System.Drawing.Size(84, 28);
            this.toolStripButton1.Text = "fontButton";
            // 
            // leadingButton
            // 
            this.leadingButton.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.leadingButton.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.leadingOne,
            this.leadingTwo,
            this.leadingThree});
            this.leadingButton.Image = ((System.Drawing.Image)(resources.GetObject("leadingButton.Image")));
            this.leadingButton.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.leadingButton.Name = "leadingButton";
            this.leadingButton.Size = new System.Drawing.Size(117, 24);
            this.leadingButton.Text = "leadingButton";
            // 
            // leadingOne
            // 
            this.leadingOne.Name = "leadingOne";
            this.leadingOne.Size = new System.Drawing.Size(224, 26);
            this.leadingOne.Text = "1.0";
            this.leadingOne.Click += new System.EventHandler(this.leadingOne_Click);
            // 
            // leadingTwo
            // 
            this.leadingTwo.Name = "leadingTwo";
            this.leadingTwo.Size = new System.Drawing.Size(224, 26);
            this.leadingTwo.Text = "1.5";
            this.leadingTwo.Click += new System.EventHandler(this.leadingTwo_Click);
            // 
            // leadingThree
            // 
            this.leadingThree.Name = "leadingThree";
            this.leadingThree.Size = new System.Drawing.Size(224, 26);
            this.leadingThree.Text = "2.0";
            this.leadingThree.Click += new System.EventHandler(this.leadingThree_Click);
            // 
            // textBox
            // 
            this.textBox.AcceptsTab = true;
            this.textBox.Dock = System.Windows.Forms.DockStyle.Fill;
            this.textBox.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox.Location = new System.Drawing.Point(10, 34);
            this.textBox.Name = "textBox";
            this.textBox.Size = new System.Drawing.Size(130, 106);
            this.textBox.TabIndex = 1;
            this.textBox.Text = "";
            // 
            // ChapterControl
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.textBox);
            this.Controls.Add(this.textToolStrip);
            this.Name = "ChapterControl";
            this.Padding = new System.Windows.Forms.Padding(10, 3, 10, 10);
            this.textToolStrip.ResumeLayout(false);
            this.textToolStrip.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ToolStrip textToolStrip;
        private System.Windows.Forms.ToolStripButton toolStripButton1;
        private ChapterTextBox textBox;
        private System.Windows.Forms.ToolStripDropDownButton leadingButton;
        private System.Windows.Forms.ToolStripMenuItem leadingOne;
        private System.Windows.Forms.ToolStripMenuItem leadingTwo;
        private System.Windows.Forms.ToolStripMenuItem leadingThree;
    }
}

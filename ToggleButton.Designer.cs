namespace ToggleButton
{
    partial class ToggleButton
    {
        /// <summary>
        /// Erforderliche Designervariable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Verwendete Ressourcen bereinigen.
        /// </summary>
        /// <param name="disposing">True, wenn verwaltete Ressourcen gelöscht werden sollen; andernfalls False.</param>
        protected override void Dispose(bool disposing){
            if (disposing && (components != null)){
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Vom Komponenten-Designer generierter Code

        /// <summary>
        /// Erforderliche Methode für die Designerunterstützung. 
        /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
        /// </summary>
        private void InitializeComponent(){
            this.components = new System.ComponentModel.Container();
            this.shapeContainer1 = new Microsoft.VisualBasic.PowerPacks.ShapeContainer();
            this.btnSlide = new Microsoft.VisualBasic.PowerPacks.RectangleShape();
            this.btnToggle = new Microsoft.VisualBasic.PowerPacks.RectangleShape();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.timer2 = new System.Windows.Forms.Timer(this.components);
            this.SuspendLayout();
            // 
            // shapeContainer1
            // 
            this.shapeContainer1.Location = new System.Drawing.Point(0, 0);
            this.shapeContainer1.Margin = new System.Windows.Forms.Padding(0);
            this.shapeContainer1.Name = "shapeContainer1";
            this.shapeContainer1.Shapes.AddRange(new Microsoft.VisualBasic.PowerPacks.Shape[] {
            this.btnSlide,
            this.btnToggle});
            this.shapeContainer1.Size = new System.Drawing.Size(85, 29);
            this.shapeContainer1.TabIndex = 0;
            this.shapeContainer1.TabStop = false;
            // 
            // btnSlide
            // 
            this.btnSlide.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(84)))), ((int)(((byte)(84)))), ((int)(((byte)(86)))));
            this.btnSlide.BackStyle = Microsoft.VisualBasic.PowerPacks.BackStyle.Opaque;
            this.btnSlide.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(84)))), ((int)(((byte)(84)))), ((int)(((byte)(86)))));
            this.btnSlide.CornerRadius = 12;
            this.btnSlide.FillGradientColor = System.Drawing.Color.Chartreuse;
            this.btnSlide.Location = new System.Drawing.Point(4, 2);
            this.btnSlide.Name = "btnSlide";
            this.btnSlide.Size = new System.Drawing.Size(38, 24);
            this.btnSlide.Click += new System.EventHandler(this.BtnSlide_Click);
            // 
            // btnToggle
            // 
            this.btnToggle.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(52)))), ((int)(((byte)(50)))), ((int)(((byte)(53)))));
            this.btnToggle.BackStyle = Microsoft.VisualBasic.PowerPacks.BackStyle.Opaque;
            this.btnToggle.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(52)))), ((int)(((byte)(50)))), ((int)(((byte)(53)))));
            this.btnToggle.CornerRadius = 14;
            this.btnToggle.Enabled = false;
            this.btnToggle.FillGradientColor = System.Drawing.Color.LawnGreen;
            this.btnToggle.Location = new System.Drawing.Point(0, 0);
            this.btnToggle.Name = "btnToggle";
            this.btnToggle.Size = new System.Drawing.Size(84, 28);
            // 
            // timer1
            // 
            this.timer1.Interval = 5;
            this.timer1.Tick += new System.EventHandler(this.Timer1_Tick);
            // 
            // timer2
            // 
            this.timer2.Interval = 5;
            this.timer2.Tick += new System.EventHandler(this.Timer2_Tick);
            // 
            // ToggleButton
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Transparent;
            this.Controls.Add(this.shapeContainer1);
            this.Name = "ToggleButton";
            this.Size = new System.Drawing.Size(85, 29);
            this.ResumeLayout(false);

        }

        #endregion

        private Microsoft.VisualBasic.PowerPacks.ShapeContainer shapeContainer1;
        private Microsoft.VisualBasic.PowerPacks.RectangleShape btnToggle;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Timer timer2;
        private Microsoft.VisualBasic.PowerPacks.RectangleShape btnSlide;
    }
}

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ToggleButton
{
    public partial class ToggleButton: UserControl{
        private int durationWidth     = 60 / 160;
        private int durationHeight    = 60 / 70;

        public ToggleButton(){
            InitializeComponent();
        }
        /** Default Settings **/
        public System.Drawing.Size ButtonSize {
            get {
                return this.Size;
            }
            set
            {
                this.Size       = value;
                this.shapeContainer1.Size = value;
                btnToggle.Size  = value;

                int tmpWidth = (btnToggle.Width * this.durationWidth);
                int tmpHeight = (btnToggle.Height * this.durationHeight);

                btnSlide.Width = tmpWidth;
                btnSlide.Height = tmpHeight;
            }
        }
        /** Toggle Settings **/
        public Color MainBackColor{
            // Retrieves the value of the private variable mainBackColor.
            get{
                return btnToggle.BackColor;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set{
                btnToggle.BackColor = value;
            }
        }
        public Color MainBorderColor
        {
            // Retrieves the value of the private variable mainBackColor.
            get{
                return btnToggle.BorderColor;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set{
                btnToggle.BorderColor = value;
            }
        }
        public int MainBorderWidth
        {
            // Retrieves the value of the private variable mainBackColor.
            get{
                return btnToggle.BorderWidth;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set{
                btnToggle.BorderWidth = value;
            }
        }
        public int MainCornerRadius
        {
            // Retrieves the value of the private variable mainBackColor.
            get{
                return btnToggle.CornerRadius;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set{
                btnToggle.CornerRadius = value;
            }
        }
        public Microsoft.VisualBasic.PowerPacks.BackStyle MainBackStyle
        {
            // Retrieves the value of the private variable mainBackColor.
            get{
                return btnToggle.BackStyle;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set{
                btnToggle.BackStyle = value;
            }
        }
        public System.Drawing.Drawing2D.DashStyle MainBorderStyle
        {
            // Retrieves the value of the private variable mainBackColor.
            get
            {
                return btnToggle.BorderStyle;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set
            {
                btnToggle.BorderStyle = value;
            }
        }
        /** Slide Settings **/
        public Color SlideBackColor
        {
            // Retrieves the value of the private variable mainBackColor.
            get
            {
                return btnSlide.BackColor;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set
            {
                btnSlide.BackColor = value;
            }
        }
        public Color SlideBorderColor
        {
            // Retrieves the value of the private variable mainBackColor.
            get
            {
                return btnSlide.BorderColor;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set
            {
                btnSlide.BorderColor = value;
            }
        }
        public int SlideBorderWidth
        {
            // Retrieves the value of the private variable mainBackColor.
            get
            {
                return btnSlide.BorderWidth;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set
            {
                btnSlide.BorderWidth = value;
            }
        }
        public int SlideCornerRadius
        {
            // Retrieves the value of the private variable mainBackColor.
            get
            {
                return btnSlide.CornerRadius;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set
            {
                btnSlide.CornerRadius = value;
            }
        }
        public System.Drawing.Drawing2D.DashStyle SlideBorderStyle
        {
            // Retrieves the value of the private variable mainBackColor.
            get
            {
                return btnSlide.BorderStyle;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set
            {
                btnSlide.BorderStyle = value;
            }
        }
        /** Timer Settings **/
        public int Interval
        {
            // Retrieves the value of the private variable mainBackColor.
            get
            {
                return timer1.Interval;
            }
            // Stores the selected value in the private variable mainBackColor, and
            // updates the background color of the button control btnToggle.
            set
            {
                timer1.Interval = value;
                timer2.Interval = value;
            }
        }

        private void BtnSlide_Click(object sender, EventArgs e){
            if (this.btnSlide.Left <= 4){
                timer1.Start();
            }

            if (this.btnSlide.Left >= 42){
                timer2.Start();
            }
        }
        private void Timer1_Tick(object sender, EventArgs e){
            this.btnSlide.Left += 5;
            if (this.btnSlide.Left >= 42){
                timer1.Stop();
            }
        }
        private void Timer2_Tick(object sender, EventArgs e){
            this.btnSlide.Left -= 5;
            if (this.btnSlide.Left <= 4){
                timer2.Stop();
            }
        }
    }
}
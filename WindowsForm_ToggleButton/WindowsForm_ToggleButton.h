#pragma once

namespace WindowsFormToggleButton {
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class ToggleButton {
	public:
		ToggleButton();
	private :
		void InitializeComponent();

	private:
		Microsoft::VisualBasic::PowerPacks::RectangleShape^ btnToggle;

	public:
		property System::String^ Name { 
			System::String^ get() {
				return this->btnToggle->Name;
			}
			void set(System::String^ name) {
				this->btnToggle->Name = name;
			}
		}
		property System::Drawing::Point Location {
			System::Drawing::Point get() {
				return this->btnToggle->Location;
			}
			void set(System::Drawing::Point point) {

			}
		};
		property int CornerRadius {
			int get() {
				return this->btnToggle->CornerRadius;
			}
			void set(int radius) {
				this->btnToggle->CornerRadius = radius;
			}
		}
		property System::Drawing::Color BackColor {
			System::Drawing::Color get() {
				return this->btnToggle->BackColor;
			}
			void set(System::Drawing::Color color) {
				this->btnToggle->BackColor = color;
			}
		};
		property System::Drawing::Size Size {
			System::Drawing::Size get() {
				return this->btnToggle->Size;
			}
			void set(System::Drawing::Size size) {
				this->btnToggle->Size = size;
			}
		};
		property Microsoft::VisualBasic::PowerPacks::BackStyle BackStyle {
			Microsoft::VisualBasic::PowerPacks::BackStyle get() {
				return this->btnToggle->BackStyle;
			}
			void set(Microsoft::VisualBasic::PowerPacks::BackStyle backStyle) {
				this->btnToggle->BackStyle = backStyle;
			}
		};
		property System::Drawing::Color BorderColor {
			System::Drawing::Color get() {
				return this->btnToggle->BorderColor;
			}
			void set(System::Drawing::Color color) {
				this->btnToggle->BorderColor = color;
			}
		};

		// neu erstellen
		//System::Drawing::Color BackColor();
		//void BackColor(System::Drawing::Color color);
		//void BackColor(int red, int green, int blue);

		//void WindowsFormToggleButton::ToggleButton::BackStyle(Microsoft::VisualBasic::PowerPacks::BackStyle backStyle);
		//Microsoft::VisualBasic::PowerPacks::BackStyle WindowsFormToggleButton::ToggleButton::BackStyle();


		// TODO: Fügen Sie hier Ihre Methoden für diese Klasse ein.
	};
}

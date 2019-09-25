#pragma once

namespace WindowsFormToggleButton {
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class ToggleButton {
	public:
		__declspec(dllexport) ToggleButton();
	private:
		void InitializeToggle(void);
		void InitializeSlide(void);
		void InitializeTimer(void);

		Microsoft::VisualBasic::PowerPacks::RectangleShape^ btnToggle;
		Microsoft::VisualBasic::PowerPacks::OvalShape^ btnSlide;
		System::Timers::Timer^ timer1;
		System::Timers::Timer^ timer2;

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
				this->btnToggle->Location = point;
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
		property System::Drawing::Color SlideBackColor {
			System::Drawing::Color get() {
				return this->btnSlide->BackColor;
			}
			void set(System::Drawing::Color color) {
				this->btnSlide->BackColor = color;
			}
		};
		property System::Drawing::Color SlideBorderColor {
			System::Drawing::Color get() {
				return this->btnToggle->BorderColor;
			}
			void set(System::Drawing::Color color) {
				this->btnToggle->BorderColor = color;
			}
		};
		property System::Drawing::Color SlideFillColor {
			System::Drawing::Color get() {
				return this->btnToggle->FillColor;
			}
			void set(System::Drawing::Color color) {
				this->btnToggle->FillColor = color;
			}
		};
		property Microsoft::VisualBasic::PowerPacks::BackStyle SlideBackStyle {
			Microsoft::VisualBasic::PowerPacks::BackStyle get() {
				return this->btnSlide->BackStyle;
			}
			void set(Microsoft::VisualBasic::PowerPacks::BackStyle backStyle) {
				this->btnSlide->BackStyle = backStyle;
			}
		};
		property double TimerInterval {
			double get() {
				return this->timer1->Interval;
			}
			void set(double value) {
				this->timer1->Interval = value;
				this->timer2->Interval = value;
			}
		}

	private:
		property System::Drawing::Size SlideSize {
			System::Drawing::Size get() {
				return this->btnSlide->Size;
			}
			void set(System::Drawing::Size size) {
				this->btnSlide->Size = size;
			}
		};
		property System::Drawing::Point SlideLocation {
			System::Drawing::Point get() {
				return this->btnSlide->Location;
			}
			void set(System::Drawing::Point location) {
				this->btnSlide->Location = location;
			}
		};
		property System::String^ SlideName {
			System::String^ get() {
				return this->btnSlide->Name;
			}
			void set(System::String^ name) {
				this->btnSlide->Name = name;
			}
		}

		System::Void btnSlide_Click(System::Object^ sender, System::EventArgs^ e);
		//System::Void Timer1_Tick(System::Object^ sender, System::Timers::ElapsedEventArgs^ e);
		//System::Void Timer2_Tick(System::Object^ sender, System::Timers::ElapsedEventArgs^ e);
		
		property bool TimerEnabled {
			bool get() {
				return this->timer1->Enabled;
			}
			void set(bool value) {
				this->timer1->Enabled = value;
				this->timer2->Enabled = value;
			}
		}
		System::Drawing::Point calculateLocation();
	};
}

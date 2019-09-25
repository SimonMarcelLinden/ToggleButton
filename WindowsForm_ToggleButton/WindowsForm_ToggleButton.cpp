#include "pch.h"

#include "WindowsForm_ToggleButton.h"


WindowsFormToggleButton::ToggleButton::ToggleButton(){
	this->btnToggle = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
	this->btnSlide	= (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
	this->timer1	= (gcnew System::Timers::Timer());
	this->timer2	= (gcnew System::Timers::Timer());

	InitializeToggle();
	InitializeSlide();
	InitializeTimer();
}

void WindowsFormToggleButton::ToggleButton::InitializeToggle() {

	this->Location		= System::Drawing::Point(5, 5);
	this->Name			= L"btnToggle";
	this->CornerRadius  = 35;
	this->Size			= System::Drawing::Size(160, 70);
	this->BackColor		= System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
	this->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;	
	this->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));


}
void WindowsFormToggleButton::ToggleButton::InitializeSlide() {

	this->SlideSize		= System::Drawing::Size(59, 59);
	this->SlideLocation = calculateLocation();
	this->SlideName		= this->Name + L"_Slide";
	
	this->SlideBackColor	= System::Drawing::Color::White;
	this->SlideBorderColor	= System::Drawing::Color::White;
	this->SlideFillColor	= System::Drawing::Color::White;
	this->SlideBackStyle	= Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;

	this->btnSlide->Click += gcnew System::EventHandler(this, &ToggleButton::btnSlide_Click);

}
void WindowsFormToggleButton::ToggleButton::InitializeTimer() {
	this->TimerInterval = 5;
	//this->timer1->SynchronizingObject = this;
	//this->timer2->SynchronizingObject = this;
	
	//this->timer1->Tick += gcnew System::Timers::ElapsedEventHandler(this, &ToggleButton::Timer1_Tick);
	//this->timer2->Tick += gcnew System::Timers::ElapsedEventHandler(this, &ToggleButton::Timer2_Tick);

}

System::Void WindowsFormToggleButton::ToggleButton::btnSlide_Click(System::Object^ sender, System::EventArgs^ e){
	return System::Void();
}






System::Drawing::Point WindowsFormToggleButton::ToggleButton::calculateLocation() {
	System::Drawing::Point^ point = this->Location;
	int x = point->X + 11;
	int y = point->Y + 7;

	return System::Drawing::Point (x, y);
}
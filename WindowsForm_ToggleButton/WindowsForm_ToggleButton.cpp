#include "pch.h"

#include "WindowsForm_ToggleButton.h"


WindowsFormToggleButton::ToggleButton::ToggleButton(){
	this->btnToggle = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
	InitializeComponent();
}

void WindowsFormToggleButton::ToggleButton::InitializeComponent() {

	this->Location		= System::Drawing::Point(405, 72);
	this->Name			= L"btnToggle";
	this->CornerRadius  = 35;
	this->Size			= System::Drawing::Size(160, 70);
	this->BackColor		= System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
	this->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;	
	this->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));


}
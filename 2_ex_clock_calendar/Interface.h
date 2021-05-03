#pragma once

#include <msclr\marshal_cppstd.h>
#include <string>

#include "ClockCalendar.h"

ClockCalendar mywatch(1, 1, 1900, 12, 0, 00, false);

namespace aula_2_ex_clock_calendar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: bool clockState;
	private: System::Windows::Forms::Button^  setTimeButton;
	protected:

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  onButton;
	private: System::Windows::Forms::Button^  offButton;
	private: System::Windows::Forms::TextBox^  dayBox;
	private: System::Windows::Forms::TextBox^  monthBox;
	private: System::Windows::Forms::TextBox^  yearBox;
	private: System::Windows::Forms::TextBox^  hoursBox;
	private: System::Windows::Forms::TextBox^  minutesBox;
	private: System::Windows::Forms::TextBox^  secondsBox;
	private: System::Windows::Forms::TextBox^  isPMBox;










	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->setTimeButton = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->onButton = (gcnew System::Windows::Forms::Button());
			this->offButton = (gcnew System::Windows::Forms::Button());
			this->dayBox = (gcnew System::Windows::Forms::TextBox());
			this->monthBox = (gcnew System::Windows::Forms::TextBox());
			this->yearBox = (gcnew System::Windows::Forms::TextBox());
			this->hoursBox = (gcnew System::Windows::Forms::TextBox());
			this->minutesBox = (gcnew System::Windows::Forms::TextBox());
			this->secondsBox = (gcnew System::Windows::Forms::TextBox());
			this->isPMBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// setTimeButton
			// 
			this->setTimeButton->Location = System::Drawing::Point(16, 49);
			this->setTimeButton->Name = L"setTimeButton";
			this->setTimeButton->Size = System::Drawing::Size(85, 25);
			this->setTimeButton->TabIndex = 8;
			this->setTimeButton->Text = L"Ajustar";
			this->setTimeButton->UseVisualStyleBackColor = true;
			this->setTimeButton->Click += gcnew System::EventHandler(this, &Interface::adjustButton_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Interface::timer1_Tick);
			// 
			// onButton
			// 
			this->onButton->Location = System::Drawing::Point(107, 49);
			this->onButton->Name = L"onButton";
			this->onButton->Size = System::Drawing::Size(85, 25);
			this->onButton->TabIndex = 9;
			this->onButton->Text = L"Ligar";
			this->onButton->UseVisualStyleBackColor = true;
			this->onButton->Click += gcnew System::EventHandler(this, &Interface::onButton_Click);
			// 
			// offButton
			// 
			this->offButton->Location = System::Drawing::Point(198, 49);
			this->offButton->Name = L"offButton";
			this->offButton->Size = System::Drawing::Size(85, 25);
			this->offButton->TabIndex = 10;
			this->offButton->Text = L"Desligar";
			this->offButton->UseVisualStyleBackColor = true;
			this->offButton->Click += gcnew System::EventHandler(this, &Interface::offButton_Click);
			// 
			// dayBox
			// 
			this->dayBox->Location = System::Drawing::Point(11, 16);
			this->dayBox->Name = L"dayBox";
			this->dayBox->Size = System::Drawing::Size(39, 20);
			this->dayBox->TabIndex = 1;
			// 
			// monthBox
			// 
			this->monthBox->Location = System::Drawing::Point(56, 16);
			this->monthBox->Name = L"monthBox";
			this->monthBox->Size = System::Drawing::Size(39, 20);
			this->monthBox->TabIndex = 2;
			// 
			// yearBox
			// 
			this->yearBox->Location = System::Drawing::Point(101, 16);
			this->yearBox->Name = L"yearBox";
			this->yearBox->Size = System::Drawing::Size(39, 20);
			this->yearBox->TabIndex = 3;
			// 
			// hoursBox
			// 
			this->hoursBox->Location = System::Drawing::Point(159, 16);
			this->hoursBox->Name = L"hoursBox";
			this->hoursBox->Size = System::Drawing::Size(28, 20);
			this->hoursBox->TabIndex = 4;
			// 
			// minutesBox
			// 
			this->minutesBox->Location = System::Drawing::Point(193, 16);
			this->minutesBox->Name = L"minutesBox";
			this->minutesBox->Size = System::Drawing::Size(28, 20);
			this->minutesBox->TabIndex = 5;
			this->minutesBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// secondsBox
			// 
			this->secondsBox->Location = System::Drawing::Point(227, 16);
			this->secondsBox->Name = L"secondsBox";
			this->secondsBox->Size = System::Drawing::Size(28, 20);
			this->secondsBox->TabIndex = 6;
			// 
			// isPMBox
			// 
			this->isPMBox->Location = System::Drawing::Point(261, 16);
			this->isPMBox->Name = L"isPMBox";
			this->isPMBox->Size = System::Drawing::Size(28, 20);
			this->isPMBox->TabIndex = 7;
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 84);
			this->Controls->Add(this->isPMBox);
			this->Controls->Add(this->secondsBox);
			this->Controls->Add(this->minutesBox);
			this->Controls->Add(this->hoursBox);
			this->Controls->Add(this->yearBox);
			this->Controls->Add(this->monthBox);
			this->Controls->Add(this->dayBox);
			this->Controls->Add(this->offButton);
			this->Controls->Add(this->onButton);
			this->Controls->Add(this->setTimeButton);
			this->Name = L"Interface";
			this->ShowIcon = false;
			this->Text = L"Interface";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		int da, mo, ye, ho, mi, se;
		bool pm;

		mywatch.readCalendar(da, mo, ye);
		mywatch.readClock(ho, mi, se, pm);

		string stringDay, stringMonth, stringHours, stringMinutes, stringSeconds, stringYear = to_string(ye);

		if (clockState) {
			if (da <= 9) {
				stringDay = "0";
				stringDay.append(to_string(da));
			}
			else {
				stringDay = to_string(da);
			}

			if (mo <= 9) {
				stringMonth = "0";
				stringMonth.append(to_string(mo));
			}
			else {
				stringMonth = to_string(mo);
			}

			if (ho <= 9) {
				stringHours = "0";
				stringHours.append(to_string(ho));
			}
			else {
				stringHours = to_string(ho);
			}

			if (mi <= 9) {
				stringMinutes = "0";
				stringMinutes.append(to_string(mi));
			}
			else {
				stringMinutes = to_string(mi);
			}

			if (se <= 9) {
				stringSeconds = "0";
				stringSeconds.append(to_string(se));
			}
			else {
				stringSeconds = to_string(se);
			}

			dayBox->Text = gcnew String(stringDay.c_str());
			monthBox->Text = gcnew String(stringMonth.c_str());
			yearBox->Text = gcnew String(stringYear.c_str());
			hoursBox->Text = gcnew String(stringHours.c_str());
			minutesBox->Text = gcnew String(stringMinutes.c_str());
			secondsBox->Text = gcnew String(stringSeconds.c_str());
			isPMBox->Text = pm ? "PM" : "AM";
			
			mywatch.advance();

		}

	}

	private: System::Void adjustButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
		int day, month, year, hours, minutes, seconds;
		bool isPM;

		day = stoi(msclr::interop::marshal_as<std::string>(dayBox->Text));
		month = stoi(msclr::interop::marshal_as<std::string>(monthBox->Text));
		year = stoi(msclr::interop::marshal_as<std::string>(yearBox->Text));
		hours = stoi(msclr::interop::marshal_as<std::string>(hoursBox->Text));
		minutes = stoi(msclr::interop::marshal_as<std::string>(minutesBox->Text));
		seconds = stoi(msclr::interop::marshal_as<std::string>(secondsBox->Text));

		isPM = ((msclr::interop::marshal_as<std::string>(secondsBox->Text)) == "PM") ? true : false;

		mywatch.setCalendar(day, month, year);
		mywatch.setClock(hours, minutes, seconds, isPM);

	}

	private: System::Void onButton_Click(System::Object^  sender, System::EventArgs^  e) {

		clockState = true;

		dayBox->ReadOnly = true;
		monthBox->ReadOnly = true;
		yearBox->ReadOnly = true;
		hoursBox->ReadOnly = true;
		minutesBox->ReadOnly = true;
		secondsBox->ReadOnly = true;
		isPMBox->ReadOnly = true;
		
	}
	
	private: System::Void offButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
		clockState = false;

		dayBox->ReadOnly = false;
		monthBox->ReadOnly = false;
		yearBox->ReadOnly = false;
		hoursBox->ReadOnly = false;
		minutesBox->ReadOnly = false;
		secondsBox->ReadOnly = false;
		isPMBox->ReadOnly = false;

	}

	private: System::Void Interface_Load(System::Object^  sender, System::EventArgs^  e) {
	
		clockState = false;

		dayBox->ReadOnly = false;
		monthBox->ReadOnly = false;
		yearBox->ReadOnly = false;
		hoursBox->ReadOnly = false;
		minutesBox->ReadOnly = false;
		secondsBox->ReadOnly = false;
		isPMBox->ReadOnly = false;

	}
};
}

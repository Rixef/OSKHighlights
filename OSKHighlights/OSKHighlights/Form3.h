#pragma once
//#include "Functions.h"

namespace OSKHighlights
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
		}

	protected:
		~Form3()
		{
			if (components)
			{delete components;}
		}
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"LMB";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(151, 0);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"RMB";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(116, 0);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"^ v";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form3::timer1_Tick);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(266, 45);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"On Screen Mouse";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		#pragma region mouse listener and spammer
		//if (GetAsyncKeyState(VK_LBUTTON) < 0)
		//{
		//	button1->BackColor = Color::Gray;
		//	/*if (f2->checkBox1->Checked == true)
		//	{
		//		togglespamkey = true;
		//		toggledkey = VK_LBUTTON;
		//		toggledkeystr = "lmb";
		//	}
		//	if (f2->checkBox2->Checked == true)
		//	{
		//		if (f2->checkBox4->Checked == true)
		//		{
		//			if (windowtosendkeypressesto == GetForegroundWindow() && f2->richTextBox1->Find("lmb") != -1)
		//			{
		//				sikey("vk", VK_LBUTTON);
		//			}
		//		}
		//		else if (f2->checkBox4->Checked == false)
		//		{
		//			if (f2->richTextBox1->Find("lmb") != -1)
		//			{
		//				sikey("vk", VK_LBUTTON);
		//			}
		//		}
		//	}*/
		//}
		//else if (GetAsyncKeyState(VK_LBUTTON) >= 0)
		//{button1->BackColor = Color::Black;}
		//if (GetAsyncKeyState(VK_RBUTTON) < 0)
		//{
		//	button2->BackColor = Color::Gray;
		//	/*if (f2->checkBox1->Checked == true)
		//	{
		//		togglespamkey = true;
		//		toggledkey = VK_LBUTTON;
		//		toggledkeystr = "lmb";
		//	}
		//	if (f2->checkBox2->Checked == true)
		//	{
		//		if (f2->checkBox4->Checked == true)
		//		{
		//			if (windowtosendkeypressesto == GetForegroundWindow() && f2->richTextBox1->Find("lmb") != -1)
		//			{
		//				sikey("vk", VK_LBUTTON);
		//			}
		//		}
		//		else if (f2->checkBox4->Checked == false)
		//		{
		//			if (f2->richTextBox1->Find("lmb") != -1)
		//			{
		//				sikey("vk", VK_LBUTTON);
		//			}
		//		}
		//	}*/
		//}
		//else if (GetAsyncKeyState(VK_RBUTTON) >= 0)
		//{button2->BackColor = Color::Black;}
		//if (GetAsyncKeyState(VK_MBUTTON) < 0)
		//{
		//	button3->BackColor = Color::Gray;
		//	/*if (f2->checkBox1->Checked == true)
		//	{
		//		togglespamkey = true;
		//		toggledkey = VK_LBUTTON;
		//		toggledkeystr = "lmb";
		//	}
		//	if (f2->checkBox2->Checked == true)
		//	{
		//		if (f2->checkBox4->Checked == true)
		//		{
		//			if (windowtosendkeypressesto == GetForegroundWindow() && f2->richTextBox1->Find("lmb") != -1)
		//			{
		//				sikey("vk", VK_LBUTTON);
		//			}
		//		}
		//		else if (f2->checkBox4->Checked == false)
		//		{
		//			if (f2->richTextBox1->Find("lmb") != -1)
		//			{
		//				sikey("vk", VK_LBUTTON);
		//			}
		//		}
		//	}*/
		//}
		//else if (GetAsyncKeyState(VK_MBUTTON) >= 0)
		//{button3->BackColor = Color::Black;}
		#pragma endregion mouse listener and spammer
	}
};
}

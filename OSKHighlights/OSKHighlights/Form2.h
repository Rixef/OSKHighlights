#pragma once

namespace OSKHighlights
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			this->ClientSize = System::Drawing::Size(545, 323);
		}

	protected:
		~Form2()
		{
			if (components)
			{delete components;}
		}
	public: System::Windows::Forms::CheckBox^ checkBox1;
	public: System::Windows::Forms::CheckBox^ checkBox2;
	public: System::Windows::Forms::TrackBar^ trackBar1;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TrackBar^ trackBar2;
	public: System::Windows::Forms::Timer^ timer1;
	public: System::Windows::Forms::Button^ button105;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ textBox2;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::RichTextBox^ richTextBox1;
	public: System::Windows::Forms::CheckBox^ checkBox3;
	public: System::Windows::Forms::RichTextBox^ richTextBox2;
	public: System::Windows::Forms::CheckBox^ checkBox4;
	public: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 65);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(155, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Toggle Spam Keypress";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form2::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 88);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(142, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Hold Spam Keypress";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form2::checkBox2_CheckedChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(194, 266);
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->Value = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(194, 250);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"OSK Opacity:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(304, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"OSK Settings Opacity:";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(304, 266);
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 45);
			this->trackBar2->TabIndex = 4;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar2->Value = 9;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form2::timer1_Tick);
			// 
			// button105
			// 
			this->button105->BackColor = System::Drawing::Color::Black;
			this->button105->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button105->FlatAppearance->BorderSize = 2;
			this->button105->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button105->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button105->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button105->Location = System::Drawing::Point(511, 9);
			this->button105->Margin = System::Windows::Forms::Padding(0);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(25, 25);
			this->button105->TabIndex = 105;
			this->button105->Text = L"X";
			this->button105->UseVisualStyleBackColor = false;
			this->button105->Click += gcnew System::EventHandler(this, &Form2::button105_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(138, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(269, 26);
			this->label4->TabIndex = 107;
			this->label4->Text = L"OSK Highlights Settings";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(194, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(336, 20);
			this->textBox1->TabIndex = 108;
			this->textBox1->Text = L"Genshin Impact";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(545, 46);
			this->button1->TabIndex = 109;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(194, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(336, 20);
			this->textBox2->TabIndex = 110;
			this->textBox2->Text = L"UnityWndClass";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(194, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 13);
			this->label5->TabIndex = 111;
			this->label5->Text = L"Window Title/Text:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(194, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 13);
			this->label6->TabIndex = 112;
			this->label6->Text = L"Window Class:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 13);
			this->label7->TabIndex = 114;
			this->label7->Text = L"Spam Keys Filter:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(12, 124);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(142, 187);
			this->richTextBox1->TabIndex = 115;
			this->richTextBox1->Text = L"E\nQ";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(194, 220);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(104, 17);
			this->checkBox3->TabIndex = 116;
			this->checkBox3->Text = L"OSK TopMost";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Black;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(567, 0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(243, 311);
			this->richTextBox2->TabIndex = 117;
			this->richTextBox2->Text = L"OSKTopMostCB:\nToggleSpamKeysCB:\nHoldSpamKeysCB:\nSpecificWindowCB:\nSpecificWindowT"
				L"itle:\nSpecificWindowClass:\nOSKOpacity:\nOSKSettingsOpacity:\nSpamKeysFilter:";
			this->richTextBox2->Visible = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(194, 65);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(308, 17);
			this->checkBox4->TabIndex = 118;
			this->checkBox4->Text = L"Only spam keys when specific window is focused:";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox5.BackgroundImage")));
			this->checkBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->checkBox5->FlatAppearance->BorderSize = 0;
			this->checkBox5->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Location = System::Drawing::Point(194, 164);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(30, 30);
			this->checkBox5->TabIndex = 119;
			this->checkBox5->UseVisualStyleBackColor = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(822, 323);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button105);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form2";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"On Screen Keyboard Highlights Settings";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox1->Checked == true)
		{
			if (checkBox2->Checked == true)
			{checkBox2->Checked = false;}
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox2->Checked == true)
		{
			if (checkBox1->Checked == true)
			{checkBox1->Checked = false;}
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		#pragma region opacity tracker for the settings form
		if (trackBar2->Value == 1)
		{
			this->Opacity = 0.10;
		}
		else if (trackBar2->Value == 2)
		{
			this->Opacity = 0.20;
		}
		else if (trackBar2->Value == 3)
		{
			this->Opacity = 0.30;
		}
		else if (trackBar2->Value == 4)
		{
			this->Opacity = 0.40;
		}
		else if (trackBar2->Value == 5)
		{
			this->Opacity = 0.50;
		}
		else if (trackBar2->Value == 6)
		{
			this->Opacity = 0.60;
		}
		else if (trackBar2->Value == 7)
		{
			this->Opacity = 0.70;
		}
		else if (trackBar2->Value == 8)
		{
			this->Opacity = 0.80;
		}
		else if (trackBar2->Value == 9)
		{
			this->Opacity = 0.90;
		}
		else if (trackBar2->Value == 10)
		{
			this->Opacity = 1.0;
		}
		#pragma endregion opacity tracker for the settings form
	}
	private: System::Void button105_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
	}
};
}

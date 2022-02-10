#pragma once
namespace DeltaWye {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::TextBox^ textBox4;




	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label1->Location = System::Drawing::Point(208, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(362, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Delta to Y Transformation";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(68, 140);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(68, 209);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(68, 282);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 20);
			this->textBox3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"R12";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"R23";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"R31";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(12, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(253, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Delta branch resistors:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Small", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->Location = System::Drawing::Point(484, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Y branch resistors:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Dutch801 XBd BT", 16));
			this->button1->Location = System::Drawing::Point(310, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 64);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(492, 282);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 18);
			this->label7->TabIndex = 10;
			this->label7->Text = L"R3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(492, 209);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 18);
			this->label8->TabIndex = 11;
			this->label8->Text = L"R2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(492, 141);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 18);
			this->label9->TabIndex = 12;
			this->label9->Text = L"R1";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(525, 281);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(150, 20);
			this->textBox6->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(525, 209);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(150, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(525, 140);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(150, 20);
			this->textBox4->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label10->Location = System::Drawing::Point(226, 140);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 17);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Ohms";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label11->Location = System::Drawing::Point(226, 211);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 17);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Ohms";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label12->Location = System::Drawing::Point(226, 284);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 17);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Ohms";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label13->Location = System::Drawing::Point(678, 282);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 17);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Ohms";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label14->Location = System::Drawing::Point(678, 210);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 17);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Ohms";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label15->Location = System::Drawing::Point(678, 140);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 17);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Ohms";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(748, 346);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"Delta to Y";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ R12 = textBox1->Text;
		String^ R23 = textBox2->Text;
		String^ R13 = textBox3->Text;
		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "")
		{
			double R121 = Convert::ToDouble(R12);
			double R131 = Convert::ToDouble(R13);
			double R231 = Convert::ToDouble(R23);
			textBox4->Text = Convert::ToString((R121 * R131) / (R121 + R131 + R231));
			textBox5->Text = Convert::ToString((R121 * R231) / (R121 + R131 + R231));
			textBox6->Text = Convert::ToString((R231 * R131) / (R121 + R131 + R231));
		}
		else
		{
			MessageBox::Show("Make sure to enter a value for all 3 resistances.", "Error!");
		}
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

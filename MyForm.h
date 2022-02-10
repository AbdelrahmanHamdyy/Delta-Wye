#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
namespace DeltaWye {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 26, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline))));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(117, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(392, 43);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Delta-Wye Transformations";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 18.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(12, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(382, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"- Select the type of transformation:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Desktop;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(106, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 87);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Delta to Y";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Desktop;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18.25F));
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(364, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 87);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Y to Delta";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(624, 346);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Delta-Wye Transformation";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: MyForm1^ M1;
			MyForm2^ M2;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	M1 = gcnew MyForm1();
	M1 -> Show();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	M2 = gcnew MyForm2();
	M2->Show();
}
};
}

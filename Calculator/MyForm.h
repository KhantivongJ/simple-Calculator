#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	protected:



	protected:


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonSubtract;
	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ buttonDivide;
	private: System::Windows::Forms::Button^ buttonEquals;
	private: System::Windows::Forms::Button^ buttonClear;




	private: System::Windows::Forms::TextBox^ numDisplay;




	protected:
		char calcOp;
		long long int num1{ 0 };
		long long int num2{ 0 };
		long long int total{ 0 };
		long long int max{ 2147483647 };
		long long int min{ -2147483647 };

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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonSubtract = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->numDisplay = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(30, 61);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 0;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(86, 61);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 1;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(142, 61);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 2;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(30, 117);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(86, 117);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(142, 117);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(30, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(86, 173);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 7;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(142, 173);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 8;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->button0->Location = System::Drawing::Point(30, 229);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(50, 50);
			this->button0->TabIndex = 9;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->Location = System::Drawing::Point(198, 61);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(50, 50);
			this->buttonPlus->TabIndex = 10;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// buttonSubtract
			// 
			this->buttonSubtract->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->buttonSubtract->Location = System::Drawing::Point(198, 117);
			this->buttonSubtract->Name = L"buttonSubtract";
			this->buttonSubtract->Size = System::Drawing::Size(50, 50);
			this->buttonSubtract->TabIndex = 11;
			this->buttonSubtract->Text = L"-";
			this->buttonSubtract->UseVisualStyleBackColor = true;
			this->buttonSubtract->Click += gcnew System::EventHandler(this, &MyForm::buttonSubtract_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->buttonMultiply->Location = System::Drawing::Point(198, 173);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(50, 50);
			this->buttonMultiply->TabIndex = 12;
			this->buttonMultiply->Text = L"x";
			this->buttonMultiply->UseVisualStyleBackColor = true;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->buttonDivide->Location = System::Drawing::Point(198, 229);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(50, 50);
			this->buttonDivide->TabIndex = 13;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// buttonEquals
			// 
			this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->buttonEquals->Location = System::Drawing::Point(142, 229);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(50, 50);
			this->buttonEquals->TabIndex = 14;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = true;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &MyForm::buttonEquals_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold));
			this->buttonClear->Location = System::Drawing::Point(86, 229);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(50, 50);
			this->buttonClear->TabIndex = 15;
			this->buttonClear->Text = L"C";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// numDisplay
			// 
			this->numDisplay->Font = (gcnew System::Drawing::Font(L"Arial Black", 16, System::Drawing::FontStyle::Bold));
			this->numDisplay->Location = System::Drawing::Point(30, 12);
			this->numDisplay->Name = L"numDisplay";
			this->numDisplay->Size = System::Drawing::Size(218, 38);
			this->numDisplay->TabIndex = 20;
			this->numDisplay->Text = L"0";
			this->numDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::numDisplay_TextChanged_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(273, 299);
			this->Controls->Add(this->numDisplay);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->buttonSubtract);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text != "0") {
			numDisplay->Text += "0";
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "1";
		}
		else {
			numDisplay->Text += "1";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "2";
		}
		else {
			numDisplay->Text += "2";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "3";
		}
		else {
			numDisplay->Text += "3";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "4";
		}
		else {
			numDisplay->Text += "4";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "5";
		}
		else {
			numDisplay->Text += "5";
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "6";
		}
		else {
			numDisplay->Text += "6";
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "7";
		}
		else {
			numDisplay->Text += "7";
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "8";
		}
		else {
			numDisplay->Text += "8";
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text == "0") {
			numDisplay->Text = "9";
		}
		else {
			numDisplay->Text += "9";
		}
	}
	private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text != "") {
			calcOp = '+';
			num1 = System::Convert::ToInt64(numDisplay->Text);
			numDisplay->Text = "";
		}
	}
	private: System::Void buttonSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text != "") {
			calcOp = '-';
			num1 = System::Convert::ToInt64(numDisplay->Text);
			numDisplay->Text = "";
		}
	}
	private: System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text != "") {
			calcOp = 'x';
			num1 = System::Convert::ToInt64(numDisplay->Text);
			numDisplay->Text = "";
		}
	}
	private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numDisplay->Text != "") {
			calcOp = '/';
			num1 = System::Convert::ToInt64(numDisplay->Text);
			numDisplay->Text = "";
		}
	}
	private: System::Void buttonEquals_Click(System::Object^ sender, System::EventArgs^ e) {

		// If textbox is not empty then calculate 
		if(numDisplay->Text != "" && calcOp != ' ') {
			num2 = System::Convert::ToInt64(numDisplay->Text);
				if (calcOp == '+') {
					total = num1 + num2;
				}
				else if (calcOp == '-') {
					total = num1 - num2;
				}
				else if (calcOp == 'x') {
					total = num1 * num2;
				}
				else if (calcOp == '/') {
					try {
						total = num1 / num2;
					}
					// Catches Zero Division
					catch (Exception^ exceptName) {
						System::Windows::Forms::DialogResult zeroDiv;
						zeroDiv = MessageBox::Show(exceptName->Message, "DIVISION ERROR");
					}
				}

			// Display and reset Total and error message if overflow
			if (total < min || total > max) {
				numDisplay->Text = "Overflow (Press C)";
			}
			else {
				numDisplay->Text = System::Convert::ToString(total);
				total = 0;
			}
			// Resets Calculator Operator to ensure correct answer in case of multiple = operator presses.
			calcOp = ' ';
		}
	}
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		numDisplay->Text = "0";
		num1 = 0;
		num2 = 0;
		calcOp = ' ';
	}
	private: System::Void numDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void numDisplay_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

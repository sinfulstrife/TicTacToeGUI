#pragma once


namespace TicTacToeGUI {

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblPlayerO;

	private: System::Windows::Forms::Label^ lblPlayerX;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->lblPlayerO);
			this->panel1->Controls->Add(this->lblPlayerX);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(66, 35);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(593, 121);
			this->panel1->TabIndex = 0;
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->Location = System::Drawing::Point(525, 59);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(53, 20);
			this->lblPlayerO->TabIndex = 4;
			this->lblPlayerO->Text = L"0";
			this->lblPlayerO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->Location = System::Drawing::Point(402, 59);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(55, 20);
			this->lblPlayerX->TabIndex = 3;
			this->lblPlayerX->Text = L"0";
			this->lblPlayerX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPlayerX->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(284, 60);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tic-Tac-Toe";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(514, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(402, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player X";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::Color::LightBlue;
			this->button1->Location = System::Drawing::Point(66, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 181);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::Color::LightBlue;
			this->button2->Location = System::Drawing::Point(270, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 181);
			this->button2->TabIndex = 2;
			this->button2->TabStop = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ForeColor = System::Drawing::Color::LightBlue;
			this->button3->Location = System::Drawing::Point(473, 205);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 181);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->ForeColor = System::Drawing::Color::LightBlue;
			this->button4->Location = System::Drawing::Point(66, 392);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 181);
			this->button4->TabIndex = 4;
			this->button4->TabStop = false;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->ForeColor = System::Drawing::Color::LightBlue;
			this->button5->Location = System::Drawing::Point(270, 392);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 181);
			this->button5->TabIndex = 5;
			this->button5->TabStop = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::Color::LightBlue;
			this->button6->Location = System::Drawing::Point(473, 392);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 181);
			this->button6->TabIndex = 6;
			this->button6->TabStop = false;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->ForeColor = System::Drawing::Color::LightBlue;
			this->button7->Location = System::Drawing::Point(66, 579);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(186, 181);
			this->button7->TabIndex = 7;
			this->button7->TabStop = false;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::Color::LightBlue;
			this->button8->Location = System::Drawing::Point(270, 579);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(186, 181);
			this->button8->TabIndex = 8;
			this->button8->TabStop = false;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::Color::LightBlue;
			this->button9->Location = System::Drawing::Point(473, 579);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(186, 181);
			this->button9->TabIndex = 9;
			this->button9->TabStop = false;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::IndianRed;
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(89, 804);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(248, 97);
			this->button10->TabIndex = 10;
			this->button10->TabStop = false;
			this->button10->Text = L"Reset Game";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(379, 804);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(248, 97);
			this->button11->TabIndex = 11;
			this->button11->TabStop = false;
			this->button11->Text = L"New Game";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(710, 945);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->Text = L"Tic-Tac-Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}

		Boolean checker;
		int plusone;
#pragma endregion


		void enableFalse() {
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}

		void score() {
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				button1->BackColor = System::Drawing::Color::LightBlue;
				button2->BackColor = System::Drawing::Color::LightBlue;
				button3->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The winner is Player X", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				button1->BackColor = System::Drawing::Color::LightBlue;
				button4->BackColor = System::Drawing::Color::LightBlue;
				button7->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The winner is Player X", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				button1->BackColor = System::Drawing::Color::LightBlue;
				button5->BackColor = System::Drawing::Color::LightBlue;
				button9->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The winner is Player X", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X") {
				button4->BackColor = System::Drawing::Color::LightBlue;
				button5->BackColor = System::Drawing::Color::LightBlue;
				button6->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The winner is Player X", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				button7->BackColor = System::Drawing::Color::LightBlue;
				button8->BackColor = System::Drawing::Color::LightBlue;
				button9->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The winner is Player X", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X") {
				button3->BackColor = System::Drawing::Color::LightBlue;
				button5->BackColor = System::Drawing::Color::LightBlue;
				button7->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The winner is Player X", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}

			//=======================player o============================================
			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				button1->BackColor = System::Drawing::Color::SteelBlue;
				button2->BackColor = System::Drawing::Color::SteelBlue;
				button3->BackColor = System::Drawing::Color::SteelBlue;
				MessageBox::Show("The winner is Player O", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				button1->BackColor = System::Drawing::Color::SteelBlue;
				button4->BackColor = System::Drawing::Color::SteelBlue;
				button7->BackColor = System::Drawing::Color::SteelBlue;
				MessageBox::Show("The winner is Player O", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				button1->BackColor = System::Drawing::Color::SteelBlue;
				button5->BackColor = System::Drawing::Color::SteelBlue;
				button9->BackColor = System::Drawing::Color::SteelBlue;
				MessageBox::Show("The winner is Player O", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
				button4->BackColor = System::Drawing::Color::SteelBlue;
				button5->BackColor = System::Drawing::Color::SteelBlue;
				button6->BackColor = System::Drawing::Color::SteelBlue;
				MessageBox::Show("The winner is Player O", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				button7->BackColor = System::Drawing::Color::LightBlue;
				button8->BackColor = System::Drawing::Color::LightBlue;
				button9->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The winner is Player O", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
			if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O") {
				button3->BackColor = System::Drawing::Color::LightBlue;
				button5->BackColor = System::Drawing::Color::LightBlue;
				button7->BackColor = System::Drawing::Color::LightBlue;
				MessageBox::Show("The winner is Player O", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				enableFalse();
			}
		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button1->Text = "X";
			checker = true;
		}
		else {
			button1->Text = "O";
			checker = false;
		}
		score();
		button1->Enabled = false;
	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button3->Text = "X";
			checker = true;
		}
		else {
			button3->Text = "O";
			checker = false;
		}
		score();
		button3->Enabled = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button4->Text = "X";
			checker = true;
		}
		else {
			button4->Text = "O";
			checker = false;
		}
		score();
		button4->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button2->Text = "X";
			checker = true;
		}
		else {
			button2->Text = "O";
			checker = false;
		}
		score();
		button2->Enabled = false;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button5->Text = "X";
			checker = true;
		}
		else {
			button5->Text = "O";
			checker = false;
		}
		score();
		button5->Enabled = false;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button6->Text = "X";
			checker = true;
		}
		else {
			button6->Text = "O";
			checker = false;
		}
		score();
		button6->Enabled = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button7->Text = "X";
			checker = true;
		}
		else {
			button7->Text = "O";
			checker = false;
		}
		score();
		button7->Enabled = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button8->Text = "X";
			checker = true;
		}
		else {
			button8->Text = "O";
			checker = false;
		}
		score();
		button8->Enabled = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button9->Text = "X";
			checker = true;
		}
		else {
			button9->Text = "O";
			checker = false;
		}
		score();
		button9->Enabled = false;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
		button6->Enabled = true;
		button7->Enabled = true;
		button8->Enabled = true;
		button8->Enabled = true;
		button9->Enabled = true;

		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";
		button11->Enabled = true;

		button1->BackColor = System::Drawing::Color::White;
		button2->BackColor = System::Drawing::Color::White;
		button3->BackColor = System::Drawing::Color::White;
		button4->BackColor = System::Drawing::Color::White;
		button5->BackColor = System::Drawing::Color::White;
		button6->BackColor = System::Drawing::Color::White;
		button7->BackColor = System::Drawing::Color::White;
		button8->BackColor = System::Drawing::Color::White;
		button9->BackColor = System::Drawing::Color::White;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
		button6->Enabled = true;
		button7->Enabled = true;
		button8->Enabled = true;
		button8->Enabled = true;
		button9->Enabled = true;

		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";
		lblPlayerO->Text = "0";
		lblPlayerX->Text = "0";

		button1->BackColor = System::Drawing::Color::White;
		button2->BackColor = System::Drawing::Color::White;
		button3->BackColor = System::Drawing::Color::White;
		button4->BackColor = System::Drawing::Color::White;
		button5->BackColor = System::Drawing::Color::White;
		button6->BackColor = System::Drawing::Color::White;
		button7->BackColor = System::Drawing::Color::White;
		button8->BackColor = System::Drawing::Color::White;
		button9->BackColor = System::Drawing::Color::White;
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

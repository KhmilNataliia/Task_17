#pragma once
#include "proxy.h"

namespace proxy_pattern {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected:
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::DarkGreen;
			this->checkBox1->Location = System::Drawing::Point(30, 36);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(224, 37);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Classic pavement";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::DarkGreen;
			this->checkBox2->Location = System::Drawing::Point(30, 79);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(240, 37);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Triangle pavement";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::DarkGreen;
			this->checkBox3->Location = System::Drawing::Point(30, 122);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(315, 37);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Stone-imitated pavement";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Enabled = false;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->ForeColor = System::Drawing::Color::DarkGreen;
			this->checkBox4->Location = System::Drawing::Point(30, 165);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(414, 37);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Pavement made in soft technology";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->ForeColor = System::Drawing::Color::DarkGreen;
			this->checkBox5->Location = System::Drawing::Point(30, 208);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(233, 37);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Colored pavement";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::DarkGreen;
			this->textBox1->Location = System::Drawing::Point(457, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 33);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DarkGreen;
			this->textBox2->Location = System::Drawing::Point(457, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 33);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::DarkGreen;
			this->textBox3->Location = System::Drawing::Point(457, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 33);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::DarkGreen;
			this->textBox4->Location = System::Drawing::Point(457, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 33);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::DarkGreen;
			this->textBox5->Location = System::Drawing::Point(457, 212);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 33);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(420, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 28);
			this->label1->TabIndex = 10;
			this->label1->Text = L"number of scuare meters:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LimeGreen;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(563, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 33);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LimeGreen;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(563, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 33);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LimeGreen;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(563, 126);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 33);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LimeGreen;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(563, 169);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 33);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LimeGreen;
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(563, 212);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 33);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Add";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::DarkGreen;
			this->textBox6->Location = System::Drawing::Point(427, 301);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 35);
			this->textBox6->TabIndex = 16;
			this->textBox6->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkGreen;
			this->label2->Location = System::Drawing::Point(1, 301);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(420, 33);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Enter the sum you are able to spend:";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LimeGreen;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(554, 301);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 35);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Set";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGreen;
			this->label3->Location = System::Drawing::Point(134, 349);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 33);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Summary price of order:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkGreen;
			this->label4->Location = System::Drawing::Point(277, 402);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 33);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Money left:";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::DarkGreen;
			this->textBox7->Location = System::Drawing::Point(425, 349);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 35);
			this->textBox7->TabIndex = 21;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::DarkGreen;
			this->textBox8->Location = System::Drawing::Point(425, 400);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(100, 35);
			this->textBox8->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(712, 581);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
     
	private: order_proxy *order;

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str = textBox6->Text;
		int b=0;
		for (int i = 0; i<str->Length; i++)
		{
			b = b * 10 + (str[i] - '0');
		}
		order = new order_proxy(b);
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		textBox1->Enabled = true;
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
		textBox7->Clear(); textBox8->Clear();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ str = textBox1->Text;
	int b = 0;
	for (int i = 0; i<str->Length; i++)
	{
		b = b * 10 + (str[i] - '0');
	}
	string item="Classic pavement";
	if (order->add_to_order(item, b))
	{
		MessageBox::Show("Item added!");
	}
	else
	{
		MessageBox::Show("Money not enough!");
	}
	int s = order->get_sum();
	int bal = order->getBalance();
	textBox7->Clear(); textBox7->Text = s.ToString();
	textBox8->Clear(); textBox8->Text = bal.ToString();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ str = textBox2->Text;
	int b = 0;
	for (int i = 0; i<str->Length; i++)
	{
		b = b * 10 + (str[i] - '0');
	}
	string item = "Triangle pavement";
	if (order->add_to_order(item, b))
	{
		MessageBox::Show("Item added!");
	}
	else
	{
		MessageBox::Show("Money not enough!");
	}
	int s = order->get_sum();
	int bal = order->getBalance();
	textBox7->Clear(); textBox7->Text = s.ToString();
	textBox8->Clear(); textBox8->Text = bal.ToString();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ str = textBox3->Text;
	int b = 0;
	for (int i = 0; i<str->Length; i++)
	{
		b = b * 10 + (str[i] - '0');
	}
	string item = "Stone-imitated pavement";
	if (order->add_to_order(item, b))
	{
		MessageBox::Show("Item added!");
	}
	else
	{
		MessageBox::Show("Money not enough!");
	}
	int s = order->get_sum();
	int bal = order->getBalance();
	textBox7->Clear(); textBox7->Text = s.ToString();
	textBox8->Clear(); textBox8->Text = bal.ToString();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ str = textBox4->Text;
	int b = 0;
	for (int i = 0; i<str->Length; i++)
	{
		b = b * 10 + (str[i] - '0');
	}
	string item = "Pavement made in soft technology";
	if (order->add_to_order(item, b))
	{
		MessageBox::Show("Item added!");
	}
	else
	{
		MessageBox::Show("Money not enough!");
	}
	int s = order->get_sum();
	int bal = order->getBalance();
	textBox7->Clear(); textBox7->Text = s.ToString();
	textBox8->Clear(); textBox8->Text = bal.ToString();
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ str = textBox5->Text;
	int b = 0;
	for (int i = 0; i<str->Length; i++)
	{
		b = b * 10 + (str[i] - '0');
	}
	string item = "Colored pavement";
	if (order->add_to_order(item, b))
	{
		MessageBox::Show("Item added!");
	}
	else
	{
		MessageBox::Show("Money not enough!");
	}
	int s = order->get_sum();
	int bal = order->getBalance();
	textBox7->Clear(); textBox7->Text = s.ToString();
	textBox8->Clear(); textBox8->Text = bal.ToString();
}
};
}

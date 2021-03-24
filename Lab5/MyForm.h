#pragma once

#include "logics.h"
#include <stdlib.h>

namespace Lab5 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	
	Arr<Logic>* a;
	Arr<int>* b;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			a = new Arr<Logic>();
			b = new Arr<int>();
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
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Button^ button4;




	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ buttonEnterSq;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->buttonEnterSq = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(230, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 13);
			this->label6->TabIndex = 243;
			this->label6->Text = L"кол-во непрочитанных эллементов";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(311, 39);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(38, 20);
			this->textBox21->TabIndex = 242;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(159, 449);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(38, 20);
			this->textBox20->TabIndex = 241;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(27, 449);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(38, 20);
			this->textBox19->TabIndex = 240;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(68, 449);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 20);
			this->button10->TabIndex = 239;
			this->button10->Text = L"копировать в";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(267, 179);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(119, 23);
			this->button9->TabIndex = 238;
			this->button9->Text = L"Ввывод Logic";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(230, 65);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(199, 108);
			this->richTextBox1->TabIndex = 237;
			this->richTextBox1->Text = L"";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(24, 314);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(170, 41);
			this->button8->TabIndex = 236;
			this->button8->Text = L"Очистить массив";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(153, 31);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(38, 20);
			this->textBox18->TabIndex = 235;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(21, 21);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 38);
			this->button4->TabIndex = 234;
			this->button4->Text = L"Задать рамер массива";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(24, 418);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(170, 20);
			this->textBox15->TabIndex = 229;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 395);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 228;
			this->label2->Text = L"С";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(125, 392);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(69, 20);
			this->textBox14->TabIndex = 227;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(24, 392);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(69, 20);
			this->textBox13->TabIndex = 226;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(138, 366);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(56, 20);
			this->button7->TabIndex = 225;
			this->button7->Text = L">";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(83, 366);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 20);
			this->button6->TabIndex = 224;
			this->button6->Text = L"==";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(24, 366);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 20);
			this->button5->TabIndex = 223;
			this->button5->Text = L"<";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 23);
			this->button1->TabIndex = 222;
			this->button1->Text = L"Ввод строкой";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 197);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 20);
			this->textBox1->TabIndex = 221;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(153, 127);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 13);
			this->label12->TabIndex = 220;
			this->label12->Text = L"in 8";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(65, 127);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 13);
			this->label13->TabIndex = 218;
			this->label13->Text = L"in 6";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(111, 127);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 13);
			this->label14->TabIndex = 219;
			this->label14->Text = L"in 7";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(27, 127);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 13);
			this->label15->TabIndex = 217;
			this->label15->Text = L"in 5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(153, 88);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 13);
			this->label8->TabIndex = 216;
			this->label8->Text = L"in 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 13);
			this->label5->TabIndex = 214;
			this->label5->Text = L"in 2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(111, 88);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(24, 13);
			this->label11->TabIndex = 215;
			this->label11->Text = L"in 3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 88);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 213;
			this->label7->Text = L"in 1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(156, 141);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(38, 20);
			this->textBox8->TabIndex = 212;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(112, 141);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(38, 20);
			this->textBox9->TabIndex = 211;
			// 
			// buttonEnterSq
			// 
			this->buttonEnterSq->Location = System::Drawing::Point(24, 167);
			this->buttonEnterSq->Name = L"buttonEnterSq";
			this->buttonEnterSq->Size = System::Drawing::Size(170, 23);
			this->buttonEnterSq->TabIndex = 205;
			this->buttonEnterSq->Text = L"Ввод ";
			this->buttonEnterSq->UseVisualStyleBackColor = true;
			this->buttonEnterSq->Click += gcnew System::EventHandler(this, &MyForm::buttonEnterSq_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(68, 141);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(38, 20);
			this->textBox10->TabIndex = 210;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(24, 141);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(38, 20);
			this->textBox11->TabIndex = 209;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(156, 104);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(38, 20);
			this->textBox7->TabIndex = 208;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(112, 104);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(38, 20);
			this->textBox6->TabIndex = 207;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(68, 104);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 20);
			this->textBox5->TabIndex = 206;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(24, 104);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(38, 20);
			this->textBox4->TabIndex = 204;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 270);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 20);
			this->textBox2->TabIndex = 245;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 252);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 54);
			this->button2->TabIndex = 244;
			this->button2->Text = L"Установить указатель на позицию";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(38, 20);
			this->textBox3->TabIndex = 247;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 38);
			this->button3->TabIndex = 246;
			this->button3->Text = L"Задать рамер массива";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(15, 112);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(170, 20);
			this->textBox12->TabIndex = 249;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(15, 82);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(170, 23);
			this->button12->TabIndex = 248;
			this->button12->Text = L"Ввод ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(147, 263);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(38, 20);
			this->textBox16->TabIndex = 263;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(15, 245);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(120, 54);
			this->button13->TabIndex = 262;
			this->button13->Text = L"Установить указатель на позицию";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(147, 449);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(38, 20);
			this->textBox17->TabIndex = 261;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(15, 449);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(38, 20);
			this->textBox22->TabIndex = 260;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(56, 449);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(85, 20);
			this->button14->TabIndex = 259;
			this->button14->Text = L"копировать в";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(15, 307);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(170, 41);
			this->button15->TabIndex = 258;
			this->button15->Text = L"Очистить массив";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(15, 411);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(170, 20);
			this->textBox23->TabIndex = 257;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 388);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 256;
			this->label1->Text = L"С";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(116, 385);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(69, 20);
			this->textBox24->TabIndex = 255;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(15, 385);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(69, 20);
			this->textBox25->TabIndex = 254;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(129, 359);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(56, 20);
			this->button16->TabIndex = 253;
			this->button16->Text = L">";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(74, 359);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 20);
			this->button17->TabIndex = 252;
			this->button17->Text = L"==";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(15, 359);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(53, 20);
			this->button18->TabIndex = 251;
			this->button18->Text = L"<";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox20);
			this->groupBox1->Controls->Add(this->textBox19);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->textBox18);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->buttonEnterSq);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(212, 479);
			this->groupBox1->TabIndex = 264;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Logic";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->textBox17);
			this->groupBox2->Controls->Add(this->textBox22);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->textBox23);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox24);
			this->groupBox2->Controls->Add(this->textBox25);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(435, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(202, 479);
			this->groupBox2->TabIndex = 265;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"INT";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(230, 310);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 13);
			this->label3->TabIndex = 269;
			this->label3->Text = L"кол-во непрочитанных эллементов";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(311, 328);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(38, 20);
			this->textBox26->TabIndex = 268;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(267, 468);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(119, 23);
			this->button19->TabIndex = 267;
			this->button19->Text = L"Ввывод Int";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(230, 354);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(199, 108);
			this->richTextBox2->TabIndex = 266;
			this->richTextBox2->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 497);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonEnterSq_Click(System::Object^ sender, System::EventArgs^ e) //ввод a
	{
		if ((textBox4->Text->Length < 1) || (textBox5->Text->Length < 1))
			return;
		/*a[i] = new Logic();*/
		if (textBox6->Text->Length < 1)
			(*a)[count1].set(2, Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text), 0, 0, 0, 0, 0, 0);
		else
			if (textBox7->Text->Length < 1)
				(*a)[count1].set(3, Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox6->Text), 0, 0, 0, 0, 0);
			else
				if (textBox11->Text->Length < 1)
					(*a)[count1].set(4, Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox6->Text), Convert::ToInt32(textBox7->Text), 0, 0, 0, 0);
				else
					if (textBox8->Text->Length < 1)
						return;
					else
						(*a)[count1].set(8, Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox6->Text), Convert::ToInt32(textBox7->Text), Convert::ToInt32(textBox11->Text), Convert::ToInt32(textBox10->Text), Convert::ToInt32(textBox9->Text), Convert::ToInt32(textBox8->Text));
		if (count1 < a->getSize() - 1)
			count1++;
		else
			count1 = 0;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //ввод строкой a
	{
		if ((textBox1->Text->Length < 1))
			return;
		int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, v6 = 0, v7 = 0, v8 = 0;
		String^ s = textBox1->Text;
		int k = (textBox1->Text->Length + 1) / 2;
		if (k == 2)
		{
			String^ token1 = s->Split(' ')[0];
			v1 = Convert::ToInt32(token1);
			s = s->Substring(2);
			v2 = Convert::ToInt32(s);
			(*a)[count1].set(k, v1, v2, v3, v4, v5, v6, v7, v8);
		}
		if (k == 3)
		{
			String^ token1 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token2 = s->Split(' ')[0];
			s = s->Substring(2);
			v1 = Convert::ToInt32(token1);
			v2 = Convert::ToInt32(token2);
			v3 = Convert::ToInt32(s);
			(*a)[count1].set(k, v1, v2, v3, v4, v5, v6, v7, v8);
		}
		if (k == 4)
		{
			String^ token1 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token2 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token3 = s->Split(' ')[0];
			s = s->Substring(2);
			v1 = Convert::ToInt32(token1);
			v2 = Convert::ToInt32(token2);
			v3 = Convert::ToInt32(token3);
			v4 = Convert::ToInt32(s);
			(*a)[count1].set(k, v1, v2, v3, v4, v5, v6, v7, v8);
		}
		if (k == 8)
		{
			String^ token1 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token2 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token3 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token4 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token5 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token6 = s->Split(' ')[0];
			s = s->Substring(2);
			String^ token7 = s->Split(' ')[0];
			s = s->Substring(2);
			v1 = Convert::ToInt32(token1);
			v2 = Convert::ToInt32(token2);
			v3 = Convert::ToInt32(token3);
			v4 = Convert::ToInt32(token4);
			v5 = Convert::ToInt32(token5);
			v6 = Convert::ToInt32(token6);
			v7 = Convert::ToInt32(token7);
			v8 = Convert::ToInt32(s);
			(*a)[count1].set(k, v1, v2, v3, v4, v5, v6, v7, v8);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) //задать размер массива
	{
		if (textBox18->Text->Length < 1)
			return;
		a->setSize(Convert::ToInt32(textBox18->Text));
		textBox21->Text = Convert::ToString(a->getSize());
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)  //сравнение <
{
	if ((textBox13->Text->Length < 0) || (textBox14->Text->Length < 0))
		return;
	textBox15->Text = Convert::ToString((*a)[Convert::ToInt32(textBox13->Text)] < (*a)[Convert::ToInt32(textBox14->Text)]);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)  //сравнение ==
{
	if ((textBox13->Text->Length < 0) || (textBox14->Text->Length < 0))
		return;
	textBox15->Text = Convert::ToString((*a)[Convert::ToInt32(textBox13->Text)] == (*a)[Convert::ToInt32(textBox14->Text)]);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) //сравнение >
{
	if ((textBox13->Text->Length < 0) || (textBox14->Text->Length < 0))
		return;
	textBox15->Text = Convert::ToString((*a)[Convert::ToInt32(textBox13->Text)] > (*a)[Convert::ToInt32(textBox14->Text)]);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) //очистка массива
{
	if (a == 0)
		return;
	a->Clear();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) //Вывод
{
	/*if (richTextBox1->Text->Length > 0)
		richTextBox1->Text = " ";*/

	if (count2 < a->getSize())
	{
		richTextBox1->Text += Convert::ToString(count2) + ": " + "INn- " + Convert::ToString((*a)[count2].getINn()) + " OUT- " + Convert::ToString((*a)[count2].getout()) + "\n";
		textBox21->Text = Convert::ToString(a->getSize() - count2 - 1);
	}
	else
	{
		richTextBox1->Text = " ";
		count2 = 0;
		textBox21->Text = Convert::ToString(a->getSize());
		return;
	}

	count2++;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) //копирование
{
	if ((textBox20->Text->Length < 1) || (textBox19->Text->Length < 1))
		return;
	(*a)[Convert::ToInt32(textBox20->Text)] = (*a)[Convert::ToInt32(textBox19->Text)];
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox2->Text->Length < 1)
		return;
	count1 = Convert::ToInt32(textBox2->Text);
	count2 = Convert::ToInt32(textBox2->Text);
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) //задать размер массива b 
{
	if (textBox3->Text->Length < 1)
		return;
	b->setSize(Convert::ToInt32(textBox3->Text));
	for (int i = 0; i < b->getSize(); i++)
	{
		(*b)[i] = 0;
	}
	textBox26->Text = Convert::ToString(b->getSize());
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) //вывод
{
	if (count4 < b->getSize())
	{
		richTextBox2->Text += Convert::ToString(count4) + ": " + Convert::ToString((*b)[count4]) + "\n";
		textBox26->Text = Convert::ToString(b->getSize() - count4 - 1);
	}
	else
	{
		richTextBox2->Text = " ";
		count4 = 0;
		textBox26->Text = Convert::ToString(b->getSize());
		return;
	}

	count4++;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) //ввод значения
{
	(*b)[count3] = Convert::ToInt32(textBox12->Text);

	if (count3 < b->getSize() - 1)
		count3++;
	else
		count3 = 0;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) //установка указателя на позицию
{
	if (textBox16->Text->Length < 1)
		return;
	count3 = Convert::ToInt32(textBox16->Text);
	count4 = Convert::ToInt32(textBox16->Text);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) // очистка массива b
{
	if (b == 0)
		return;
	b->Clear();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) //копирование
{
	if ((textBox17->Text->Length < 1) || (textBox22->Text->Length < 1))
		return;
	(*b)[Convert::ToInt32(textBox17->Text)] = (*b)[Convert::ToInt32(textBox22->Text)];
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) //сравнение <
{
	if ((textBox25->Text->Length < 0) || (textBox24->Text->Length < 0))
		return;
	textBox23->Text = Convert::ToString((*b)[Convert::ToInt32(textBox25->Text)] < (*b)[Convert::ToInt32(textBox24->Text)]);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) //сравнение ==
{
	if ((textBox25->Text->Length < 0) || (textBox24->Text->Length < 0))
		return;
	textBox23->Text = Convert::ToString((*b)[Convert::ToInt32(textBox25->Text)] == (*b)[Convert::ToInt32(textBox24->Text)]);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) //сравнение >
{
	if ((textBox25->Text->Length < 0) || (textBox24->Text->Length < 0))
		return;
	textBox23->Text = Convert::ToString((*b)[Convert::ToInt32(textBox25->Text)] > (*b)[Convert::ToInt32(textBox24->Text)]);
}
};
}

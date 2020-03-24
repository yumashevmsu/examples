#pragma once
#include <iomanip>
#include <cmath> 
#include <string>
#include <stdlib.h>

namespace prak_yumashev_1etap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::GroupBox^  groupBox5;


	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(645, 463);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"погрешность";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"начальная точка";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"0,0001";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"точка минимума";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"значение функции\r\nв точке минимума";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(135, 202);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(157, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(110, 39);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(75, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"0,01";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 26);
			this->label5->TabIndex = 10;
			this->label5->Text = L"шаг градиентного \r\nметода\r\n";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(107, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"X1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(75, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(191, 82);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(75, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(217, 36);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(75, 20);
			this->textBox7->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(136, 36);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(75, 20);
			this->textBox8->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(214, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"X2 min";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(133, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"X1 min";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(6, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(323, 242);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Общие параметры";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(188, 66);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"X2";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(188, 105);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"X4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(107, 105);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"X3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(188, 144);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"X6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(107, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"X5";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(191, 121);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(75, 20);
			this->textBox13->TabIndex = 18;
			this->textBox13->Text = L"0";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(110, 121);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(75, 20);
			this->textBox12->TabIndex = 17;
			this->textBox12->Text = L"0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(191, 161);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(75, 20);
			this->textBox11->TabIndex = 16;
			this->textBox11->Text = L"0";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(110, 161);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 20);
			this->textBox10->TabIndex = 15;
			this->textBox10->Text = L"0";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Location = System::Drawing::Point(6, 260);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(323, 105);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры метода штрафных функций";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(110, 70);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(75, 20);
			this->textBox9->TabIndex = 22;
			this->textBox9->Text = L"100";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(28, 70);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 26);
			this->label11->TabIndex = 21;
			this->label11->Text = L"коэффициент\r\nbetta > 1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(110, 28);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(75, 20);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(45, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 26);
			this->label10->TabIndex = 21;
			this->label10->Text = L"параметр \r\nштрафа r";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Location = System::Drawing::Point(6, 371);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(323, 85);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры градиентного метода";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->textBox18);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->textBox17);
			this->groupBox4->Controls->Add(this->textBox16);
			this->groupBox4->Controls->Add(this->textBox15);
			this->groupBox4->Controls->Add(this->textBox14);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Location = System::Drawing::Point(374, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(362, 242);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Результат вычислений";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(6, 164);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(115, 13);
			this->label22->TabIndex = 28;
			this->label22->Text = L"количество итераций";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(135, 161);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(157, 20);
			this->textBox18->TabIndex = 27;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(214, 62);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 13);
			this->label19->TabIndex = 26;
			this->label19->Text = L"X4 min";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(214, 101);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"X6 min";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(133, 102);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 13);
			this->label17->TabIndex = 24;
			this->label17->Text = L"X5 min";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(133, 62);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 13);
			this->label16->TabIndex = 23;
			this->label16->Text = L"X3 min";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(136, 78);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(75, 20);
			this->textBox17->TabIndex = 22;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(217, 78);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(75, 20);
			this->textBox16->TabIndex = 21;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(217, 117);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(75, 20);
			this->textBox15->TabIndex = 20;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(136, 117);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(75, 20);
			this->textBox14->TabIndex = 19;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Location = System::Drawing::Point(374, 265);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(362, 165);
			this->groupBox5->TabIndex = 23;
			this->groupBox5->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label21->Location = System::Drawing::Point(9, 36);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(323, 104);
			this->label21->TabIndex = 1;
			this->label21->Text = resources->GetString(L"label21.Text");
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(9, 16);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(326, 13);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Метод штрафов с градиентным методом с постоянным шагом";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(133, 480);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(494, 20);
			this->textBox19->TabIndex = 24;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 512);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"Form1";
			this->Text = L"Юмашев А.В.      2 этап";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 double eps, step, fres, r0, betta;
			 double *min = nullptr;
			 double *x0 = nullptr;
			 x0 = new double[6];
			 int iter = 0;
			 eps = System::Convert::ToDouble(textBox1 -> Text); 

			 x0[0] = System::Convert::ToDouble(textBox2 -> Text); 
			 x0[1] = System::Convert::ToDouble(textBox6 -> Text); 
			 x0[2] = System::Convert::ToDouble(textBox12 -> Text); 
			 x0[3] = System::Convert::ToDouble(textBox13 -> Text); 
			 x0[4] = System::Convert::ToDouble(textBox10 -> Text); 
			 x0[5] = System::Convert::ToDouble(textBox11 -> Text); 

			 step = System::Convert::ToDouble(textBox5 -> Text); 
			 r0 = System::Convert::ToDouble(textBox3 -> Text); 
			 betta = System::Convert::ToDouble(textBox9 -> Text); 

			 min = penalty(eps, x0, r0, betta, step, iter);

			 fres = func(min[0], min[1], min[2], min[3], min[4], min[5]);

			 min[0] = floor(min[0]*10000)/10000;
			 min[1] = floor(min[1]*10000)/10000;
			 min[2] = floor(min[2]*10000)/10000;
			 min[3] = floor(min[3]*10000)/10000;
			 min[4] = floor(min[4]*10000)/10000;
			 min[5] = floor(min[5]*10000)/10000;
			 fres = floor(fres*10000)/10000;

			 textBox8 -> Text = System::Convert::ToString(min[0]);
			 textBox7 -> Text = System::Convert::ToString(min[1]);
			 textBox17 -> Text = System::Convert::ToString(min[2]);
			 textBox16 -> Text = System::Convert::ToString(min[3]);
			 textBox14 -> Text = System::Convert::ToString(min[4]);
			 textBox15 -> Text = System::Convert::ToString(min[5]);
			 textBox18 -> Text = System::Convert::ToString(iter);

			 textBox19 -> Text = "("+System::Convert::ToString(min[0])+"; "+System::Convert::ToString(min[1])+"; "+System::Convert::ToString(min[2])+"; "+System::Convert::ToString(min[3])+"; "+System::Convert::ToString(min[4])+"; "+System::Convert::ToString(min[5])+") ";

			 textBox4 -> Text = System::Convert::ToString(fres);

			 delete [] min;
			 min = nullptr;
			 delete [] x0;
			 x0 = nullptr;

		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


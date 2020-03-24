#pragma once

#include <iomanip>
#include <cmath> 
#include <string>
#include <stdlib.h>
namespace prak1_yumashev {

	using namespace System;
	using namespace System::Runtime::InteropServices;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	int prevcount = 0;
	int prevcount2 = 0;
	bool isstart = false, usegr1 = false, usegr2 = false, usegr3 = false, usegr4 = false, usegr5 = false, usegr6 = false, usegrf = false;
	double *aresNsGl, *ares2NsGl, *ares4NsGl, *aresNgGl, *ares2NgGl, *ares4NgGl, *kGl;
	bool prevcheck1 = false, prevcheck2 = false, prevcheck3 = false, prevcheck4 = false, prevcheck5 = false, prevcheck6 = false; 
	double Dgl, Cgl, nGl;
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
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: array<System::Windows::Forms::TextBox^>^  textBoxM;
	private: array<System::Windows::Forms::Label^>^ labelM1;
	private: array<System::Windows::Forms::Label^>^ labelM2;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: array<System::Windows::Forms::TextBox^>^  textBoxN;
	private: array<System::Windows::Forms::TextBox^>^  textBox2N;
	private: array<System::Windows::Forms::TextBox^>^  textBox4N;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: array<System::Windows::Forms::TextBox^>^  textBoxNg;
	private: array<System::Windows::Forms::TextBox^>^  textBox2Ng;
	private: array<System::Windows::Forms::TextBox^>^  textBox4Ng;
	private: System::ServiceProcess::ServiceController^  serviceController1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: array<System::Windows::Forms::Label^>^  labelM;
	private: array<System::Windows::Forms::Label^>^  labelMa;
	private: array<System::Windows::Forms::Label^>^  labelMo;
	private: array<System::Windows::Forms::Label^>^  labelMoa;

private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::Label^  label45;






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
			System::Windows::Forms::DataVisualization::Charting::LineAnnotation^  lineAnnotation1 = (gcnew System::Windows::Forms::DataVisualization::Charting::LineAnnotation());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->serviceController1 = (gcnew System::ServiceProcess::ServiceController());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1227, 540);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"start/restart";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"-2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(41, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(65, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(41, 81);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(65, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"100";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(41, 107);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(65, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"0,01";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(153, 29);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(69, 20);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"4";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(153, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 46);
			this->button2->TabIndex = 6;
			this->button2->Text = L"show coefficients";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(41, 153);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(50, 20);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"2";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(41, 179);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(50, 20);
			this->textBox7->TabIndex = 8;
			this->textBox7->Text = L"1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(41, 205);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(50, 20);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"1";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(41, 231);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(50, 20);
			this->textBox9->TabIndex = 10;
			this->textBox9->Text = L"1";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(41, 257);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(50, 20);
			this->textBox10->TabIndex = 11;
			this->textBox10->Text = L"0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(41, 283);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(50, 20);
			this->textBox11->TabIndex = 12;
			this->textBox11->Text = L"0";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(41, 309);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(50, 20);
			this->textBox12->TabIndex = 13;
			this->textBox12->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(41, 335);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(50, 20);
			this->textBox13->TabIndex = 14;
			this->textBox13->Text = L"0";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(41, 361);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(50, 20);
			this->textBox14->TabIndex = 15;
			this->textBox14->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(18, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"C:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(17, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"D:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(17, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"N:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(7, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Eps:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(131, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"n:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(13, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"k1:";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(13, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"k2:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(13, 212);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"k3:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(13, 234);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"k4:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(13, 260);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"k5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(13, 286);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"k6:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(13, 312);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"k7:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(13, 338);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"k8:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label14->Location = System::Drawing::Point(13, 364);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"k9:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(1036, 378);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(60, 20);
			this->textBox15->TabIndex = 30;
			this->textBox15->Text = L"iterations";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(1093, 378);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(62, 20);
			this->textBox16->TabIndex = 31;
			this->textBox16->Text = L"Ф(a*)";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(986, 397);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(53, 20);
			this->textBox17->TabIndex = 32;
			this->textBox17->Text = L"N";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(986, 413);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(53, 20);
			this->textBox18->TabIndex = 33;
			this->textBox18->Text = L"2N";
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &Form1::textBox18_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(986, 430);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(53, 20);
			this->textBox19->TabIndex = 34;
			this->textBox19->Text = L"4N";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(1093, 397);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(62, 20);
			this->textBox20->TabIndex = 35;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(1093, 413);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(62, 20);
			this->textBox21->TabIndex = 36;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(1093, 430);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(62, 20);
			this->textBox22->TabIndex = 37;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(1036, 397);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(60, 20);
			this->textBox23->TabIndex = 38;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(1036, 413);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(60, 20);
			this->textBox24->TabIndex = 39;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(1036, 430);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(60, 20);
			this->textBox25->TabIndex = 40;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(1036, 538);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(60, 20);
			this->textBox26->TabIndex = 48;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(1036, 521);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(60, 20);
			this->textBox27->TabIndex = 47;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(1036, 505);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(60, 20);
			this->textBox28->TabIndex = 46;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(1093, 538);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(62, 20);
			this->textBox29->TabIndex = 45;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(1093, 521);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(62, 20);
			this->textBox30->TabIndex = 44;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(1093, 505);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(62, 20);
			this->textBox31->TabIndex = 43;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(1093, 486);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(62, 20);
			this->textBox32->TabIndex = 42;
			this->textBox32->Text = L"Ф(а*)";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(1036, 486);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(60, 20);
			this->textBox33->TabIndex = 41;
			this->textBox33->Text = L"iterations";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(1036, 361);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(119, 20);
			this->textBox34->TabIndex = 49;
			this->textBox34->Text = L"steepest descent";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(1036, 469);
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(119, 20);
			this->textBox35->TabIndex = 50;
			this->textBox35->Text = L"conjugate gradient";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(986, 538);
			this->textBox39->Name = L"textBox39";
			this->textBox39->ReadOnly = true;
			this->textBox39->Size = System::Drawing::Size(53, 20);
			this->textBox39->TabIndex = 56;
			this->textBox39->Text = L"4N";
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(986, 521);
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(53, 20);
			this->textBox40->TabIndex = 55;
			this->textBox40->Text = L"2N";
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(986, 505);
			this->textBox41->Name = L"textBox41";
			this->textBox41->ReadOnly = true;
			this->textBox41->Size = System::Drawing::Size(53, 20);
			this->textBox41->TabIndex = 54;
			this->textBox41->Text = L"N";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(261, 75);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(15, 13);
			this->label15->TabIndex = 57;
			this->label15->Text = L"N";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(336, 75);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(21, 13);
			this->label16->TabIndex = 58;
			this->label16->Text = L"2N";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(411, 75);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(21, 13);
			this->label17->TabIndex = 59;
			this->label17->Text = L"4N";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(259, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 13);
			this->label18->TabIndex = 60;
			this->label18->Text = L"steepest descent";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(484, 29);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 13);
			this->label19->TabIndex = 64;
			this->label19->Text = L"conjugate gradient";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(636, 75);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 13);
			this->label20->TabIndex = 63;
			this->label20->Text = L"4N";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->Location = System::Drawing::Point(561, 75);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 13);
			this->label21->TabIndex = 62;
			this->label21->Text = L"2N";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->Location = System::Drawing::Point(486, 75);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(15, 13);
			this->label22->TabIndex = 61;
			this->label22->Text = L"N";
			// 
			// chart1
			// 
			this->chart1->AllowDrop = true;
			lineAnnotation1->LineColor = System::Drawing::Color::Red;
			lineAnnotation1->Name = L"Function";
			this->chart1->Annotations->Add(lineAnnotation1);
			this->chart1->BackColor = System::Drawing::Color::LightGray;
			this->chart1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::HorizontalCenter;
			this->chart1->BorderlineColor = System::Drawing::Color::Transparent;
			this->chart1->BorderSkin->BorderColor = System::Drawing::Color::Silver;
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea1->AxisX->InterlacedColor = System::Drawing::Color::Black;
			chartArea1->AxisX->LineColor = System::Drawing::Color::Transparent;
			chartArea1->AxisX->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea1->AxisX->LineWidth = 5;
			chartArea1->AxisX->MajorGrid->Interval = 0;
			chartArea1->AxisX->MajorGrid->IntervalOffset = 0;
			chartArea1->AxisX->MajorGrid->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisX->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea1->AxisY->MajorGrid->Interval = 0;
			chartArea1->AxisY->MajorGrid->IntervalOffset = 0;
			chartArea1->AxisY->MajorGrid->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisY->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->BorderColor = System::Drawing::Color::Silver;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->HeaderSeparatorColor = System::Drawing::Color::LightGray;
			legend1->ItemColumnSeparatorColor = System::Drawing::Color::LightGray;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(758, 22);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->Name = L"f(x)";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Green;
			series2->Legend = L"Legend1";
			series2->Name = L"polynom 1 (N segments)";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Orange;
			series3->Legend = L"Legend1";
			series3->MarkerSize = 1;
			series3->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series3->Name = L"polynom 2 (2N segments)";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Red;
			series4->Legend = L"Legend1";
			series4->Name = L"polynom 3 (4N segments)";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Yellow;
			series5->Legend = L"Legend1";
			series5->Name = L"polynom 4 (N segments)";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::Purple;
			series6->Legend = L"Legend1";
			series6->Name = L"polynom 5 (2N segments)";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Color = System::Drawing::Color::Brown;
			series7->Legend = L"Legend1";
			series7->Name = L"polynom 6 (4N segments)";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Series->Add(series7);
			this->chart1->Size = System::Drawing::Size(592, 332);
			this->chart1->TabIndex = 43;
			this->chart1->Text = L"chart";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(1293, 511);
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(44, 20);
			this->textBox36->TabIndex = 66;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(1293, 485);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(44, 20);
			this->textBox37->TabIndex = 67;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(1293, 459);
			this->textBox38->Name = L"textBox38";
			this->textBox38->ReadOnly = true;
			this->textBox38->Size = System::Drawing::Size(44, 20);
			this->textBox38->TabIndex = 68;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(1293, 413);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(44, 20);
			this->textBox42->TabIndex = 69;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(1293, 387);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(44, 20);
			this->textBox43->TabIndex = 70;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(1293, 361);
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->Size = System::Drawing::Size(44, 20);
			this->textBox44->TabIndex = 71;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label23->Location = System::Drawing::Point(1243, 364);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(44, 13);
			this->label23->TabIndex = 72;
			this->label23->Text = L"alpha N";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label24->Location = System::Drawing::Point(1237, 390);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(50, 13);
			this->label24->TabIndex = 73;
			this->label24->Text = L"alpha 2N";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label25->Location = System::Drawing::Point(1237, 417);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(50, 13);
			this->label25->TabIndex = 74;
			this->label25->Text = L"alpha 4N";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label26->Location = System::Drawing::Point(1243, 462);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(44, 13);
			this->label26->TabIndex = 75;
			this->label26->Text = L"alpha N";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label27->Location = System::Drawing::Point(1237, 492);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(50, 13);
			this->label27->TabIndex = 76;
			this->label27->Text = L"alpha 2N";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label28->Location = System::Drawing::Point(1237, 515);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(50, 13);
			this->label28->TabIndex = 77;
			this->label28->Text = L"alpha 4N";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label29->Location = System::Drawing::Point(1174, 492);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(57, 13);
			this->label29->TabIndex = 78;
			this->label29->Text = L"conj. grad.";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label30->Location = System::Drawing::Point(1172, 390);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(59, 13);
			this->label30->TabIndex = 79;
			this->label30->Text = L"steep. des.";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(832, 376);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 21);
			this->button4->TabIndex = 81;
			this->button4->Text = L"plot polynom 1";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(832, 403);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 20);
			this->button5->TabIndex = 82;
			this->button5->Text = L"plot polynom 2";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(832, 429);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(98, 20);
			this->button6->TabIndex = 83;
			this->button6->Text = L"plot polynom 3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(832, 479);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(98, 23);
			this->button7->TabIndex = 84;
			this->button7->Text = L"plot polynom 4";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(832, 508);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(98, 23);
			this->button8->TabIndex = 85;
			this->button8->Text = L"plot polynom 5";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(832, 537);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(98, 23);
			this->button9->TabIndex = 86;
			this->button9->Text = L"plot polynom 6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label31->Location = System::Drawing::Point(740, 407);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(59, 13);
			this->label31->TabIndex = 94;
			this->label31->Text = L"steep. des.";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label32->Location = System::Drawing::Point(742, 513);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(57, 13);
			this->label32->TabIndex = 93;
			this->label32->Text = L"conj. grad.";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label33->Location = System::Drawing::Point(805, 542);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(21, 13);
			this->label33->TabIndex = 92;
			this->label33->Text = L"4N";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label34->Location = System::Drawing::Point(805, 514);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(21, 13);
			this->label34->TabIndex = 91;
			this->label34->Text = L"2N";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label35->Location = System::Drawing::Point(811, 484);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(15, 13);
			this->label35->TabIndex = 90;
			this->label35->Text = L"N";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label36->Location = System::Drawing::Point(805, 429);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(21, 13);
			this->label36->TabIndex = 89;
			this->label36->Text = L"4N";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label37->Location = System::Drawing::Point(805, 407);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(21, 13);
			this->label37->TabIndex = 88;
			this->label37->Text = L"2N";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label38->Location = System::Drawing::Point(811, 382);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(15, 13);
			this->label38->TabIndex = 87;
			this->label38->Text = L"N";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(936, 376);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(37, 21);
			this->button3->TabIndex = 95;
			this->button3->Text = L"CLR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(936, 403);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(37, 21);
			this->button10->TabIndex = 96;
			this->button10->Text = L"CLR";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(936, 429);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(37, 20);
			this->button11->TabIndex = 97;
			this->button11->Text = L"CLR";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(936, 479);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(37, 23);
			this->button12->TabIndex = 98;
			this->button12->Text = L"CLR";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(936, 508);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(37, 23);
			this->button13->TabIndex = 99;
			this->button13->Text = L"CLR";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(936, 537);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(37, 23);
			this->button14->TabIndex = 100;
			this->button14->Text = L"CLR";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label39->Location = System::Drawing::Point(261, 52);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(55, 13);
			this->label39->TabIndex = 101;
			this->label39->Text = L"polynom 1";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label40->Location = System::Drawing::Point(336, 52);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(55, 13);
			this->label40->TabIndex = 102;
			this->label40->Text = L"polynom 2";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label41->Location = System::Drawing::Point(411, 52);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(55, 13);
			this->label41->TabIndex = 103;
			this->label41->Text = L"polynom 3";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label42->Location = System::Drawing::Point(486, 52);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(55, 13);
			this->label42->TabIndex = 104;
			this->label42->Text = L"polynom 4";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label43->Location = System::Drawing::Point(561, 52);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(55, 13);
			this->label43->TabIndex = 105;
			this->label43->Text = L"polynom 5";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label44->Location = System::Drawing::Point(636, 52);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(55, 13);
			this->label44->TabIndex = 106;
			this->label44->Text = L"polynom 6";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(240, 55);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 107;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(322, 55);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 108;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(397, 55);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 109;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(472, 55);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 110;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(547, 55);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 111;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Checked = true;
			this->checkBox6->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->checkBox6->Location = System::Drawing::Point(622, 55);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 112;
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label45->Location = System::Drawing::Point(17, 9);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(335, 13);
			this->label45->TabIndex = 113;
			this->label45->Text = L"f(x) = k1*sin(k2*x) + k3*cos(k4*x) + k5*exp(k6*x) + k7*x^2 + k8*x + k9";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1362, 604);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Задание первого этапа студента Юмашева А.В.";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
Series^ graph1;
Series^ graph2;
Series^ graph3;
Series^ graph4;
Series^ graph5;
Series^ graph6;
Series^ graphf;
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 char *buf = new char[10];
			 //IntPtr p;
			 if (prevcount != 0) {
				for(int i=0;i<prevcount;i++){
						this->textBoxM[i]->~TextBox();
						this->labelM[i] -> ~Label();
						this->labelMa[i] -> ~Label();
				}
			 }
			 int count = System::Convert::ToDouble(textBox5 -> Text);
			 prevcount = ++count;
			 this->textBoxM = gcnew array<System::Windows::Forms::TextBox^ >(count) ;
			 this->labelM = gcnew array<System::Windows::Forms::Label^ >(count) ;
			 this->labelMa = gcnew array<System::Windows::Forms::Label^ >(count) ;
                 for(int i=0; i<count; i++) { 
                    this->textBoxM[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxM[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxM[i]->Location = Point(153, 107+i*26);
					this->textBoxM[i]->Text = L"0";
                    this->Controls->Add(textBoxM[i]);
					/*------------------------------------------------------*/
					this->labelM[i] = (gcnew System::Windows::Forms::Label());
					this->labelM[i]->AutoSize = true;
					this->labelM[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelM[i]->Location = System::Drawing::Point(130, 109+i*26);
					this->labelM[i]->Size = System::Drawing::Size(12, 14);
					this->labelM[i]->Text = System::Convert::ToString(i);
					this->Controls->Add(labelM[i]);
					/*-------------------------------------------------------*/
					this->labelMa[i] = (gcnew System::Windows::Forms::Label());
					this->labelMa[i]->AutoSize = true;
					this->labelMa[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMa[i]->Location = System::Drawing::Point(120, 109+i*26);
					this->labelMa[i]->Size = System::Drawing::Size(12, 14);
					this->labelMa[i]->Text = L"a";
					this->Controls->Add(labelMa[i]);
				 }
}
private: System::Void textBox38_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (usegr1 == true) {
				 graph1->Points->Clear();
			 }
			 if (usegr2 == true) {
				 graph2->Points->Clear();
			 }
			 if (usegr3 == true) {
				 graph3->Points->Clear();
			 }
			 if (usegr4 == true) {
				 graph4->Points->Clear();
			 }
			 if (usegr5 == true) {
				 graph5->Points->Clear();
			 }
			 if (usegr6 == true) {
				 graph6->Points->Clear();
			 }
			 int kn = 5;
			 int count = prevcount;
			 if (isstart == true) {
					for(int i=0;i<prevcount2;i++) {
						if (prevcheck1 == true) {
						this->textBoxN[i]->~TextBox();
						}
						if (prevcheck2 == true) {
						this->textBox2N[i]->~TextBox();
						}
						if (prevcheck3 == true) {
						this->textBox4N[i]->~TextBox();
						}
						if (prevcheck4 == true) {
						this->textBoxNg[i]->~TextBox();
						}
						if (prevcheck5 == true) {
						this->textBox2Ng[i]->~TextBox();
						}
						if (prevcheck6 == true) {
						this->textBox4Ng[i]->~TextBox();
						}
						this->labelMo[i]->~Label();
						this->labelMoa[i]->~Label();
					}
			 }
			 prevcheck1 = this->checkBox1->Checked;
			 prevcheck2 = this->checkBox2->Checked;
			 prevcheck3 = this->checkBox3->Checked;
			 prevcheck4 = this->checkBox4->Checked;
			 prevcheck5 = this->checkBox5->Checked;
			 prevcheck6 = this->checkBox6->Checked;
			 if (count != 0) {
				 prevcount2 = prevcount;
				 isstart = true;
				 this->textBoxN = gcnew array<System::Windows::Forms::TextBox^ >(count);
				 this->textBox2N = gcnew array<System::Windows::Forms::TextBox^ >(count);
				 this->textBox4N = gcnew array<System::Windows::Forms::TextBox^ >(count);
				 this->textBoxNg = gcnew array<System::Windows::Forms::TextBox^ >(count);
				 this->textBox2Ng = gcnew array<System::Windows::Forms::TextBox^ >(count);
				 this->textBox4Ng = gcnew array<System::Windows::Forms::TextBox^ >(count);
				 this->labelMo = gcnew array<System::Windows::Forms::Label^ >(count) ;
				 this->labelMoa = gcnew array<System::Windows::Forms::Label^ >(count) ;
				 if (this->checkBox1->Checked == true) {
					for(int i=0; i<count; i++) { //1
						this->textBoxN[i] = (gcnew System::Windows::Forms::TextBox());
						this->textBoxN[i]->Size = System::Drawing::Size(69, 20);
						this->textBoxN[i]->Location = Point(264, 95+i*26);
						this->textBoxN[i]->ReadOnly = true;
						this->Controls->Add(textBoxN[i]);
					}
				 }

				 /*---------------------------------------------------------------------*/
				 for(int i=0; i<count; i++) {
					this->labelMo[i] = (gcnew System::Windows::Forms::Label());
					this->labelMo[i]->AutoSize = true;
					this->labelMo[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMo[i]->Location = System::Drawing::Point(241, 97+i*26);
					this->labelMo[i]->Size = System::Drawing::Size(12, 14);
					this->labelMo[i]->Text = System::Convert::ToString(i);
					this->Controls->Add(labelMo[i]);
					/*-------------------------------------------------------*/
					this->labelMoa[i] = (gcnew System::Windows::Forms::Label());
					this->labelMoa[i]->AutoSize = true;
					this->labelMoa[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMoa[i]->Location = System::Drawing::Point(231, 97+i*26);
					this->labelMoa[i]->Size = System::Drawing::Size(12, 14);
					this->labelMoa[i]->Text = L"a";
					this->Controls->Add(labelMoa[i]);
				 }
				 /*----------------------------------------------------------------------*/

				 if (this->checkBox2->Checked == true) {
				 for(int i=0; i<count; i++) { //2
                    this->textBox2N[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBox2N[i]->Size = System::Drawing::Size(69, 20);
                    this->textBox2N[i]->Location = Point(339, 95+i*26);
					this->textBox2N[i]->ReadOnly = true;
                    this->Controls->Add(textBox2N[i]);
				 }
				 }
				 if (this->checkBox3->Checked == true) {
				 for(int i=0; i<count; i++) { //3
                    this->textBox4N[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBox4N[i]->Size = System::Drawing::Size(69, 20);
                    this->textBox4N[i]->Location = Point(414, 95+i*26);
					this->textBox4N[i]->ReadOnly = true;
                    this->Controls->Add(textBox4N[i]);
				 }
				 }
				 if (this->checkBox4->Checked == true) {
				 for(int i=0; i<count; i++) { //4
                    this->textBoxNg[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxNg[i]->Size = System::Drawing::Size(69, 20);
                    this->textBoxNg[i]->Location = Point(489, 95+i*26);
					this->textBoxNg[i]->ReadOnly = true;
                    this->Controls->Add(textBoxNg[i]);
				 }
				 }
				 if (this->checkBox5->Checked == true) {
				 for(int i=0; i<count; i++) { //5
                    this->textBox2Ng[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBox2Ng[i]->Size = System::Drawing::Size(69, 20);
                    this->textBox2Ng[i]->Location = Point(564, 95+i*26);
					this->textBox2Ng[i]->ReadOnly = true;
                    this->Controls->Add(textBox2Ng[i]);
				 }
				 }
				 if (this->checkBox6->Checked == true) {
				 for(int i=0; i<count; i++) { //6
                    this->textBox4Ng[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBox4Ng[i]->Size = System::Drawing::Size(69, 20);
                    this->textBox4Ng[i]->Location = Point(639, 95+i*26);
					this->textBox4Ng[i]->ReadOnly = true;
                    this->Controls->Add(textBox4Ng[i]);
				 }
				 }
				 /*---------------------------------------------------------------*/
				 double C = System::Convert::ToDouble(textBox1 -> Text), 
			     D = System::Convert::ToDouble(textBox2 -> Text), 
				 eps = System::Convert::ToDouble(textBox4 -> Text);
				 int N = System::Convert::ToDouble(textBox3 -> Text),
				 n = System::Convert::ToDouble(textBox5 -> Text);
				 double *a0 = new double [n+1];
				 double *k = new double [9];
				 double *aresNs;// = new double (n+1);
				 double *ares2Ns;// = new double (n+1);
				 double *ares4Ns;// = new double (n+1);
				 double *aresNg;
				 double *ares2Ng;
				 double *ares4Ng;
				 int kNs, k2Ns, k4Ns, kNg, k2Ng, k4Ng;
				 int alNs, al2Ns, al4Ns, alNg, al2Ng, al4Ng;
				 double FNs, F2Ns, F4Ns, FNg, F2Ng, F4Ng;
				 int alpNs, alp2Ns, alp4Ns, alpNg, alp2Ng, alp4Ng; 
				 k[0] = System::Convert::ToDouble(textBox6 -> Text); 
				 k[1] = System::Convert::ToDouble(textBox7 -> Text); 
				 k[2] = System::Convert::ToDouble(textBox8 -> Text); 
				 k[3] = System::Convert::ToDouble(textBox9 -> Text); 
				 k[4] = System::Convert::ToDouble(textBox10 -> Text); 
				 k[5] = System::Convert::ToDouble(textBox11 -> Text); 
				 k[6] = System::Convert::ToDouble(textBox12 -> Text); 
				 k[7] = System::Convert::ToDouble(textBox13 -> Text); 
				 k[8] = System::Convert::ToDouble(textBox14 -> Text);
				 for (int i = 0; i<=n; i++) {
					 a0[i] = System::Convert::ToDouble(textBoxM[i] -> Text);
				 }

				 Dgl = D; Cgl = C; nGl = n; kGl = k;
				 if (this->checkBox1->Checked == true) {
				 aresNs = steepestdescent(C, D, N, eps, n, k, a0, kNs, FNs, alpNs);
				 }
				 if (this->checkBox2->Checked == true) {
				 ares2Ns = steepestdescent(C, D, 2*N, eps, n, k, a0, k2Ns, F2Ns, alp2Ns);
				 }
				 if (this->checkBox3->Checked == true) {
				 ares4Ns = steepestdescent(C, D, 4*N, eps, n, k, a0, k4Ns, F4Ns, alp4Ns);
				 }
				 if (this->checkBox4->Checked == true) {
				 aresNg = conjugategradient(C, D, N, eps, n, k, a0, kNg, FNg, alpNg);
				 }
				 if (this->checkBox5->Checked == true) {
				 ares2Ng = conjugategradient(C, D, 2*N, eps, n, k, a0, k2Ng, F2Ng, alp2Ng);
				 }
				 if (this->checkBox6->Checked == true) {
				 ares4Ng = conjugategradient(C, D, 4*N, eps, n, k, a0, k4Ng, F4Ng, alp4Ng);
				 }

				 /*----------------------------------------------------------------------------*/
				 
				 FNs = floor(FNs*10000)/10000;
				 F2Ns = floor(F2Ns*10000)/10000;
				 F4Ns = floor(F4Ns*10000)/10000;
				 FNg = floor(FNg*10000)/10000;
				 F2Ng = floor(F2Ng*10000)/10000;
				 F4Ng = floor(F4Ng*10000)/10000;
				 for (int i = 0; i<=n; i++) {
					 if (this->checkBox1->Checked == true) {
					 aresNs[i] = floor(aresNs[i]*10000)/10000;
					 }
					 if (this->checkBox2->Checked == true) {
					 ares2Ns[i] = floor(ares2Ns[i]*10000)/10000;
					 }
					 if (this->checkBox3->Checked == true) {
					 ares4Ns[i] = floor(ares4Ns[i]*10000)/10000;
					 }
					 if (this->checkBox4->Checked == true) {
					 aresNg[i] = floor(aresNg[i]*10000)/10000;
					 }
					 if (this->checkBox5->Checked == true) {
					 ares2Ng[i] = floor(ares2Ng[i]*10000)/10000;
					 }
					 if (this->checkBox6->Checked == true) {
					 ares4Ng[i] = floor(ares4Ng[i]*10000)/10000;
					 }
				 }

				 /*-----------------------------------------------------------------*/
					 textBox28 -> Text = L"  -";
					 textBox31 -> Text = L"  -";
					 
					 textBox27 -> Text = L"  -";
					 textBox30 -> Text = L"  -";
					 
					 
					 textBox26 -> Text = L"  -";
					 textBox29 -> Text = L"  -";
					 
					 textBox23 -> Text = L"  -";
					 textBox20 -> Text = L"  -";
					 
					 textBox24 -> Text = L"  -";
					 textBox21 -> Text = L"  -";
				
					 textBox25 -> Text = L"  -";
					 textBox22 -> Text = L"  -";

				
					textBox44 -> Text = L"  -";
				 
					textBox43 -> Text = L"  -";
				
				 
					textBox42 -> Text = L"  -";
				 
				 
					textBox38 -> Text = L"  -";
					textBox37 -> Text = L"  -";
					textBox36 -> Text = L"  -";
				 
					 
				

				 /*------------------------------------------------------------------*/

				 for (int i = 0; i<=n; i++) {
					 if (this->checkBox1->Checked == true) {
					 textBoxN[i]->Text = System::Convert::ToString(aresNs[i]);
					 }
					 if (this->checkBox2->Checked == true) {
					 textBox2N[i]->Text = System::Convert::ToString(ares2Ns[i]);
					 }
					 if (this->checkBox3->Checked == true) {
					 textBox4N[i]->Text = System::Convert::ToString(ares4Ns[i]);
					 }
					 if (this->checkBox1->Checked == true) {
					 textBox23 -> Text = System::Convert::ToString(kNs);
					 textBox20 -> Text = System::Convert::ToString(FNs);
					 }
					 if (this->checkBox2->Checked == true) {
					 textBox24 -> Text = System::Convert::ToString(k2Ns);
					 textBox21 -> Text = System::Convert::ToString(F2Ns);
					 }
					 if (this->checkBox3->Checked == true) {
					 textBox25 -> Text = System::Convert::ToString(k4Ns);
					 textBox22 -> Text = System::Convert::ToString(F4Ns);
					 }
					 /*--------------------------------------------------------*/
					 if (this->checkBox4->Checked == true) {
					 textBoxNg[i]->Text = System::Convert::ToString(aresNg[i]);
					 }
					 if (this->checkBox5->Checked == true) {
					 textBox2Ng[i]->Text = System::Convert::ToString(ares2Ng[i]);
					 }
					 if (this->checkBox6->Checked == true) {
					 textBox4Ng[i]->Text = System::Convert::ToString(ares4Ng[i]);
					 }
					 if (this->checkBox4->Checked == true) {
					 textBox28 -> Text = System::Convert::ToString(kNg);
					 textBox31 -> Text = System::Convert::ToString(FNg);
					 }
					 if (this->checkBox5->Checked == true) {
					 textBox27 -> Text = System::Convert::ToString(k2Ng);
					 textBox30 -> Text = System::Convert::ToString(F2Ng);
					 }
					 if (this->checkBox6->Checked == true) {
					 textBox26 -> Text = System::Convert::ToString(k4Ng);
					 textBox29 -> Text = System::Convert::ToString(F4Ng);
					 }
				}
				 if (this->checkBox1->Checked == true) {
				 textBox44 -> Text = System::Convert::ToString(alpNs);
				 }
				 if (this->checkBox2->Checked == true) {
				 textBox43 -> Text = System::Convert::ToString(alp2Ns);
				 }
				 if (this->checkBox3->Checked == true) {
				 textBox42 -> Text = System::Convert::ToString(alp4Ns);
				 }
				 if (this->checkBox4->Checked == true) {
				 textBox38 -> Text = System::Convert::ToString(alpNg);
				 }
				 if (this->checkBox5->Checked == true) {
				 textBox37 -> Text = System::Convert::ToString(alp2Ng);
				 }
				 if (this->checkBox6->Checked == true) {
				 textBox36 -> Text = System::Convert::ToString(alp4Ng);
				 }

				 aresNsGl = aresNs;
				 ares2NsGl = ares2Ns;
				 ares4NsGl = ares4Ns;
				 aresNgGl = aresNg;
				 ares2NgGl = ares2Ng;
				 ares4NgGl = ares4Ng;

				 /*---------------------------------------------------------------*/
				 //chart
				 graphf = chart1->Series[0];
				 graphf->Points->Clear();
				 usegrf = true;
				 double step = (D - C) / 200;
				 double xst = C;
				 int alpgraph = 1;
				 for (int i = 0; i <= 200; i++) {
					 graphf->Points->AddXY(xst, yf(xst, alpgraph, k));
					 xst = xst + step;
				 }

				 /*--------------------------------------------------------------*/
				 delete [] a0;
				 delete [] k;
			 }
}
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			if ((isstart == true) && (this->checkBox1->Checked == true)) {
				graph1 = chart1->Series[1];
				graph1->Points->Clear();
				int alpha = 1;
				usegr1 = true;
				double step = (Dgl - Cgl) / 200;
				double xst = Cgl;
				for (int i = 0; i <= 200; i++) {
					graph1->Points->AddXY(xst, pn(nGl, aresNsGl, xst, alpha));
					xst = xst + step;
				}
			}
		}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((isstart == true) && (this->checkBox2->Checked == true)) {
					graph2 = chart1->Series[2];
					graph2->Points->Clear();
					int alpha = 1;
					usegr2 = true;
					double step = (Dgl - Cgl) / 200;
					double xst = Cgl;
					for (int i = 0; i <= 200; i++) {
						graph2->Points->AddXY(xst, pn(nGl, ares2NsGl, xst, alpha));
						xst = xst + step;
					}
				 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((isstart == true) && (this->checkBox3->Checked == true)) {
					graph3 = chart1->Series[3];
					graph3->Points->Clear();
					usegr3 = true;
					int alpha = 1;
					double step = (Dgl - Cgl) / 200;
					double xst = Cgl;
					for (int i = 0; i <= 200; i++) {
						graph3->Points->AddXY(xst, pn(nGl, ares4NsGl, xst, alpha));
						xst = xst + step;
					}
				 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((isstart == true) && (this->checkBox4->Checked == true)) {
					graph4 = chart1->Series[4];
					graph4->Points->Clear();
					usegr4 = true;
					int alpha = 1;
					double step = (Dgl - Cgl) / 200;
					double xst = Cgl;
					for (int i = 0; i <= 200; i++) {
						graph4->Points->AddXY(xst, pn(nGl, aresNgGl, xst, alpha));
						xst = xst + step;
					}
				 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((isstart == true) && (this->checkBox5->Checked == true)) {
					graph5 = chart1->Series[5];
					graph5->Points->Clear();
					usegr5 = true;
					int alpha = 1;
					double step = (Dgl - Cgl) / 200;
					double xst = Cgl;
					for (int i = 0; i <= 200; i++) {
						graph5->Points->AddXY(xst, pn(nGl, ares2NgGl, xst, alpha));
						xst = xst + step;
					}
				 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((isstart == true) && (this->checkBox6->Checked == true)) {
					graph6 = chart1->Series[6];
					graph6->Points->Clear();
					usegr6 = true;
					int alpha = 1;
					double step = (Dgl - Cgl) / 200;
					double xst = Cgl;
					for (int i = 0; i <= 200; i++) {
						graph6->Points->AddXY(xst, pn(nGl, ares4NgGl, xst, alpha));
						xst = xst + step;
					}
				 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (usegr1 == true) {
				 graph1->Points->Clear();
			 }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (usegr2 == true) {
				 graph2->Points->Clear();
			 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (usegr3 == true) {
				 graph3->Points->Clear();
			 }
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (usegr4 == true) {
				 graph4->Points->Clear();
			 }
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (usegr5 == true) {
				 graph5->Points->Clear();
			 }
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (usegr6 == true) {
				 graph6->Points->Clear();
			 }
		 }
/*private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (isstart == true) {
				graphf = chart1->Series[0];
				graphf->Points->Clear();
				usegrf = true;
				double step = (Dgl - Cgl) / 200;
				double xst = Cgl;
				int alpgraph = 1;
		   		for (int i = 0; i <= 200; i++) {
					graphf->Points->AddXY(xst, yf(xst, alpgraph, kGl));
					xst = xst + step;
				}
			  }
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (usegrf == true) {
				 graphf->Points->Clear();
			 }
		 }*/
};
}


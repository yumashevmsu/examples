#pragma once

#include <iomanip>
#include <cmath> 
#include <string>
#include <stdlib.h>

namespace prak2_yumashev {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int solutionBorderXR, solutionBorderYR, prcount1, prcount2;
	//double **a, *b, *p, **agl, **aglnew;
	//int *upd, *leftd;
	//char **upc, **leftc; 
	//array<String^>^ generalbuf;
	//array<String^>^ stringbuf;
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: array<System::Windows::Forms::TextBox^, 2>^  textBoxM; 
	private: array<System::Windows::Forms::TextBox^>^ textBoxR;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(148, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(412, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(58, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(651, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"1 2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(212, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"количество ограничений-неравенств";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(476, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"номера свободных переменных";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"количество переменных";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(15, 95);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(294, 223);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"1 -1\r\n-1 1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(367, 95);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(79, 223);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"1\r\n1";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(15, 376);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(294, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->Text = L"1 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(264, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Матрица коэффициентов ограничений-неравенств";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(364, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Правая часть";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 350);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Коэффициенты целевой функции";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Window;
			this->textBox7->Location = System::Drawing::Point(517, 95);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox7->Size = System::Drawing::Size(508, 379);
			this->textBox7->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(514, 70);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Таблица результатов";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(907, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 46);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(1064, 486);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Юмашев А.В. (вариант 9)";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox7->Text = "";
			 int count1 = System::Convert::ToDouble(textBox1 -> Text); //столбцы
			 int count2 = System::Convert::ToDouble(textBox2 -> Text); //строки 
			 double **a, *b, *p, **agl, **aglnew;
			 int *upd, *leftd;
			 int r = 0;
			 int s = 0;
			 int flagr = 0;
			 int flagopt = 0;
			 bool flagfree = false;
			 int plus = 0;
			 double goal = 0;
			 int *varf;
			 int debugcount = 0;
			 array<String^>^ leftc;
		     array<String^>^ upc;
			 if (textBox3 -> Text == "") {
				a = new double* [count2];
				for (int i = 0; i < count2; i++) {
					a[i] = new double [count1];
				}

				agl = new double* [count2 + 1];
				for (int i = 0; i < count2 + 1; i++) {
					agl[i] = new double [count1 + 1];
				}

				aglnew = new double* [count2 + 1];
				for (int i = 0; i < count2 + 1; i++) {
					aglnew[i] = new double [count1 + 1];
				}

				for (int i = 0; i <= count1; i++) {
					for (int j = 0; j <= count2; j++) {
						agl[i][j] = 0;
					}
				}

				b = new double [count2];
				p = new double [count1];
				leftd = new int [count2];
				upd = new int [count1];
				leftc = gcnew array<String^>(count2); //+1?
				upc = gcnew array<String^>(count1);
				for (int i = 0; i < count2; i++) {
					leftd[i] = i+1;
				}
				for (int i = 0; i < count1; i++) {
					upd[i] = i+1;
				}
				for (int i = 0; i < count2; i++) {
					leftc[i] = "y";
				}
				for (int i = 0; i < count1; i++) {
					upc[i] = "x";
				}
				array<String^>^ generalbuf;
				array<String^>^ stringbuf;
				array<String^>^ rightcolumn;
				array<String^>^ goalfunc;
				generalbuf = textBox4->Text->Split('\n');
				for (int i = 0; i<count2; i++) {
					stringbuf = generalbuf[i]->Split(' ');
					for (int j = 0; j<count1; j++) {
						a[i][j] = System::Convert::ToDouble(stringbuf[j]);
						agl[i][j] = System::Convert::ToDouble(stringbuf[j]);
					}
				}
				generalbuf = textBox5->Text->Split('\n');
				for (int i = 0; i<count2; i++) {
					b[i] = System::Convert::ToDouble(generalbuf[i]);
				}
				generalbuf = textBox6->Text->Split(' ');
				for (int i = 0; i<count1; i++) {
					p[i] =  - System::Convert::ToDouble(generalbuf[i]);
				}
				/*for (int i = 0; i < count1; i++) {
					for (int j = 0; j < count2; j++) {
						agl[i][j] = a[i][j];
					}
				}*/
				for (int i = 0; i < count1; i++) {
					agl[count2][i] = p[i];
				}
				for (int i = 0; i < count2; i++) {
					agl[i][count1] = b[i];
			    }
				agl[count2][count1] = 0;
			 }
			 else { /*---------------------------------------------------------------*/
				 flagfree = true;
				 array<String^>^ generalbuf;
				 array<String^>^ stringbuf;
				 array<String^>^ rightcolumn;
				 array<String^>^ goalfunc;
				 generalbuf = textBox3->Text->Split(' ');
				 plus = generalbuf->Length;
				 varf = new int [plus];
				 for (int i = 0; i<plus; i++) {
					 varf[i] = System::Convert::ToDouble(generalbuf[i]);
				 }
				 bubble_sort(varf, plus);
				 a = new double* [count2];
				 for (int i = 0; i < count2; i++) {
					 a[i] = new double [count1+plus];
				 }

				 agl = new double* [count2 + 1];
				 for (int i = 0; i < count2 + 1; i++) {
					 agl[i] = new double [count1 + 1 + plus];
				 }

				 for (int i = 0; i <= count2; i++) {
					for (int j = 0; j <= count1; j++) {
						agl[i][j] = 0;
					}
				}

				aglnew = new double* [count2 + 1];
				for (int i = 0; i < count2 + 1; i++) {
					aglnew[i] = new double [count1 + 1 + plus];
				}

				// for (int i = 0; i <= count2; i++) {
					//for (int j = 0; j <= count1; j++) {
						//aglnew[i][j] = 0;
					//}
				//}

				 b = new double [count2];
				 p = new double [count1+plus];
				 leftd = new int [count2];
				 upd = new int [count1+plus];
				 leftc = gcnew array<String^>(count2); //+1?
				 upc = gcnew array<String^>(count1+plus);
				 for (int i = 0; i < count2; i++) {
					 leftd[i] = i+1;
				 }
				 for (int i = 0; i < count1+plus; i++) {
					 upd[i] = i+1;
				 }
				 for (int i = 0; i < count2; i++) {
					 leftc[i] = "y";
				 }
				 for (int i = 0; i < count1+plus; i++) {
					 upc[i] = "x";
				 }

				 generalbuf = textBox4->Text->Split('\n');
				 for (int i = 0; i<count2; i++) {
					 stringbuf = generalbuf[i]->Split(' ');
					 for (int j = 0; j<count1; j++) {
						 a[i][j] = System::Convert::ToDouble(stringbuf[j]);
						 agl[i][j] = System::Convert::ToDouble(stringbuf[j]);
					 }
				 }
				 generalbuf = textBox5->Text->Split('\n');
				 for (int i = 0; i<count2; i++) {
					 b[i] = System::Convert::ToDouble(generalbuf[i]);
				 }
				 generalbuf = textBox6->Text->Split(' ');
				 for (int i = 0; i<count1; i++) {
					 p[i] = - System::Convert::ToDouble(generalbuf[i]);
				 }
				 /*---------------------------------------------------------------------*/
				 for (int i = 0; i<count2; i++) {
					 for (int j = count1, k = 0; j<count1+plus, k < plus; j++, k++) {
						 a[i][j] = -a[i][varf[k] - 1];
						 agl[i][j] = -a[i][varf[k] - 1];
					 }
				 }

				 generalbuf = textBox6->Text->Split(' ');
				 for (int i = count1, k = 0; i<count1+plus, k < plus; i++, k++) {
					 p[i] = - p[varf[k] - 1];
				 }

				 /*for (int i = 0; i < count1 + plus; i++) {
					for (int j = 0; j < count2; j++) {
						agl[i][j] = a[i][j];
					}
				 }*/
				 for (int i = 0; i < count1 + plus; i++) {
					 agl[count2][i] = p[i];
				 }
				 for (int i = 0; i < count2; i++) {
					 agl[i][count1 + plus] = b[i];
			     }

				 agl[count2][count1 + plus] = 0;
			 }
				 /*----------------------------------------------------------------------*/
				 

			 /*for (int i = 0; i<count2; i++) {
				 textBox7->Text += "\r\n";
				 for (int j = 0; j<count1+plus; j++) {
					 textBox7->Text += System::Convert::ToString(a[i][j]);
					 textBox7->Text += " ";
				 }
			 textBox7->Text += "\r\n";
			 }
			 for (int i = 0; i<=count2; i++) {
				 textBox7->Text += "\r\n";
				 for (int j = 0; j<=count1+plus; j++) {
					 textBox7->Text += System::Convert::ToString(agl[i][j]);
					 textBox7->Text += " ";
				 }
			 }*/
			 /*textBox7->Text += "\r\n";
			 for (int i = 0; i<count1+plus; i++) {
				 textBox7->Text += System::Convert::ToString(p[i]);
			     textBox7->Text += " ";
			 }
			 textBox7->Text += "\r\n";
			 for (int i = 0; i<plus; i++) {
				 textBox7->Text += System::Convert::ToString(varf[i]);
			     textBox7->Text += " ";
			 }
			 textBox7->Text += "\r\n";*/
			 double* reliance = new double [count1+plus];
			 for (int i = 0; i < count1+plus; i++) {
				 reliance[i] = 0;
			 }
			 double* optimal = new double [count1];
				 for (int i = 0; i < count1; i++) {
					optimal[i] = 0;
				 }
			 bool error;
			 
			 if (flagfree) {
				 count1 = count1 + plus;
			 }

			 bool firststep = true;
/*-------------------------------------------------------------------------------------------------------------------*/
			 while (flagr == 0) {
			 
			 if (firststep == false) {
				jordan_step(agl, aglnew, upd, leftd, upc, leftc, count2+1, count1+1, r, s); //count!!
			 

			 for (int i = 0; i < count2; i++) {
				 for (int j = 0; j < count1; j++) {
					 a[i][j] = aglnew[i][j];
				 }
			 }

			     for (int i = 0; i < count1; i++) {
					 p[i] = aglnew[count2][i];
				 }
				 for (int i = 0; i < count2; i++) {
					 b[i] = aglnew[i][count1];
			     }

				 goal = aglnew[count2][count1];

				 for (int i = 0; i <= count2; i++) {
					for (int j = 0; j <= count1; j++) {
						agl[i][j] = aglnew[i][j];
					}
				}
			 }

			 firststep = false;

             /*for (int i = 0; i<=count2; i++) {
				 textBox7->Text += "\r\n";
				 for (int j = 0; j<=count1+plus; j++) {
					 textBox7->Text += System::Convert::ToString(agl[i][j]);
					 textBox7->Text += " ";
				 }
			 }
			 textBox7->Text += "\r\n";
			 textBox7->Text += "--------------------------------\r\n";
			 for (int i = 0; i<=count2; i++) {
				 textBox7->Text += "\r\n";
				 for (int j = 0; j<=count1+plus; j++) {
					 textBox7->Text += System::Convert::ToString(aglnew[i][j]);
					 textBox7->Text += " ";
				 }
			 }
			 textBox7->Text += "\r\n";*/

			  textBox7->Text += "          !";
			 for (int i = 0; i < count1; i++) {
				 textBox7->Text += "       - " + upc[i];
				 textBox7->Text += System::Convert::ToString(upd[i]) + "         ";

			 }
			 textBox7->Text += "     1 \r\n";
			 textBox7->Text += "_________";
			 for (int i = 0; i < count1; i++) {
				 textBox7->Text += "___________";
			 }
			 textBox7->Text += "\r\n";
			 for (int i = 0; i<count2; i++) {
				 textBox7->Text += leftc[i];
				 textBox7->Text += System::Convert::ToString(leftd[i]) + "      !";
				 for (int j = 0; j<count1; j++) {
					 if (a[i][j] < 0) {
						textBox7->Text += "     ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
					 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}",floor(a[i][j]*100)/100));
					 //textBox7->Text += "       ";
					 if (a[i][j] < 0) {
						textBox7->Text += "       ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
				 }
				 if (b[i] < 0) {
						textBox7->Text += "  ";
					 }
					 else {
						 textBox7->Text += "   ";
					 }
				 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", floor(b[i]*100)/100));
				 textBox7->Text += "\r\n";
			 }
			 //textBox7->Text += "\r\n";
			 textBox7->Text += "z        !";
			 for (int i = 0; i<count1; i++) {
				 if (p[i] < 0) {
						textBox7->Text += "     ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
				 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", floor(p[i]*100)/100));
			     //textBox7->Text += "       "; 
				 if (p[i] < 0) {
						textBox7->Text += "       "; 
					 }
					 else {
						 textBox7->Text += "      "; 
					 }
			 }
			 /*for (int i = 0; i < count1; i++) {
				 goal += reliance[i]*p[i];
			 }
			 goal = - goal;*/
			 textBox7->Text += "   " + System::Convert::ToString(String::Format("{0,-7:0.00}", floor(goal*100)/100));
			 textBox7->Text += "\r\n";
			 textBox7->Text += "\r\n";

/*-------------------------------------------------------------------------------------------------------------------*/

             simplex_step_reliance(a, b, reliance, flagr, error, r, s, upd, leftd, upc, leftc, count2, count1);
			 /*if (flagr == 0) {
				jordan_step(agl, aglnew, upd, leftd, upc, leftc, count2+1, count1+1, r, s); //count!!
			 

			 for (int i = 0; i < count2; i++) {
				 for (int j = 0; j < count1; j++) {
					 a[i][j] = aglnew[i][j];
				 }
			 }

			     for (int i = 0; i < count1; i++) {
					 p[i] = aglnew[count2][i];
				 }
				 for (int i = 0; i < count2; i++) {
					 b[i] = aglnew[i][count1];
			     }

				 goal = aglnew[count2][count1];

				 for (int i = 0; i <= count2; i++) {
					for (int j = 0; j <= count1; j++) {
						agl[i][j] = aglnew[i][j];
					}
				}
			 }*/
			 /*for (int i = 0; i<=count2; i++) {
				 textBox7->Text += "\r\n";
				 for (int j = 0; j<=count1+plus; j++) {
					 textBox7->Text += System::Convert::ToString(aglnew[i][j]);
					 textBox7->Text += " ";
				 }
			 }

			 textBox7->Text += "          !";
			 for (int i = 0; i < count1+plus; i++) {
				 textBox7->Text += "         " + upc[i];
				 textBox7->Text += System::Convert::ToString(upd[i]) + "         ";

			 }
			 textBox7->Text += "     1 \r\n";
			 textBox7->Text += "_________";
			 for (int i = 0; i < count1+plus; i++) {
				 textBox7->Text += "___________";
			 }
			 textBox7->Text += "\r\n";
			 for (int i = 0; i<count2; i++) {
				 textBox7->Text += leftc[i];
				 textBox7->Text += System::Convert::ToString(leftd[i]) + "      !";
				 for (int j = 0; j<count1+plus; j++) {
					 if (a[i][j] < 0) {
						textBox7->Text += "     ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
					 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}",floor(a[i][j]*100)/100));
					 //textBox7->Text += "       ";
					 if (a[i][j] < 0) {
						textBox7->Text += "       ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
				 }
				 if (b[i] < 0) {
						textBox7->Text += "  ";
					 }
					 else {
						 textBox7->Text += "   ";
					 }
				 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", floor(b[i]*100)/100));
				 textBox7->Text += "\r\n";
			 }
			 //textBox7->Text += "\r\n";
			 textBox7->Text += "z        !";
			 for (int i = 0; i<count1+plus; i++) {
				 if (p[i] < 0) {
						textBox7->Text += "     ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
				 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", floor(p[i]*100)/100));
			     //textBox7->Text += "       "; 
				 if (p[i] < 0) {
						textBox7->Text += "       "; 
					 }
					 else {
						 textBox7->Text += "      "; 
					 }
			 }
			 /*for (int i = 0; i < count1; i++) {
				 goal += reliance[i]*p[i];
			 }
			 goal = - goal;
			 textBox7->Text += "   " + System::Convert::ToString(String::Format("{0,-7:0.00}", floor(goal*100)/100));
			 textBox7->Text += "\r\n";
			 textBox7->Text += "\r\n";*/
			 if (flagr == 0) {
				 textBox7->Text += "Точка - ( ";
				 for (int i = 0; i < count1; i++) {
					textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", reliance[i])) + ",  ";
				 }
				 textBox7->Text += " ) \r\n";
				 textBox7->Text += "Координаты разрешающего элемента: " +  System::Convert::ToString(r+1) + ", " +  System::Convert::ToString(s+1) + "\r\n";
			 }
			 if (flagr == 1) {
				 textBox7->Text += "Опорное решение - ( ";
				 for (int i = 0; i < count1; i++) {
					textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", reliance[i])) + ",  ";
				 }
				 textBox7->Text += " ) \r\n" + "Ищем оптимальное решение. \r\n";
				 simplex_step_optimal(a, b, p, optimal, flagopt, error, r, s, upd, leftd, upc, leftc, count2, count1);
				 
				 if (flagopt == 1) {
				 //goal = agl[count2][count1];
				 if (plus > 0) {
					 for (int i = 0; i < plus; i++) {
						 optimal[varf[i] - 1] = optimal[varf[i] - 1] - optimal[count1 - plus + i];
					 }
				 //count1 = count1 - plus;
				 }
				 textBox7->Text += "Оптимальное решение - ( ";
				 for (int i = 0; i < count1; i++) {
					textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", optimal[i])) + ",  ";
				 }
				 textBox7->Text += " ) \r\n";
				 textBox7->Text += "Минимальное значение целевой функции " + System::Convert::ToString(String::Format("{0,-7:0.00}", goal)) + "\r\n";
				 }
				 if (flagopt == 2) {
				 textBox7->Text += "Целевая функция неограничена \r\n";
				 }
				 if (flagopt == 0) {
				 textBox7->Text += "Координаты разрешающего элемента: " +  System::Convert::ToString(r+1) + ", " +  System::Convert::ToString(s+1) + "\r\n";
				 }
			 }
			 if (flagr == 2) {
				 textBox7->Text += "Система ограничений образует пустую область \r\n";
			 }
			 }

			 /*double* optimal = new double [count1];
			 for (int i = 0; i < count1; i++) {
				 optimal[i] = 0;
			 }*/

/*------------------------------------------------------------------------------------------------------------------------------*/
			 while ((flagopt == 0) && (flagr != 2)) {
			 
			    
				jordan_step(agl, aglnew, upd, leftd, upc, leftc, count2+1, count1+1, r, s); //count!!
			 

				for (int i = 0; i < count2; i++) {
					for (int j = 0; j < count1; j++) {
						a[i][j] = aglnew[i][j];
					}
				}

					for (int i = 0; i < count1; i++) {
						p[i] = aglnew[count2][i];
					}
					for (int i = 0; i < count2; i++) {
						b[i] = aglnew[i][count1];
					}

				goal = aglnew[count2][count1];

				for (int i = 0; i <= count2; i++) {
					for (int j = 0; j <= count1; j++) {
						agl[i][j] = aglnew[i][j];
					}
				}
				
			 

             //debugcount++;

             textBox7->Text += "          !";
			 for (int i = 0; i < count1; i++) {
				 textBox7->Text += "       - " + upc[i];
				 textBox7->Text += System::Convert::ToString(upd[i]) + "         ";

			 }
			 textBox7->Text += "     1 \r\n";
			 textBox7->Text += "_________";
			 for (int i = 0; i < count1; i++) {
				 textBox7->Text += "___________";
			 }
			 textBox7->Text += "\r\n";
			 for (int i = 0; i<count2; i++) {
				 textBox7->Text += leftc[i];
				 textBox7->Text += System::Convert::ToString(leftd[i]) + "      !";
				 for (int j = 0; j<count1; j++) {
					 if (a[i][j] < 0) {
						textBox7->Text += "     ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
					 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}",floor(a[i][j]*100)/100));
					 //textBox7->Text += "       ";
					 if (a[i][j] < 0) {
						textBox7->Text += "       ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
				 }
				 if (b[i] < 0) {
						textBox7->Text += "  ";
					 }
					 else {
						 textBox7->Text += "   ";
					 }
				 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", floor(b[i]*100)/100));
				 textBox7->Text += "\r\n";
			 }
			 //textBox7->Text += "\r\n";
			 textBox7->Text += "z        !";
			 for (int i = 0; i<count1; i++) {
				 if (p[i] < 0) {
						textBox7->Text += "     ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
				 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", floor(p[i]*100)/100));
			     //textBox7->Text += "       "; 
				 if (p[i] < 0) {
						textBox7->Text += "       "; 
					 }
					 else {
						 textBox7->Text += "      "; 
					 }
			 }
			 /*for (int i = 0; i < count1; i++) {
				 goal += optimal[i]*p[i];
			 }*/
			 //goal = - goal;
			 textBox7->Text += "   ";
			 textBox7->Text +=  System::Convert::ToString(String::Format("{0,-7:0.00}", floor(goal*100)/100));
			 textBox7->Text += "\r\n";
			 textBox7->Text += "\r\n";


/*--------------------------------------------------------------------------------------------------------------------------------*/
             if (flagopt == 0) {
			 simplex_step_optimal(a, b, p, optimal, flagopt, error, r, s, upd, leftd, upc, leftc, count2, count1);
			 }

			 //if (debugcount > 10) {
				 //flagopt = 2;
			 //}
			 //if (debugcount == 1) {
				// flagopt = 1; 
				 //debugcount = -2;
			 //}
			 //if ((flagopt == 1) && (debugcount != -2)) { //!!!!!!!!!!!!!!!!!!!!!!!!!!!
				//debugcount = 1;
				//flagopt = 0;
			 //}
			
			 /*if (flagopt == 0) {
				jordan_step(agl, aglnew, upd, leftd, upc, leftc, count2+1, count1+1, r, s); //count!!
			 

				for (int i = 0; i < count2; i++) {
					for (int j = 0; j < count1; j++) {
						a[i][j] = aglnew[i][j];
					}
				}

					for (int i = 0; i < count1; i++) {
						p[i] = aglnew[count2][i];
					}
					for (int i = 0; i < count2; i++) {
						b[i] = aglnew[i][count1];
					}

				goal = agl[count2][count1];

				for (int i = 0; i <= count2; i++) {
					for (int j = 0; j <= count1; j++) {
						agl[i][j] = aglnew[i][j];
					}
				}
			 }*/
			 /*textBox7->Text += "          !";
			 for (int i = 0; i < count1+plus; i++) {
				 textBox7->Text += "         " + upc[i];
				 textBox7->Text += System::Convert::ToString(upd[i]) + "         ";

			 }
			 textBox7->Text += "     1 \r\n";
			 textBox7->Text += "_________";
			 for (int i = 0; i < count1+plus; i++) {
				 textBox7->Text += "___________";
			 }
			 textBox7->Text += "\r\n";
			 for (int i = 0; i<count2; i++) {
				 textBox7->Text += leftc[i];
				 textBox7->Text += System::Convert::ToString(leftd[i]) + "      !";
				 for (int j = 0; j<count1+plus; j++) {
					 if (a[i][j] < 0) {
						textBox7->Text += "     ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
					 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}",floor(a[i][j]*100)/100));
					 //textBox7->Text += "       ";
					 if (a[i][j] < 0) {
						textBox7->Text += "       ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
				 }
				 if (b[i] < 0) {
						textBox7->Text += "  ";
					 }
					 else {
						 textBox7->Text += "   ";
					 }
				 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", floor(b[i]*100)/100));
				 textBox7->Text += "\r\n";
			 }
			 //textBox7->Text += "\r\n";
			 textBox7->Text += "z        !";
			 for (int i = 0; i<count1+plus; i++) {
				 if (p[i] < 0) {
						textBox7->Text += "     ";
					 }
					 else {
						 textBox7->Text += "      ";
					 }
				 textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", floor(p[i]*100)/100));
			     //textBox7->Text += "       "; 
				 if (p[i] < 0) {
						textBox7->Text += "       "; 
					 }
					 else {
						 textBox7->Text += "      "; 
					 }
			 }
			 /*for (int i = 0; i < count1; i++) {
				 goal += optimal[i]*p[i];
			 }
			 //goal = - goal;
			 textBox7->Text += "   ";
			 textBox7->Text +=  System::Convert::ToString(String::Format("{0,-7:0.00}", floor(goal*100)/100));
			 textBox7->Text += "\r\n";
			 textBox7->Text += "\r\n";*/
			 if (flagopt == 0) {
				 textBox7->Text += "Точка - ( ";
				 for (int i = 0; i < count1; i++) {
					textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", optimal[i])) + ",  ";
				 }
				 textBox7->Text += " ) \r\n";
				 textBox7->Text += "Координаты разрешающего элемента: " +  System::Convert::ToString(r+1) + ", " +  System::Convert::ToString(s+1) + "\r\n";
			 }
			 if (flagopt == 1) {
				 //goal = agl[count2][count1];
				 if (plus > 0) {
					 for (int i = 0; i < plus; i++) {
						 optimal[varf[i] - 1] = optimal[varf[i] - 1] - optimal[count1 - plus + i];
					 }
				 count1 = count1 - plus;
				 }
				 textBox7->Text += "Оптимальное решение - ( ";
				 for (int i = 0; i < count1; i++) {
					textBox7->Text += System::Convert::ToString(String::Format("{0,-7:0.00}", optimal[i])) + ",  ";
				 }
				 textBox7->Text += " ) \r\n";
				 textBox7->Text += "Минимальное значение целевой функции " + System::Convert::ToString(String::Format("{0,-7:0.00}", goal)) + "\r\n";

			 }
			 if (flagopt == 2) {
				 textBox7->Text += "Целевая функция неограничена \r\n";
			 }
			 }

		}
		 
};
}


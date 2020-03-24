#pragma once

#include <iomanip>
#include <cmath> 
#include <string>
#include <stdlib.h>

namespace task2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int prevcountA = 0;
	int prevcountY = 0;
	int prevcountUP = 0;
	int prevcountLEFT = 0;
	int spectrumflag = 0;
	int countA = 0;
	int countY = 0;
	int selector = 0;
	double inputT = 1;
	int inputM = 10;
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

	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::TextBox^  textBoxT;
	private: System::Windows::Forms::TextBox^  textBoxMC;
	private: array<System::Windows::Forms::TextBox^>^  textBoxM;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: array<System::Windows::Forms::Label^>^  labelM;
	private: array<System::Windows::Forms::Label^>^  labelMa;
	private: array<System::Windows::Forms::Label^>^  labelMe;
    private: array<System::Windows::Forms::TextBox^>^  textBoxMY;
	private: array<System::Windows::Forms::Label^>^  labelMY;
	private: array<System::Windows::Forms::Label^>^  labelMaY;
	private: array<System::Windows::Forms::Label^>^  labelMeY;
	private: System::Windows::Forms::Label^  label3;

	private: array<System::Windows::Forms::TextBox^>^  textBoxMz;
	private: array<System::Windows::Forms::Label^>^  labelMz;
	private: array<System::Windows::Forms::Label^>^  labelMyz;
	private: array<System::Windows::Forms::Label^>^  labelMez;










	//private: array<System::Windows::Forms::TextBox^>^  textBoxUP;
	//private: array<System::Windows::Forms::TextBox^>^  textBoxLEFT;
	private: array<System::Windows::Forms::TextBox^, 2>^  textBoxYij; 
	private: array<System::Windows::Forms::Label^>^  labelUPY;
	private: array<System::Windows::Forms::Label^>^  labelUPC;
	private: array<System::Windows::Forms::Label^>^  labelUPT;
    private: array<System::Windows::Forms::Label^>^  labelLEFT;
	private: array<System::Windows::Forms::Label^>^  labelSP;
	private: System::Windows::Forms::ToolStripMenuItem^  âûáåðèòåÏîñòðîåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  òàáëèöûYtToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïåêòðÌîùíîñòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñå÷åíèåÏóàíêàðåToolStripMenuItem;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;




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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûáåðèòåÏîñòðîåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöûYtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïåêòðÌîùíîñòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñå÷åíèåÏóàíêàðåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxT = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMC = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem1, 
				this->âûáåðèòåÏîñòðîåíèåToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(836, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripMenuItem2, 
				this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(161, 20);
			this->toolStripMenuItem1->Text = L"Øàã 1:  Âûáåðèòå ñèñòåìó";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->toolStripMenuItem2->Text = L"Rikitaki - 4D";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(166, 22);
			this->toolStripMenuItem3->Text = L"Default";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(166, 22);
			this->toolStripMenuItem4->Text = L"Vallis";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(166, 22);
			this->toolStripMenuItem5->Text = L"Double Scroll";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(166, 22);
			this->toolStripMenuItem6->Text = L"Simple 3D-model";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem6_Click);
			// 
			// âûáåðèòåÏîñòðîåíèåToolStripMenuItem
			// 
			this->âûáåðèòåÏîñòðîåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->òàáëèöûYtToolStripMenuItem, 
				this->ñïåêòðÌîùíîñòèToolStripMenuItem, this->ñå÷åíèåÏóàíêàðåToolStripMenuItem});
			this->âûáåðèòåÏîñòðîåíèåToolStripMenuItem->Name = L"âûáåðèòåÏîñòðîåíèåToolStripMenuItem";
			this->âûáåðèòåÏîñòðîåíèåToolStripMenuItem->Size = System::Drawing::Size(181, 20);
			this->âûáåðèòåÏîñòðîåíèåToolStripMenuItem->Text = L"Øàã 2:  Âûáåðèòå ïîñòðîåíèå";
			// 
			// òàáëèöûYtToolStripMenuItem
			// 
			this->òàáëèöûYtToolStripMenuItem->Name = L"òàáëèöûYtToolStripMenuItem";
			this->òàáëèöûYtToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->òàáëèöûYtToolStripMenuItem->Text = L"Òàáëèöû Y(t)";
			this->òàáëèöûYtToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::òàáëèöûYtToolStripMenuItem_Click);
			// 
			// ñïåêòðÌîùíîñòèToolStripMenuItem
			// 
			this->ñïåêòðÌîùíîñòèToolStripMenuItem->Name = L"ñïåêòðÌîùíîñòèToolStripMenuItem";
			this->ñïåêòðÌîùíîñòèToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ñïåêòðÌîùíîñòèToolStripMenuItem->Text = L"Ñïåêòð ìîùíîñòè";
			this->ñïåêòðÌîùíîñòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñïåêòðÌîùíîñòèToolStripMenuItem_Click);
			// 
			// ñå÷åíèåÏóàíêàðåToolStripMenuItem
			// 
			this->ñå÷åíèåÏóàíêàðåToolStripMenuItem->Name = L"ñå÷åíèåÏóàíêàðåToolStripMenuItem";
			this->ñå÷åíèåÏóàíêàðåToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ñå÷åíèåÏóàíêàðåToolStripMenuItem->Text = L"Ñå÷åíèå Ïóàíêàðå";
			// 
			// textBoxT
			// 
			this->textBoxT->Location = System::Drawing::Point(48, 38);
			this->textBoxT->Name = L"textBoxT";
			this->textBoxT->Size = System::Drawing::Size(61, 20);
			this->textBoxT->TabIndex = 6;
			this->textBoxT->Text = L"1";
			// 
			// textBoxMC
			// 
			this->textBoxMC->BackColor = System::Drawing::Color::White;
			this->textBoxMC->Location = System::Drawing::Point(48, 64);
			this->textBoxMC->Name = L"textBoxMC";
			this->textBoxMC->Size = System::Drawing::Size(61, 20);
			this->textBoxMC->TabIndex = 7;
			this->textBoxMC->Text = L"0,1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"T =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"H =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(226, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Âûáåðèòå ñèñòåìó";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(115, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"êîíåö îòðåçêà";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(115, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"øàã ñåòêè";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(836, 628);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxMC);
			this->Controls->Add(this->textBoxT);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 selector = 1;
			 countA = 3;
			 countY = 4;
			 this->label3->Text = L"Rikitaki - 4D";
			 char *buf = new char[10];
			 //IntPtr p;
			 if (prevcountA != 0) {
				for(int i=0;i<prevcountA;i++){
						this->textBoxM[i]->~TextBox();
						this->labelM[i] -> ~Label();
						this->labelMa[i] -> ~Label();
						this->labelMe[i] -> ~Label();
				}
			 }
			 if (prevcountY != 0) {
				for(int i=0;i<prevcountY;i++){
						this->textBoxMY[i]->~TextBox();
						this->labelMY[i] -> ~Label();
						this->labelMaY[i] -> ~Label();
						this->labelMeY[i] -> ~Label();

						this->textBoxMz[i]->~TextBox();
						this->labelMz[i] -> ~Label();
						this->labelMyz[i] -> ~Label();
						this->labelMez[i] -> ~Label();
				}
			 }
			 //int count = System::Convert::ToDouble(textBox5 -> Text);
			 //prevcountA = ++countA;
			 //prevcountY = ++countY;
			 this->textBoxM = gcnew array<System::Windows::Forms::TextBox^ >(countA) ;
			 this->labelM = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMa = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMe = gcnew array<System::Windows::Forms::Label^ >(countA) ;

			 this->textBoxMY = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMaY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMeY = gcnew array<System::Windows::Forms::Label^ >(countY) ;

			 this->textBoxMz = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMyz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMez = gcnew array<System::Windows::Forms::Label^ >(countY) ;

                 for(int i=0; i<countA; i++) { 
                    this->textBoxM[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxM[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxM[i]->Location = Point(48, 90+i*26);
					this->textBoxM[i]->Text = L"1";
                    this->Controls->Add(textBoxM[i]);
					/*------------------------------------------------------*/
					this->labelM[i] = (gcnew System::Windows::Forms::Label());
					this->labelM[i]->AutoSize = true;
					this->labelM[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelM[i]->Location = System::Drawing::Point(17, 93+i*26);
					this->labelM[i]->Size = System::Drawing::Size(12, 14);
					this->labelM[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelM[i]);
					/*-------------------------------------------------------*/
					this->labelMa[i] = (gcnew System::Windows::Forms::Label());
					this->labelMa[i]->AutoSize = true;
					this->labelMa[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMa[i]->Location = System::Drawing::Point(7, 93+i*26);
					this->labelMa[i]->Size = System::Drawing::Size(12, 14);
					this->labelMa[i]->Text = L"a";
					this->Controls->Add(labelMa[i]);
					/*--------------------------------------------------------*/
					this->labelMe[i] = (gcnew System::Windows::Forms::Label());
					this->labelMe[i]->AutoSize = true;
					this->labelMe[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMe[i]->Location = System::Drawing::Point(27, 93+i*26);
					this->labelMe[i]->Size = System::Drawing::Size(12, 14);
					this->labelMe[i]->Text = L"=";
					this->Controls->Add(labelMe[i]);
				 }

				 for(int i=0; i<countY; i++) { 
                    this->textBoxMz[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMz[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxMz[i]->Location = Point(58, 90+i*26+(countA+1)*26);
					this->textBoxMz[i]->Text = L"1";
                    this->Controls->Add(textBoxMz[i]);
					/*------------------------------------------------------*/
					this->labelMz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMz[i]->AutoSize = true;
					this->labelMz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMz[i]->Location = System::Drawing::Point(17, 93+i*26+(countA+1)*26);
					this->labelMz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMz[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMz[i]);
					/*-------------------------------------------------------*/
					this->labelMyz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMyz[i]->AutoSize = true;
					this->labelMyz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMyz[i]->Location = System::Drawing::Point(7, 93+i*26+(countA+1)*26);
					this->labelMyz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMyz[i]->Text = L"y";
					this->Controls->Add(labelMyz[i]);
					/*--------------------------------------------------------*/
					this->labelMez[i] = (gcnew System::Windows::Forms::Label());
					this->labelMez[i]->AutoSize = true;
					this->labelMez[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMez[i]->Location = System::Drawing::Point(27, 93+i*26+(countA+1)*26);
					this->labelMez[i]->Size = System::Drawing::Size(12, 14);
					this->labelMez[i]->Text = L"(0) =";
					this->Controls->Add(labelMez[i]);
				 }

				  for(int i=0; i<countY; i++) { 
                    this->textBoxMY[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMY[i]->Size = System::Drawing::Size(186, 20);
                    this->textBoxMY[i]->Location = Point(199, 90+i*26);
					this->textBoxMY[i]->Text = L"---";
					this->textBoxMY[i]->ReadOnly = true;
                    this->Controls->Add(textBoxMY[i]);
					/*------------------------------------------------------*/
					this->labelMY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMY[i]->AutoSize = true;
					this->labelMY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMY[i]->Location = System::Drawing::Point(168, 93+i*26);
					this->labelMY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMY[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMY[i]);
					/*-------------------------------------------------------*/
					this->labelMaY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMaY[i]->AutoSize = true;
					this->labelMaY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMaY[i]->Location = System::Drawing::Point(158, 93+i*26);
					this->labelMaY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMaY[i]->Text = L"y'";
					this->Controls->Add(labelMaY[i]);
					/*--------------------------------------------------------*/
					this->labelMeY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMeY[i]->AutoSize = true;
					this->labelMeY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMeY[i]->Location = System::Drawing::Point(178, 93+i*26);
					this->labelMeY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMeY[i]->Text = L"=";
					this->Controls->Add(labelMeY[i]);
				 }
				prevcountA = countA;
				prevcountY = countY;
				textBoxMY[0]->Text = L"-A1*Y1+Y2*Y3";
				textBoxMY[1]->Text = L"-A1*Y2+Y1*Y4";
				textBoxMY[2]->Text = L"1-Y1*Y2-A2*Y3";
				textBoxMY[3]->Text = L"1-Y1*Y2-A3*Y4";

				
			}

private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
			 selector = 2;
			 countA =1;
			 countY = 3;
			 this->label3->Text = L"Default";
			 char *buf = new char[10];
			 //IntPtr p;
			 if (prevcountA != 0) {
				for(int i=0;i<prevcountA;i++){
						this->textBoxM[i]->~TextBox();
						this->labelM[i] -> ~Label();
						this->labelMa[i] -> ~Label();
						this->labelMe[i] -> ~Label();
				}
			 }
			 if (prevcountY != 0) {
				for(int i=0;i<prevcountY;i++){
						this->textBoxMY[i]->~TextBox();
						this->labelMY[i] -> ~Label();
						this->labelMaY[i] -> ~Label();
						this->labelMeY[i] -> ~Label();

						this->textBoxMz[i]->~TextBox();
						this->labelMz[i] -> ~Label();
						this->labelMyz[i] -> ~Label();
						this->labelMez[i] -> ~Label();
				}
			 }
			 //int count = System::Convert::ToDouble(textBox5 -> Text);
			 this->textBoxM = gcnew array<System::Windows::Forms::TextBox^ >(countA) ;
			 this->labelM = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMa = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMe = gcnew array<System::Windows::Forms::Label^ >(countA) ;

			 this->textBoxMY = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMaY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMeY = gcnew array<System::Windows::Forms::Label^ >(countY) ;

			 this->textBoxMz = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMyz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMez = gcnew array<System::Windows::Forms::Label^ >(countY) ;

                 for(int i=0; i<countA; i++) { 
                    this->textBoxM[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxM[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxM[i]->Location = Point(48, 90+i*26);
					this->textBoxM[i]->Text = L"1";
                    this->Controls->Add(textBoxM[i]);
					/*------------------------------------------------------*/
					this->labelM[i] = (gcnew System::Windows::Forms::Label());
					this->labelM[i]->AutoSize = true;
					this->labelM[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelM[i]->Location = System::Drawing::Point(17, 93+i*26);
					this->labelM[i]->Size = System::Drawing::Size(12, 14);
					this->labelM[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelM[i]);
					/*-------------------------------------------------------*/
					this->labelMa[i] = (gcnew System::Windows::Forms::Label());
					this->labelMa[i]->AutoSize = true;
					this->labelMa[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMa[i]->Location = System::Drawing::Point(7, 93+i*26);
					this->labelMa[i]->Size = System::Drawing::Size(12, 14);
					this->labelMa[i]->Text = L"a";
					this->Controls->Add(labelMa[i]);
					/*--------------------------------------------------------*/
					this->labelMe[i] = (gcnew System::Windows::Forms::Label());
					this->labelMe[i]->AutoSize = true;
					this->labelMe[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMe[i]->Location = System::Drawing::Point(27, 93+i*26);
					this->labelMe[i]->Size = System::Drawing::Size(12, 14);
					this->labelMe[i]->Text = L"=";
					this->Controls->Add(labelMe[i]);
				 }

				  for(int i=0; i<countY; i++) { 
                    this->textBoxMz[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMz[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxMz[i]->Location = Point(58, 90+i*26+(countA+1)*26);
					this->textBoxMz[i]->Text = L"1";
                    this->Controls->Add(textBoxMz[i]);
					/*------------------------------------------------------*/
					this->labelMz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMz[i]->AutoSize = true;
					this->labelMz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMz[i]->Location = System::Drawing::Point(17, 93+i*26+(countA+1)*26);
					this->labelMz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMz[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMz[i]);
					/*-------------------------------------------------------*/
					this->labelMyz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMyz[i]->AutoSize = true;
					this->labelMyz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMyz[i]->Location = System::Drawing::Point(7, 93+i*26+(countA+1)*26);
					this->labelMyz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMyz[i]->Text = L"y";
					this->Controls->Add(labelMyz[i]);
					/*--------------------------------------------------------*/
					this->labelMez[i] = (gcnew System::Windows::Forms::Label());
					this->labelMez[i]->AutoSize = true;
					this->labelMez[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMez[i]->Location = System::Drawing::Point(27, 93+i*26+(countA+1)*26);
					this->labelMez[i]->Size = System::Drawing::Size(12, 14);
					this->labelMez[i]->Text = L"(0) =";
					this->Controls->Add(labelMez[i]);
				 }

				  for(int i=0; i<countY; i++) { 
                    this->textBoxMY[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMY[i]->Size = System::Drawing::Size(186, 20);
                    this->textBoxMY[i]->Location = Point(199, 90+i*26);
					this->textBoxMY[i]->Text = L"---";
					this->textBoxMY[i]->ReadOnly = true;
                    this->Controls->Add(textBoxMY[i]);
					/*------------------------------------------------------*/
					this->labelMY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMY[i]->AutoSize = true;
					this->labelMY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMY[i]->Location = System::Drawing::Point(168, 93+i*26);
					this->labelMY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMY[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMY[i]);
					/*-------------------------------------------------------*/
					this->labelMaY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMaY[i]->AutoSize = true;
					this->labelMaY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMaY[i]->Location = System::Drawing::Point(158, 93+i*26);
					this->labelMaY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMaY[i]->Text = L"y'";
					this->Controls->Add(labelMaY[i]);
					/*--------------------------------------------------------*/
					this->labelMeY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMeY[i]->AutoSize = true;
					this->labelMeY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMeY[i]->Location = System::Drawing::Point(178, 93+i*26);
					this->labelMeY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMeY[i]->Text = L"=";
					this->Controls->Add(labelMeY[i]);
				 }
				 prevcountA = countA;
				 prevcountY = countY;

				 textBoxMY[0]->Text = L"y2*y3+sin(t)";
				 textBoxMY[1]->Text = L"a1*sin(t)";
				 textBoxMY[2]->Text = L"1";
				 //textBoxMY[3]->Text = L"t";
			 }

private: System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
			 selector = 3;
			 countA = 2;
			 countY = 3;
			 this->label3->Text = L"Vallis";
			 char *buf = new char[10];
			 //IntPtr p;
			 if (prevcountA != 0) {
				for(int i=0;i<prevcountA;i++){
						this->textBoxM[i]->~TextBox();
						this->labelM[i] -> ~Label();
						this->labelMa[i] -> ~Label();
						this->labelMe[i] -> ~Label();
				}
			 }
			 if (prevcountY != 0) {
				for(int i=0;i<prevcountY;i++){
						this->textBoxMY[i]->~TextBox();
						this->labelMY[i] -> ~Label();
						this->labelMaY[i] -> ~Label();
						this->labelMeY[i] -> ~Label();

						this->textBoxMz[i]->~TextBox();
						this->labelMz[i] -> ~Label();
						this->labelMyz[i] -> ~Label();
						this->labelMez[i] -> ~Label();
				}
			 }
			 //int count = System::Convert::ToDouble(textBox5 -> Text);
			 this->textBoxM = gcnew array<System::Windows::Forms::TextBox^ >(countA) ;
			 this->labelM = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMa = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMe = gcnew array<System::Windows::Forms::Label^ >(countA) ;

			 this->textBoxMY = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMaY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMeY = gcnew array<System::Windows::Forms::Label^ >(countY) ;

			 this->textBoxMz = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMyz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMez = gcnew array<System::Windows::Forms::Label^ >(countY) ;


                 for(int i=0; i<countA; i++) { 
                    this->textBoxM[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxM[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxM[i]->Location = Point(48, 90+i*26);
					this->textBoxM[i]->Text = L"1";
                    this->Controls->Add(textBoxM[i]);
					/*------------------------------------------------------*/
					this->labelM[i] = (gcnew System::Windows::Forms::Label());
					this->labelM[i]->AutoSize = true;
					this->labelM[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelM[i]->Location = System::Drawing::Point(17, 93+i*26);
					this->labelM[i]->Size = System::Drawing::Size(12, 14);
					this->labelM[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelM[i]);
					/*-------------------------------------------------------*/
					this->labelMa[i] = (gcnew System::Windows::Forms::Label());
					this->labelMa[i]->AutoSize = true;
					this->labelMa[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMa[i]->Location = System::Drawing::Point(7, 93+i*26);
					this->labelMa[i]->Size = System::Drawing::Size(12, 14);
					this->labelMa[i]->Text = L"a";
					this->Controls->Add(labelMa[i]);
					/*--------------------------------------------------------*/
					this->labelMe[i] = (gcnew System::Windows::Forms::Label());
					this->labelMe[i]->AutoSize = true;
					this->labelMe[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMe[i]->Location = System::Drawing::Point(27, 93+i*26);
					this->labelMe[i]->Size = System::Drawing::Size(12, 14);
					this->labelMe[i]->Text = L"=";
					this->Controls->Add(labelMe[i]);
				 }

				 for(int i=0; i<countY; i++) { 
                    this->textBoxMz[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMz[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxMz[i]->Location = Point(58, 90+i*26+(countA+1)*26);
					this->textBoxMz[i]->Text = L"1";
                    this->Controls->Add(textBoxMz[i]);
					/*------------------------------------------------------*/
					this->labelMz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMz[i]->AutoSize = true;
					this->labelMz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMz[i]->Location = System::Drawing::Point(17, 93+i*26+(countA+1)*26);
					this->labelMz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMz[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMz[i]);
					/*-------------------------------------------------------*/
					this->labelMyz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMyz[i]->AutoSize = true;
					this->labelMyz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMyz[i]->Location = System::Drawing::Point(7, 93+i*26+(countA+1)*26);
					this->labelMyz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMyz[i]->Text = L"y";
					this->Controls->Add(labelMyz[i]);
					/*--------------------------------------------------------*/
					this->labelMez[i] = (gcnew System::Windows::Forms::Label());
					this->labelMez[i]->AutoSize = true;
					this->labelMez[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMez[i]->Location = System::Drawing::Point(27, 93+i*26+(countA+1)*26);
					this->labelMez[i]->Size = System::Drawing::Size(12, 14);
					this->labelMez[i]->Text = L"(0) =";
					this->Controls->Add(labelMez[i]);
				 }

				  for(int i=0; i<countY; i++) { 
                    this->textBoxMY[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMY[i]->Size = System::Drawing::Size(186, 20);
                    this->textBoxMY[i]->Location = Point(199, 90+i*26);
					this->textBoxMY[i]->Text = L"---";
					this->textBoxMY[i]->ReadOnly = true;
                    this->Controls->Add(textBoxMY[i]);
					/*------------------------------------------------------*/
					this->labelMY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMY[i]->AutoSize = true;
					this->labelMY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMY[i]->Location = System::Drawing::Point(168, 93+i*26);
					this->labelMY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMY[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMY[i]);
					/*-------------------------------------------------------*/
					this->labelMaY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMaY[i]->AutoSize = true;
					this->labelMaY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMaY[i]->Location = System::Drawing::Point(158, 93+i*26);
					this->labelMaY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMaY[i]->Text = L"y'";
					this->Controls->Add(labelMaY[i]);
					/*--------------------------------------------------------*/
					this->labelMeY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMeY[i]->AutoSize = true;
					this->labelMeY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMeY[i]->Location = System::Drawing::Point(178, 93+i*26);
					this->labelMeY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMeY[i]->Text = L"=";
					this->Controls->Add(labelMeY[i]);
				 }
				 prevcountA = countA;
				 prevcountY = countY;
				 textBoxMY[0]->Text = L"A1*Y2-A2*Y1";
				 textBoxMY[1]->Text = L"Y1*Y3-Y2";
				 textBoxMY[2]->Text = L"1-Y1*Y2-Y3";
				 
		 }

private: System::Void toolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
			 selector = 4;
			 countA = 4;
			 countY = 3;
			 this->label3->Text = L"Double Scroll";
			 char *buf = new char[10];
			 //IntPtr p;
			 if (prevcountA != 0) {
				for(int i=0;i<prevcountA;i++){
						this->textBoxM[i]->~TextBox();
						this->labelM[i] -> ~Label();
						this->labelMa[i] -> ~Label();
						this->labelMe[i] -> ~Label();
				}
			 }
			 if (prevcountY != 0) {
				for(int i=0;i<prevcountY;i++){
						this->textBoxMY[i]->~TextBox();
						this->labelMY[i] -> ~Label();
						this->labelMaY[i] -> ~Label();
						this->labelMeY[i] -> ~Label();

						this->textBoxMz[i]->~TextBox();
						this->labelMz[i] -> ~Label();
						this->labelMyz[i] -> ~Label();
						this->labelMez[i] -> ~Label();
				}
			 }
			 //int count = System::Convert::ToDouble(textBox5 -> Text);
			
			 this->textBoxM = gcnew array<System::Windows::Forms::TextBox^ >(countA) ;
			 this->labelM = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMa = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMe = gcnew array<System::Windows::Forms::Label^ >(countA) ;

			 this->textBoxMY = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMaY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMeY = gcnew array<System::Windows::Forms::Label^ >(countY) ;

			 this->textBoxMz = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMyz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMez = gcnew array<System::Windows::Forms::Label^ >(countY) ;


                 for(int i=0; i<countA; i++) { 
                    this->textBoxM[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxM[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxM[i]->Location = Point(48, 90+i*26);
					this->textBoxM[i]->Text = L"1";
                    this->Controls->Add(textBoxM[i]);
					/*------------------------------------------------------*/
					this->labelM[i] = (gcnew System::Windows::Forms::Label());
					this->labelM[i]->AutoSize = true;
					this->labelM[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelM[i]->Location = System::Drawing::Point(17, 93+i*26);
					this->labelM[i]->Size = System::Drawing::Size(12, 14);
					this->labelM[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelM[i]);
					/*-------------------------------------------------------*/
					this->labelMa[i] = (gcnew System::Windows::Forms::Label());
					this->labelMa[i]->AutoSize = true;
					this->labelMa[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMa[i]->Location = System::Drawing::Point(7, 93+i*26);
					this->labelMa[i]->Size = System::Drawing::Size(12, 14);
					this->labelMa[i]->Text = L"a";
					this->Controls->Add(labelMa[i]);
					/*--------------------------------------------------------*/
					this->labelMe[i] = (gcnew System::Windows::Forms::Label());
					this->labelMe[i]->AutoSize = true;
					this->labelMe[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMe[i]->Location = System::Drawing::Point(27, 93+i*26);
					this->labelMe[i]->Size = System::Drawing::Size(12, 14);
					this->labelMe[i]->Text = L"=";
					this->Controls->Add(labelMe[i]);
				 }

				 for(int i=0; i<countY; i++) { 
                    this->textBoxMz[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMz[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxMz[i]->Location = Point(58, 90+i*26+(countA+1)*26);
					this->textBoxMz[i]->Text = L"1";
                    this->Controls->Add(textBoxMz[i]);
					/*------------------------------------------------------*/
					this->labelMz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMz[i]->AutoSize = true;
					this->labelMz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMz[i]->Location = System::Drawing::Point(17, 93+i*26+(countA+1)*26);
					this->labelMz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMz[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMz[i]);
					/*-------------------------------------------------------*/
					this->labelMyz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMyz[i]->AutoSize = true;
					this->labelMyz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMyz[i]->Location = System::Drawing::Point(7, 93+i*26+(countA+1)*26);
					this->labelMyz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMyz[i]->Text = L"y";
					this->Controls->Add(labelMyz[i]);
					/*--------------------------------------------------------*/
					this->labelMez[i] = (gcnew System::Windows::Forms::Label());
					this->labelMez[i]->AutoSize = true;
					this->labelMez[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMez[i]->Location = System::Drawing::Point(27, 93+i*26+(countA+1)*26);
					this->labelMez[i]->Size = System::Drawing::Size(12, 14);
					this->labelMez[i]->Text = L"(0) =";
					this->Controls->Add(labelMez[i]);
				 }

				  for(int i=0; i<countY; i++) { 
                    this->textBoxMY[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMY[i]->Size = System::Drawing::Size(220, 20);
                    this->textBoxMY[i]->Location = Point(199, 90+i*26);
					this->textBoxMY[i]->Text = L"---";
					this->textBoxMY[i]->ReadOnly = true;
                    this->Controls->Add(textBoxMY[i]);
					/*------------------------------------------------------*/
					this->labelMY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMY[i]->AutoSize = true;
					this->labelMY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMY[i]->Location = System::Drawing::Point(168, 93+i*26);
					this->labelMY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMY[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMY[i]);
					/*-------------------------------------------------------*/
					this->labelMaY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMaY[i]->AutoSize = true;
					this->labelMaY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMaY[i]->Location = System::Drawing::Point(158, 93+i*26);
					this->labelMaY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMaY[i]->Text = L"y'";
					this->Controls->Add(labelMaY[i]);
					/*--------------------------------------------------------*/
					this->labelMeY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMeY[i]->AutoSize = true;
					this->labelMeY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMeY[i]->Location = System::Drawing::Point(178, 93+i*26);
					this->labelMeY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMeY[i]->Text = L"=";
					this->Controls->Add(labelMeY[i]);
				 }
				 prevcountA = countA;
				 prevcountY = countY;
				 textBoxMY[0]->Text = L"A1*(Y2-A3*Y1-0.5*(A4-A3)*(|Y1+1|-|Y1-1|))";
				 textBoxMY[1]->Text = L"Y1-Y2+Y3";
				 textBoxMY[2]->Text = L"-A2*Y2";
		 }

private: System::Void toolStripMenuItem6_Click(System::Object^  sender, System::EventArgs^  e) {
			 selector = 5;
			 countA = 1;
			 countY = 3;
			 this->label3->Text = L"Simple 3D-model";
			 char *buf = new char[10];
			 //IntPtr p;
			 if (prevcountA != 0) {
				for(int i=0;i<prevcountA;i++){
						this->textBoxM[i]->~TextBox();
						this->labelM[i] -> ~Label();
						this->labelMa[i] -> ~Label();
						this->labelMe[i] -> ~Label();
				}
			 }
			 if (prevcountY != 0) {
				for(int i=0;i<prevcountY;i++){
						this->textBoxMY[i]->~TextBox();
						this->labelMY[i] -> ~Label();
						this->labelMaY[i] -> ~Label();
						this->labelMeY[i] -> ~Label();

						this->textBoxMz[i]->~TextBox();
						this->labelMz[i] -> ~Label();
						this->labelMyz[i] -> ~Label();
						this->labelMez[i] -> ~Label();
				}
			 }
			 //int count = System::Convert::ToDouble(textBox5 -> Text);
			 this->textBoxM = gcnew array<System::Windows::Forms::TextBox^ >(countA) ;
			 this->labelM = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMa = gcnew array<System::Windows::Forms::Label^ >(countA) ;
			 this->labelMe = gcnew array<System::Windows::Forms::Label^ >(countA) ;

			 this->textBoxMY = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMaY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMeY = gcnew array<System::Windows::Forms::Label^ >(countY) ;

			 this->textBoxMz = gcnew array<System::Windows::Forms::TextBox^ >(countY) ;
			 this->labelMz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMyz = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelMez = gcnew array<System::Windows::Forms::Label^ >(countY) ;


                 for(int i=0; i<countA; i++) { 
                    this->textBoxM[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxM[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxM[i]->Location = Point(48, 90+i*26);
					this->textBoxM[i]->Text = L"1";
                    this->Controls->Add(textBoxM[i]);
					/*------------------------------------------------------*/
					this->labelM[i] = (gcnew System::Windows::Forms::Label());
					this->labelM[i]->AutoSize = true;
					this->labelM[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelM[i]->Location = System::Drawing::Point(17, 93+i*26);
					this->labelM[i]->Size = System::Drawing::Size(12, 14);
					this->labelM[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelM[i]);
					/*-------------------------------------------------------*/
					this->labelMa[i] = (gcnew System::Windows::Forms::Label());
					this->labelMa[i]->AutoSize = true;
					this->labelMa[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMa[i]->Location = System::Drawing::Point(7, 93+i*26);
					this->labelMa[i]->Size = System::Drawing::Size(12, 14);
					this->labelMa[i]->Text = L"a";
					this->Controls->Add(labelMa[i]);
					/*--------------------------------------------------------*/
					this->labelMe[i] = (gcnew System::Windows::Forms::Label());
					this->labelMe[i]->AutoSize = true;
					this->labelMe[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMe[i]->Location = System::Drawing::Point(27, 93+i*26);
					this->labelMe[i]->Size = System::Drawing::Size(12, 14);
					this->labelMe[i]->Text = L"=";
					this->Controls->Add(labelMe[i]);
				 }

				 for(int i=0; i<countY; i++) { 
                    this->textBoxMz[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMz[i]->Size = System::Drawing::Size(50, 20);
                    this->textBoxMz[i]->Location = Point(58, 90+i*26+(countA+1)*26);
					this->textBoxMz[i]->Text = L"1";
                    this->Controls->Add(textBoxMz[i]);
					/*------------------------------------------------------*/
					this->labelMz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMz[i]->AutoSize = true;
					this->labelMz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMz[i]->Location = System::Drawing::Point(17, 93+i*26+(countA+1)*26);
					this->labelMz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMz[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMz[i]);
					/*-------------------------------------------------------*/
					this->labelMyz[i] = (gcnew System::Windows::Forms::Label());
					this->labelMyz[i]->AutoSize = true;
					this->labelMyz[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMyz[i]->Location = System::Drawing::Point(7, 93+i*26+(countA+1)*26);
					this->labelMyz[i]->Size = System::Drawing::Size(12, 14);
					this->labelMyz[i]->Text = L"y";
					this->Controls->Add(labelMyz[i]);
					/*--------------------------------------------------------*/
					this->labelMez[i] = (gcnew System::Windows::Forms::Label());
					this->labelMez[i]->AutoSize = true;
					this->labelMez[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMez[i]->Location = System::Drawing::Point(27, 93+i*26+(countA+1)*26);
					this->labelMez[i]->Size = System::Drawing::Size(12, 14);
					this->labelMez[i]->Text = L"(0) =";
					this->Controls->Add(labelMez[i]);
				 }

				  for(int i=0; i<countY; i++) { 
                    this->textBoxMY[i] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxMY[i]->Size = System::Drawing::Size(186, 20);
                    this->textBoxMY[i]->Location = Point(199, 90+i*26);
					this->textBoxMY[i]->Text = L"---";
					this->textBoxMY[i]->ReadOnly = true;
                    this->Controls->Add(textBoxMY[i]);
					/*------------------------------------------------------*/
					this->labelMY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMY[i]->AutoSize = true;
					this->labelMY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMY[i]->Location = System::Drawing::Point(168, 93+i*26);
					this->labelMY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMY[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelMY[i]);
					/*-------------------------------------------------------*/
					this->labelMaY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMaY[i]->AutoSize = true;
					this->labelMaY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMaY[i]->Location = System::Drawing::Point(158, 93+i*26);
					this->labelMaY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMaY[i]->Text = L"y'";
					this->Controls->Add(labelMaY[i]);
					/*--------------------------------------------------------*/
					this->labelMeY[i] = (gcnew System::Windows::Forms::Label());
					this->labelMeY[i]->AutoSize = true;
					this->labelMeY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelMeY[i]->Location = System::Drawing::Point(178, 93+i*26);
					this->labelMeY[i]->Size = System::Drawing::Size(12, 14);
					this->labelMeY[i]->Text = L"=";
					this->Controls->Add(labelMeY[i]);
				 }
				 prevcountA = countA;
				 prevcountY = countY;
				 textBoxMY[0]->Text = L"1+A1*Y2*Y3";
				 textBoxMY[1]->Text = L"Y1-Y2";
				 textBoxMY[2]->Text = L"1-Y1*Y2";
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	   if (selector != 0) {
			 inputT = System::Convert::ToDouble(textBoxT -> Text);
			 inputM = System::Convert::ToDouble(textBoxMC -> Text);
			 double *a0 = new double [countA];
			 for (int i = 0; i < countA; i++) {
				 a0[i] =  System::Convert::ToDouble(textBoxM[i] -> Text);
			 }
			 double *y0 = new double [countY];
			 for (int i = 0; i < countY; i++) {
				 y0[i] =  System::Convert::ToDouble(textBoxMz[i] -> Text);
			 }
			 double **Yres;
			 /*---------------------------------------------------------------------------*/
			 //
				Yres = RungeKutt(a0, y0, countY, countA, inputT, inputM, selector);
			 //
			 /*---------------------------------------------------------------------------*/

			 if (prevcountUP != 0) {
				for(int i=0;i<prevcountUP;i++){
						//this->textBoxUP[i]->~TextBox();
						this->labelUPY[i] -> ~Label();
						this->labelUPC[i] -> ~Label();
						this->labelUPT[i] -> ~Label();
				}
			 }
			 if (prevcountLEFT != 0) {
				for(int i=0;i<prevcountLEFT;i++){
						//this->textBoxUP[i]->~TextBox();
						this->labelLEFT[i] -> ~Label();
				}
			 }
			 if ((prevcountLEFT != 0) && (prevcountUP != 0)) {
				 for(int i=0;i<prevcountLEFT - 1;i++) {
					 for(int j=0;j<prevcountUP;j++){
						 this->textBoxYij[i,j]->~TextBox();
					 }
				 }
			 }


			 //int count = System::Convert::ToDouble(textBox5 -> Text);
			 //prevcountUP = ++countY;
			 //this->textBoxUP = gcnew array<System::Windows::Forms::TextBox^ >(countY+1) ;
			 this->labelUPT = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelUPC = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelUPY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelLEFT = gcnew array<System::Windows::Forms::Label^ >(inputM+2) ;
			 this->textBoxYij = gcnew array<System::Windows::Forms::TextBox^, 2>(inputM+1, countY) ;


			 for(int i=0; i<countY; i++) { 
					/*------------------------------------------------------*/
					this->labelUPY[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPY[i]->AutoSize = true;
					this->labelUPY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPY[i]->Location = System::Drawing::Point(516+i*70, 42);
					this->labelUPY[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPY[i]->Text = L"y";
					this->Controls->Add(labelUPY[i]);
					/*-------------------------------------------------------*/
					this->labelUPC[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPC[i]->AutoSize = true;
					this->labelUPC[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPC[i]->Location = System::Drawing::Point(526+i*70, 42);
					this->labelUPC[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPC[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelUPC[i]);
					/*--------------------------------------------------------*/
					this->labelUPT[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPT[i]->AutoSize = true;
					this->labelUPT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPT[i]->Location = System::Drawing::Point(536+i*70, 42);
					this->labelUPT[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPT[i]->Text = L"( t)";
					this->Controls->Add(labelUPT[i]);
				 }
			 prevcountUP = countY;
			 for(int i=0; i<inputM+2; i++) { 
				if (i == 0) {
					this->labelLEFT[i] = (gcnew System::Windows::Forms::Label());
					this->labelLEFT[i]->AutoSize = true;
					this->labelLEFT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelLEFT[i]->Location = System::Drawing::Point(446, 42+i*20);
					this->labelLEFT[i]->Size = System::Drawing::Size(12, 14);
					this->labelLEFT[i]->Text = L"t";
					this->Controls->Add(labelLEFT[i]);
				 }
				else {
					this->labelLEFT[i] = (gcnew System::Windows::Forms::Label());
					this->labelLEFT[i]->AutoSize = true;
					this->labelLEFT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelLEFT[i]->Location = System::Drawing::Point(446, 42+i*20);
					this->labelLEFT[i]->Size = System::Drawing::Size(12, 14);
					this->labelLEFT[i]->Text = System::Convert::ToString((inputT/inputM)*(i-1));
					this->Controls->Add(labelLEFT[i]);

				 }
			 }
			 for (int i=0; i<inputM+1; i++) {
				for(int j=0; j<countY; j++) { 
                    this->textBoxYij[i, j] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxYij[i,j]->Size = System::Drawing::Size(70, 20);
                    this->textBoxYij[i,j]->Location = Point(516+j*70, 62+i*20);
					this->textBoxYij[i,j]->Text = System::Convert::ToString(floor(Yres[i][j]*10000)/10000);
					this->textBoxYij[i,j]->ReadOnly = true;
                    this->Controls->Add(textBoxYij[i,j]);
				}
			 }
			 prevcountLEFT = inputM+2;

		 }
		}

private: System::Void òàáëèöûYtToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (selector != 0) {
			 inputT = System::Convert::ToDouble(textBoxT -> Text);
			 double inputH = System::Convert::ToDouble(textBoxMC -> Text);
			 double *a0 = new double [countA];
			 for (int i = 0; i < countA; i++) {
				 a0[i] =  System::Convert::ToDouble(textBoxM[i] -> Text);
			 }
			 double *y0 = new double [countY];
			 for (int i = 0; i < countY; i++) {
				 y0[i] =  System::Convert::ToDouble(textBoxMz[i] -> Text);
			 }
			 double **Yres;
			 inputM = inputT/inputH;
			 /*---------------------------------------------------------------------------*/
			 //
				Yres = RungeKutt(a0, y0, countY, countA, inputT, inputM, selector);
			 //
			 /*---------------------------------------------------------------------------*/

			 if (prevcountUP != 0) {
				for(int i=0;i<prevcountUP;i++){
						//this->textBoxUP[i]->~TextBox();
						this->labelUPY[i] -> ~Label();
						this->labelUPC[i] -> ~Label();
						this->labelUPT[i] -> ~Label();
				}
			 }
			 if (spectrumflag != 0) {
				 for(int i=0;i<prevcountUP;i++){
						//this->textBoxUP[i]->~TextBox();
						this->labelSP[i] -> ~Label();
				}
			 }
			 if (prevcountLEFT != 0) {
				for(int i=0;i<prevcountLEFT;i++){
						//this->textBoxUP[i]->~TextBox();
						this->labelLEFT[i] -> ~Label();
				}
			 }
			 if ((prevcountLEFT != 0) && (prevcountUP != 0)) {
				 for(int i=0;i<prevcountLEFT - 1;i++) {
					 for(int j=0;j<prevcountUP;j++){
						 this->textBoxYij[i,j]->~TextBox();
					 }
				 }
			 }


			 //int count = System::Convert::ToDouble(textBox5 -> Text);
			 //prevcountUP = ++countY;
			 //this->textBoxUP = gcnew array<System::Windows::Forms::TextBox^ >(countY+1) ;
			 this->labelUPT = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelUPC = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelUPY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelLEFT = gcnew array<System::Windows::Forms::Label^ >(inputM+2) ;
			 this->textBoxYij = gcnew array<System::Windows::Forms::TextBox^, 2>(inputM+1, countY) ;


			 for(int i=0; i<countY; i++) { 
					/*------------------------------------------------------*/
					this->labelUPY[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPY[i]->AutoSize = true;
					this->labelUPY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPY[i]->Location = System::Drawing::Point(516+i*70, 42);
					this->labelUPY[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPY[i]->Text = L"y";
					this->Controls->Add(labelUPY[i]);
					/*-------------------------------------------------------*/
					this->labelUPC[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPC[i]->AutoSize = true;
					this->labelUPC[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPC[i]->Location = System::Drawing::Point(526+i*70, 42);
					this->labelUPC[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPC[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelUPC[i]);
					/*--------------------------------------------------------*/
					this->labelUPT[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPT[i]->AutoSize = true;
					this->labelUPT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPT[i]->Location = System::Drawing::Point(536+i*70, 42);
					this->labelUPT[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPT[i]->Text = L"( t)";
					this->Controls->Add(labelUPT[i]);
				 }
			 prevcountUP = countY;
			 for(int i=0; i<inputM+2; i++) { 
				if (i == 0) {
					this->labelLEFT[i] = (gcnew System::Windows::Forms::Label());
					this->labelLEFT[i]->AutoSize = true;
					this->labelLEFT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelLEFT[i]->Location = System::Drawing::Point(476, 42+i*20);
					this->labelLEFT[i]->Size = System::Drawing::Size(12, 14);
					this->labelLEFT[i]->Text = L"t";
					this->Controls->Add(labelLEFT[i]);
				 }
				else {
					this->labelLEFT[i] = (gcnew System::Windows::Forms::Label());
					this->labelLEFT[i]->AutoSize = true;
					this->labelLEFT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelLEFT[i]->Location = System::Drawing::Point(476, 42+i*20);
					this->labelLEFT[i]->Size = System::Drawing::Size(12, 14);
					this->labelLEFT[i]->Text = System::Convert::ToString((inputT/inputM)*(i-1));
					this->Controls->Add(labelLEFT[i]);

				 }
			 }
			 for (int i=0; i<inputM+1; i++) {
				for(int j=0; j<countY; j++) { 
                    this->textBoxYij[i, j] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxYij[i,j]->Size = System::Drawing::Size(70, 20);
                    this->textBoxYij[i,j]->Location = Point(516+j*70, 62+i*20);
					this->textBoxYij[i,j]->Text = System::Convert::ToString(floor(Yres[i][j]*10000)/10000);
					this->textBoxYij[i,j]->ReadOnly = true;
                    this->Controls->Add(textBoxYij[i,j]);
				}
			 }
			 prevcountLEFT = inputM+2;

		 }
		 }

private: System::Void ñïåêòðÌîùíîñòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (selector != 0) {
			 inputT = System::Convert::ToDouble(textBoxT -> Text);
			 double inputH = System::Convert::ToDouble(textBoxMC -> Text);
			 double *a0 = new double [countA];
			 for (int i = 0; i < countA; i++) {
				 a0[i] =  System::Convert::ToDouble(textBoxM[i] -> Text);
			 }
			 double *y0 = new double [countY];
			 for (int i = 0; i < countY; i++) {
				 y0[i] =  System::Convert::ToDouble(textBoxMz[i] -> Text);
			 }
			 double **Yres;
			 double **SP;
			 inputM = inputT/inputH;
			 /*---------------------------------------------------------------------------*/
			 //
				Yres = RungeKutt(a0, y0, countY, countA, inputT, inputM, selector);
				SP = SpectrumFunc(Yres, inputM+1, countY, countA);
			 //
			 /*---------------------------------------------------------------------------*/

			 if (prevcountUP != 0) {
				for(int i=0;i<prevcountUP;i++){
						//this->textBoxUP[i]->~TextBox();
						this->labelUPY[i] -> ~Label();
						this->labelUPC[i] -> ~Label();
						this->labelUPT[i] -> ~Label();
				}
			 }
			 if (spectrumflag != 0) {
				 for(int i=0;i<prevcountUP;i++){
						//this->textBoxUP[i]->~TextBox();
						this->labelSP[i] -> ~Label();
				}
			 }
			 if (prevcountLEFT != 0) {
				for(int i=0;i<prevcountLEFT;i++){
						//this->textBoxUP[i]->~TextBox();
						this->labelLEFT[i] -> ~Label();
				}
			 }
			 if ((prevcountLEFT != 0) && (prevcountUP != 0)) {
				 for(int i=0;i<prevcountLEFT - 1;i++) {
					 for(int j=0;j<prevcountUP;j++){
						 this->textBoxYij[i,j]->~TextBox();
					 }
				 }
			 }
			 spectrumflag = 1;

			 //int count = System::Convert::ToDouble(textBox5 -> Text);
			 //prevcountUP = ++countY;
			 //this->textBoxUP = gcnew array<System::Windows::Forms::TextBox^ >(countY+1) ;
			 this->labelUPT = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelUPC = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelUPY = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelSP = gcnew array<System::Windows::Forms::Label^ >(countY) ;
			 this->labelLEFT = gcnew array<System::Windows::Forms::Label^ >(inputM+2) ;
			 this->textBoxYij = gcnew array<System::Windows::Forms::TextBox^, 2>(inputM+1, countY) ;


			 for(int i=0; i<countY; i++) { 
					this->labelSP[i] = (gcnew System::Windows::Forms::Label());
					this->labelSP[i]->AutoSize = true;
					this->labelSP[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelSP[i]->Location = System::Drawing::Point(516+i*70, 28);
					this->labelSP[i]->Size = System::Drawing::Size(12, 14);
					this->labelSP[i]->Text = L"ñïåêòð";
					this->Controls->Add(labelSP[i]);
					/*------------------------------------------------------*/
					this->labelUPY[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPY[i]->AutoSize = true;
					this->labelUPY[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPY[i]->Location = System::Drawing::Point(516+i*70, 42);
					this->labelUPY[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPY[i]->Text = L"y";
					this->Controls->Add(labelUPY[i]);
					/*-------------------------------------------------------*/
					this->labelUPC[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPC[i]->AutoSize = true;
					this->labelUPC[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPC[i]->Location = System::Drawing::Point(526+i*70, 42);
					this->labelUPC[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPC[i]->Text = System::Convert::ToString(i+1);
					this->Controls->Add(labelUPC[i]);
					/*--------------------------------------------------------*/
					this->labelUPT[i] = (gcnew System::Windows::Forms::Label());
					this->labelUPT[i]->AutoSize = true;
					this->labelUPT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelUPT[i]->Location = System::Drawing::Point(536+i*70, 42);
					this->labelUPT[i]->Size = System::Drawing::Size(12, 14);
					this->labelUPT[i]->Text = L"( t)";
					this->Controls->Add(labelUPT[i]);
				 }
			 prevcountUP = countY;
			 for(int i=0; i<inputM+2; i++) { 
				if (i == 0) {
					this->labelLEFT[i] = (gcnew System::Windows::Forms::Label());
					this->labelLEFT[i]->AutoSize = true;
					this->labelLEFT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelLEFT[i]->Location = System::Drawing::Point(476, 42+i*20);
					this->labelLEFT[i]->Size = System::Drawing::Size(12, 14);
					this->labelLEFT[i]->Text = L"t";
					this->Controls->Add(labelLEFT[i]);
				 }
				else {
					this->labelLEFT[i] = (gcnew System::Windows::Forms::Label());
					this->labelLEFT[i]->AutoSize = true;
					this->labelLEFT[i]->BackColor = System::Drawing::SystemColors::ControlLightLight;
					this->labelLEFT[i]->Location = System::Drawing::Point(476, 42+i*20);
					this->labelLEFT[i]->Size = System::Drawing::Size(12, 14);
					this->labelLEFT[i]->Text = System::Convert::ToString((inputT/inputM)*(i-1));
					this->Controls->Add(labelLEFT[i]);

				 }
			 }
			 for (int i=0; i<inputM+1; i++) {
				for(int j=0; j<countY; j++) { 
                    this->textBoxYij[i, j] = (gcnew System::Windows::Forms::TextBox());
                    this->textBoxYij[i,j]->Size = System::Drawing::Size(70, 20);
                    this->textBoxYij[i,j]->Location = Point(516+j*70, 62+i*20);
					this->textBoxYij[i,j]->Text = System::Convert::ToString(floor(SP[i][j]*10000)/10000);
					this->textBoxYij[i,j]->ReadOnly = true;
                    this->Controls->Add(textBoxYij[i,j]);
				}
			 }
			 prevcountLEFT = inputM+2;

		 }
		 }
};
}


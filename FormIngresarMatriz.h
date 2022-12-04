#pragma once
#include "FormRedOptima.h"

namespace RedDeFlujos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormIngresarMatriz : public System::Windows::Forms::Form
	{
	private:
		int n;
	public:
		FormIngresarMatriz(int n)
		{
			InitializeComponent();
			this->n = n;
			ActivarTextBox();
		}

	protected:
		~FormIngresarMatriz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox12;
	protected:
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox45;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label1_2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label2_1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label3_1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label5_1;
	private: System::Windows::Forms::Label^ label4_1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox46;
	private: System::Windows::Forms::TextBox^ textBox47;
	private: System::Windows::Forms::TextBox^ textBox56;
	private: System::Windows::Forms::TextBox^ textBox57;
	private: System::Windows::Forms::TextBox^ textBox67;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label6_1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label7_1;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::TextBox^ textBox48;
	private: System::Windows::Forms::TextBox^ textBox58;
	private: System::Windows::Forms::TextBox^ textBox68;
	private: System::Windows::Forms::TextBox^ textBox78;
	private: System::Windows::Forms::Label^ label8_1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9_1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox89;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::TextBox^ textBox59;
	private: System::Windows::Forms::TextBox^ textBox69;
	private: System::Windows::Forms::TextBox^ textBox79;
	private: System::Windows::Forms::TextBox^ textBox110;
	private: System::Windows::Forms::TextBox^ textBox111;
	private: System::Windows::Forms::TextBox^ textBox112;
	private: System::Windows::Forms::TextBox^ textBox113;
	private: System::Windows::Forms::TextBox^ textBox114;
	private: System::Windows::Forms::TextBox^ textBox115;
	private: System::Windows::Forms::Label^ label10_1;
	private: System::Windows::Forms::Label^ label11_1;
	private: System::Windows::Forms::Label^ label12_1;
	private: System::Windows::Forms::Label^ label13_1;
	private: System::Windows::Forms::Label^ label14_1;
	private: System::Windows::Forms::Label^ label15_1;
	private: System::Windows::Forms::TextBox^ textBox210;
	private: System::Windows::Forms::TextBox^ textBox310;
	private: System::Windows::Forms::TextBox^ textBox410;
	private: System::Windows::Forms::TextBox^ textBox510;
	private: System::Windows::Forms::TextBox^ textBox610;
	private: System::Windows::Forms::TextBox^ textBox710;
	private: System::Windows::Forms::TextBox^ textBox810;
	private: System::Windows::Forms::TextBox^ textBox910;
	private: System::Windows::Forms::TextBox^ textBox211;









private: System::Windows::Forms::TextBox^ textBox311;

private: System::Windows::Forms::TextBox^ textBox411;

private: System::Windows::Forms::TextBox^ textBox511;

private: System::Windows::Forms::TextBox^ textBox611;

private: System::Windows::Forms::TextBox^ textBox711;

private: System::Windows::Forms::TextBox^ textBox811;

private: System::Windows::Forms::TextBox^ textBox911;
private: System::Windows::Forms::TextBox^ textBox212;
private: System::Windows::Forms::TextBox^ textBox312;
private: System::Windows::Forms::TextBox^ textBox412;




private: System::Windows::Forms::TextBox^ textBox1011;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBox512;
private: System::Windows::Forms::TextBox^ textBox612;
private: System::Windows::Forms::TextBox^ textBox712;
private: System::Windows::Forms::TextBox^ textBox812;
private: System::Windows::Forms::TextBox^ textBox912;
private: System::Windows::Forms::TextBox^ textBox1012;
private: System::Windows::Forms::TextBox^ textBox1112;
private: System::Windows::Forms::TextBox^ textBox213;
private: System::Windows::Forms::TextBox^ textBox413;









private: System::Windows::Forms::TextBox^ textBox313;
private: System::Windows::Forms::TextBox^ textBox513;
private: System::Windows::Forms::TextBox^ textBox613;
private: System::Windows::Forms::TextBox^ textBox713;
private: System::Windows::Forms::TextBox^ textBox813;
private: System::Windows::Forms::TextBox^ textBox913;
private: System::Windows::Forms::TextBox^ textBox1013;
private: System::Windows::Forms::TextBox^ textBox1113;
private: System::Windows::Forms::TextBox^ textBox1213;
private: System::Windows::Forms::TextBox^ textBox214;
private: System::Windows::Forms::TextBox^ textBox314;
private: System::Windows::Forms::TextBox^ textBox414;
private: System::Windows::Forms::TextBox^ textBox514;
private: System::Windows::Forms::TextBox^ textBox614;
private: System::Windows::Forms::TextBox^ textBox714;
private: System::Windows::Forms::TextBox^ textBox814;
private: System::Windows::Forms::TextBox^ textBox914;
private: System::Windows::Forms::TextBox^ textBox1014;
private: System::Windows::Forms::TextBox^ textBox1114;
private: System::Windows::Forms::TextBox^ textBox1214;
private: System::Windows::Forms::TextBox^ textBox1314;
private: System::Windows::Forms::TextBox^ textBox1315;






















private: System::Windows::Forms::TextBox^ textBox215;
private: System::Windows::Forms::TextBox^ textBox315;
private: System::Windows::Forms::TextBox^ textBox415;
private: System::Windows::Forms::TextBox^ textBox515;
private: System::Windows::Forms::TextBox^ textBox615;
private: System::Windows::Forms::TextBox^ textBox715;
private: System::Windows::Forms::TextBox^ textBox815;
private: System::Windows::Forms::TextBox^ textBox915;
private: System::Windows::Forms::TextBox^ textBox1015;
private: System::Windows::Forms::TextBox^ textBox1115;
private: System::Windows::Forms::TextBox^ textBox1215;
private: System::Windows::Forms::TextBox^ textBox1415;












private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
	private: System::ComponentModel::IContainer^ components;

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label1_2 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label2_1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label3_1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label5_1 = (gcnew System::Windows::Forms::Label());
			this->label4_1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label6_1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label7_1 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->label8_1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9_1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox110 = (gcnew System::Windows::Forms::TextBox());
			this->textBox111 = (gcnew System::Windows::Forms::TextBox());
			this->textBox112 = (gcnew System::Windows::Forms::TextBox());
			this->textBox113 = (gcnew System::Windows::Forms::TextBox());
			this->textBox114 = (gcnew System::Windows::Forms::TextBox());
			this->textBox115 = (gcnew System::Windows::Forms::TextBox());
			this->label10_1 = (gcnew System::Windows::Forms::Label());
			this->label11_1 = (gcnew System::Windows::Forms::Label());
			this->label12_1 = (gcnew System::Windows::Forms::Label());
			this->label13_1 = (gcnew System::Windows::Forms::Label());
			this->label14_1 = (gcnew System::Windows::Forms::Label());
			this->label15_1 = (gcnew System::Windows::Forms::Label());
			this->textBox210 = (gcnew System::Windows::Forms::TextBox());
			this->textBox310 = (gcnew System::Windows::Forms::TextBox());
			this->textBox410 = (gcnew System::Windows::Forms::TextBox());
			this->textBox510 = (gcnew System::Windows::Forms::TextBox());
			this->textBox610 = (gcnew System::Windows::Forms::TextBox());
			this->textBox710 = (gcnew System::Windows::Forms::TextBox());
			this->textBox810 = (gcnew System::Windows::Forms::TextBox());
			this->textBox910 = (gcnew System::Windows::Forms::TextBox());
			this->textBox211 = (gcnew System::Windows::Forms::TextBox());
			this->textBox311 = (gcnew System::Windows::Forms::TextBox());
			this->textBox411 = (gcnew System::Windows::Forms::TextBox());
			this->textBox511 = (gcnew System::Windows::Forms::TextBox());
			this->textBox611 = (gcnew System::Windows::Forms::TextBox());
			this->textBox711 = (gcnew System::Windows::Forms::TextBox());
			this->textBox811 = (gcnew System::Windows::Forms::TextBox());
			this->textBox911 = (gcnew System::Windows::Forms::TextBox());
			this->textBox212 = (gcnew System::Windows::Forms::TextBox());
			this->textBox312 = (gcnew System::Windows::Forms::TextBox());
			this->textBox412 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1011 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox512 = (gcnew System::Windows::Forms::TextBox());
			this->textBox612 = (gcnew System::Windows::Forms::TextBox());
			this->textBox712 = (gcnew System::Windows::Forms::TextBox());
			this->textBox812 = (gcnew System::Windows::Forms::TextBox());
			this->textBox912 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1012 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1112 = (gcnew System::Windows::Forms::TextBox());
			this->textBox213 = (gcnew System::Windows::Forms::TextBox());
			this->textBox413 = (gcnew System::Windows::Forms::TextBox());
			this->textBox313 = (gcnew System::Windows::Forms::TextBox());
			this->textBox513 = (gcnew System::Windows::Forms::TextBox());
			this->textBox613 = (gcnew System::Windows::Forms::TextBox());
			this->textBox713 = (gcnew System::Windows::Forms::TextBox());
			this->textBox813 = (gcnew System::Windows::Forms::TextBox());
			this->textBox913 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1013 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1113 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1213 = (gcnew System::Windows::Forms::TextBox());
			this->textBox214 = (gcnew System::Windows::Forms::TextBox());
			this->textBox314 = (gcnew System::Windows::Forms::TextBox());
			this->textBox414 = (gcnew System::Windows::Forms::TextBox());
			this->textBox514 = (gcnew System::Windows::Forms::TextBox());
			this->textBox614 = (gcnew System::Windows::Forms::TextBox());
			this->textBox714 = (gcnew System::Windows::Forms::TextBox());
			this->textBox814 = (gcnew System::Windows::Forms::TextBox());
			this->textBox914 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1014 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1114 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1214 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1314 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1315 = (gcnew System::Windows::Forms::TextBox());
			this->textBox215 = (gcnew System::Windows::Forms::TextBox());
			this->textBox315 = (gcnew System::Windows::Forms::TextBox());
			this->textBox415 = (gcnew System::Windows::Forms::TextBox());
			this->textBox515 = (gcnew System::Windows::Forms::TextBox());
			this->textBox615 = (gcnew System::Windows::Forms::TextBox());
			this->textBox715 = (gcnew System::Windows::Forms::TextBox());
			this->textBox815 = (gcnew System::Windows::Forms::TextBox());
			this->textBox915 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1015 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1115 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1215 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1415 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(213, 103);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(59, 33);
			this->textBox12->TabIndex = 0;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(278, 103);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(59, 33);
			this->textBox13->TabIndex = 1;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(343, 103);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(59, 33);
			this->textBox14->TabIndex = 2;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(408, 103);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(59, 33);
			this->textBox15->TabIndex = 3;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(278, 142);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(59, 33);
			this->textBox23->TabIndex = 4;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(343, 142);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(59, 33);
			this->textBox24->TabIndex = 5;
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(408, 142);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(59, 33);
			this->textBox25->TabIndex = 6;
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox34->Location = System::Drawing::Point(343, 181);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(59, 33);
			this->textBox34->TabIndex = 7;
			// 
			// textBox35
			// 
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox35->Location = System::Drawing::Point(408, 181);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(59, 33);
			this->textBox35->TabIndex = 8;
			// 
			// textBox45
			// 
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox45->Location = System::Drawing::Point(408, 220);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(59, 33);
			this->textBox45->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(102, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"1";
			// 
			// label1_2
			// 
			this->label1_2->AutoSize = true;
			this->label1_2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1_2->Location = System::Drawing::Point(167, 67);
			this->label1_2->Name = L"label1_2";
			this->label1_2->Size = System::Drawing::Size(19, 21);
			this->label1_2->TabIndex = 11;
			this->label1_2->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(102, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"2";
			// 
			// label2_1
			// 
			this->label2_1->AutoSize = true;
			this->label2_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2_1->Location = System::Drawing::Point(233, 67);
			this->label2_1->Name = L"label2_1";
			this->label2_1->Size = System::Drawing::Size(19, 21);
			this->label2_1->TabIndex = 13;
			this->label2_1->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(102, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 21);
			this->label3->TabIndex = 14;
			this->label3->Text = L"3";
			// 
			// label3_1
			// 
			this->label3_1->AutoSize = true;
			this->label3_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3_1->Location = System::Drawing::Point(299, 67);
			this->label3_1->Name = L"label3_1";
			this->label3_1->Size = System::Drawing::Size(19, 21);
			this->label3_1->TabIndex = 15;
			this->label3_1->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(102, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 21);
			this->label4->TabIndex = 16;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(102, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 21);
			this->label5->TabIndex = 17;
			this->label5->Text = L"5";
			// 
			// label5_1
			// 
			this->label5_1->AutoSize = true;
			this->label5_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5_1->Location = System::Drawing::Point(428, 67);
			this->label5_1->Name = L"label5_1";
			this->label5_1->Size = System::Drawing::Size(19, 21);
			this->label5_1->TabIndex = 18;
			this->label5_1->Text = L"5";
			// 
			// label4_1
			// 
			this->label4_1->AutoSize = true;
			this->label4_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4_1->Location = System::Drawing::Point(365, 67);
			this->label4_1->Name = L"label4_1";
			this->label4_1->Size = System::Drawing::Size(19, 21);
			this->label4_1->TabIndex = 19;
			this->label4_1->Text = L"4";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(629, 644);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(242, 76);
			this->button1->TabIndex = 20;
			this->button1->Text = L"GENERAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormIngresarMatriz::button1_Click);
			// 
			// textBox16
			// 
			this->textBox16->Enabled = false;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(473, 103);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(59, 33);
			this->textBox16->TabIndex = 21;
			// 
			// textBox17
			// 
			this->textBox17->Enabled = false;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(538, 103);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(59, 33);
			this->textBox17->TabIndex = 22;
			// 
			// textBox26
			// 
			this->textBox26->Enabled = false;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->Location = System::Drawing::Point(473, 142);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(59, 33);
			this->textBox26->TabIndex = 23;
			// 
			// textBox27
			// 
			this->textBox27->Enabled = false;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox27->Location = System::Drawing::Point(538, 142);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(59, 33);
			this->textBox27->TabIndex = 24;
			// 
			// textBox36
			// 
			this->textBox36->Enabled = false;
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox36->Location = System::Drawing::Point(473, 181);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(59, 33);
			this->textBox36->TabIndex = 25;
			// 
			// textBox37
			// 
			this->textBox37->Enabled = false;
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox37->Location = System::Drawing::Point(538, 181);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(59, 33);
			this->textBox37->TabIndex = 26;
			// 
			// textBox46
			// 
			this->textBox46->Enabled = false;
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox46->Location = System::Drawing::Point(473, 220);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(59, 33);
			this->textBox46->TabIndex = 27;
			// 
			// textBox47
			// 
			this->textBox47->Enabled = false;
			this->textBox47->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox47->Location = System::Drawing::Point(538, 220);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(59, 33);
			this->textBox47->TabIndex = 28;
			// 
			// textBox56
			// 
			this->textBox56->Enabled = false;
			this->textBox56->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox56->Location = System::Drawing::Point(473, 259);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(59, 33);
			this->textBox56->TabIndex = 29;
			// 
			// textBox57
			// 
			this->textBox57->Enabled = false;
			this->textBox57->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox57->Location = System::Drawing::Point(538, 259);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(59, 33);
			this->textBox57->TabIndex = 30;
			// 
			// textBox67
			// 
			this->textBox67->Enabled = false;
			this->textBox67->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox67->Location = System::Drawing::Point(538, 298);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(59, 33);
			this->textBox67->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(102, 310);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 21);
			this->label6->TabIndex = 32;
			this->label6->Text = L"6";
			// 
			// label6_1
			// 
			this->label6_1->AutoSize = true;
			this->label6_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6_1->Location = System::Drawing::Point(494, 67);
			this->label6_1->Name = L"label6_1";
			this->label6_1->Size = System::Drawing::Size(19, 21);
			this->label6_1->TabIndex = 33;
			this->label6_1->Text = L"6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(102, 346);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 21);
			this->label7->TabIndex = 34;
			this->label7->Text = L"7";
			// 
			// label7_1
			// 
			this->label7_1->AutoSize = true;
			this->label7_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7_1->Location = System::Drawing::Point(556, 67);
			this->label7_1->Name = L"label7_1";
			this->label7_1->Size = System::Drawing::Size(19, 21);
			this->label7_1->TabIndex = 35;
			this->label7_1->Text = L"7";
			// 
			// textBox18
			// 
			this->textBox18->Enabled = false;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(603, 103);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(59, 33);
			this->textBox18->TabIndex = 36;
			// 
			// textBox28
			// 
			this->textBox28->Enabled = false;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox28->Location = System::Drawing::Point(603, 142);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(59, 33);
			this->textBox28->TabIndex = 37;
			// 
			// textBox38
			// 
			this->textBox38->Enabled = false;
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox38->Location = System::Drawing::Point(603, 181);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(59, 33);
			this->textBox38->TabIndex = 38;
			// 
			// textBox48
			// 
			this->textBox48->Enabled = false;
			this->textBox48->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox48->Location = System::Drawing::Point(603, 220);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(59, 33);
			this->textBox48->TabIndex = 39;
			// 
			// textBox58
			// 
			this->textBox58->Enabled = false;
			this->textBox58->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox58->Location = System::Drawing::Point(603, 259);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(59, 33);
			this->textBox58->TabIndex = 40;
			// 
			// textBox68
			// 
			this->textBox68->Enabled = false;
			this->textBox68->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox68->Location = System::Drawing::Point(603, 298);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(59, 33);
			this->textBox68->TabIndex = 41;
			// 
			// textBox78
			// 
			this->textBox78->Enabled = false;
			this->textBox78->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox78->Location = System::Drawing::Point(603, 337);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(59, 33);
			this->textBox78->TabIndex = 42;
			// 
			// label8_1
			// 
			this->label8_1->AutoSize = true;
			this->label8_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8_1->Location = System::Drawing::Point(625, 67);
			this->label8_1->Name = L"label8_1";
			this->label8_1->Size = System::Drawing::Size(19, 21);
			this->label8_1->TabIndex = 43;
			this->label8_1->Text = L"8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(102, 381);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 21);
			this->label8->TabIndex = 44;
			this->label8->Text = L"8";
			// 
			// label9_1
			// 
			this->label9_1->AutoSize = true;
			this->label9_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9_1->Location = System::Drawing::Point(689, 67);
			this->label9_1->Name = L"label9_1";
			this->label9_1->Size = System::Drawing::Size(19, 21);
			this->label9_1->TabIndex = 45;
			this->label9_1->Text = L"9";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(102, 428);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 21);
			this->label9->TabIndex = 46;
			this->label9->Text = L"9";
			// 
			// textBox89
			// 
			this->textBox89->Enabled = false;
			this->textBox89->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox89->Location = System::Drawing::Point(668, 378);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(59, 33);
			this->textBox89->TabIndex = 47;
			// 
			// textBox19
			// 
			this->textBox19->Enabled = false;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(668, 103);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(59, 33);
			this->textBox19->TabIndex = 48;
			// 
			// textBox29
			// 
			this->textBox29->Enabled = false;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox29->Location = System::Drawing::Point(668, 142);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(59, 33);
			this->textBox29->TabIndex = 49;
			// 
			// textBox39
			// 
			this->textBox39->Enabled = false;
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox39->Location = System::Drawing::Point(668, 181);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(59, 33);
			this->textBox39->TabIndex = 50;
			// 
			// textBox49
			// 
			this->textBox49->Enabled = false;
			this->textBox49->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox49->Location = System::Drawing::Point(668, 220);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(59, 33);
			this->textBox49->TabIndex = 51;
			// 
			// textBox59
			// 
			this->textBox59->Enabled = false;
			this->textBox59->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox59->Location = System::Drawing::Point(668, 259);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(59, 33);
			this->textBox59->TabIndex = 52;
			// 
			// textBox69
			// 
			this->textBox69->Enabled = false;
			this->textBox69->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox69->Location = System::Drawing::Point(668, 298);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(59, 33);
			this->textBox69->TabIndex = 53;
			// 
			// textBox79
			// 
			this->textBox79->Enabled = false;
			this->textBox79->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox79->Location = System::Drawing::Point(668, 339);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(59, 33);
			this->textBox79->TabIndex = 54;
			// 
			// textBox110
			// 
			this->textBox110->Enabled = false;
			this->textBox110->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox110->Location = System::Drawing::Point(733, 103);
			this->textBox110->Name = L"textBox110";
			this->textBox110->Size = System::Drawing::Size(59, 33);
			this->textBox110->TabIndex = 55;
			// 
			// textBox111
			// 
			this->textBox111->Enabled = false;
			this->textBox111->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox111->Location = System::Drawing::Point(798, 103);
			this->textBox111->Name = L"textBox111";
			this->textBox111->Size = System::Drawing::Size(59, 33);
			this->textBox111->TabIndex = 56;
			// 
			// textBox112
			// 
			this->textBox112->Enabled = false;
			this->textBox112->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox112->Location = System::Drawing::Point(863, 103);
			this->textBox112->Name = L"textBox112";
			this->textBox112->Size = System::Drawing::Size(59, 33);
			this->textBox112->TabIndex = 57;
			// 
			// textBox113
			// 
			this->textBox113->Enabled = false;
			this->textBox113->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox113->Location = System::Drawing::Point(928, 103);
			this->textBox113->Name = L"textBox113";
			this->textBox113->Size = System::Drawing::Size(59, 33);
			this->textBox113->TabIndex = 58;
			// 
			// textBox114
			// 
			this->textBox114->Enabled = false;
			this->textBox114->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox114->Location = System::Drawing::Point(993, 103);
			this->textBox114->Name = L"textBox114";
			this->textBox114->Size = System::Drawing::Size(59, 33);
			this->textBox114->TabIndex = 59;
			// 
			// textBox115
			// 
			this->textBox115->Enabled = false;
			this->textBox115->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox115->Location = System::Drawing::Point(1058, 103);
			this->textBox115->Name = L"textBox115";
			this->textBox115->Size = System::Drawing::Size(59, 33);
			this->textBox115->TabIndex = 60;
			// 
			// label10_1
			// 
			this->label10_1->AutoSize = true;
			this->label10_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10_1->Location = System::Drawing::Point(749, 67);
			this->label10_1->Name = L"label10_1";
			this->label10_1->Size = System::Drawing::Size(28, 21);
			this->label10_1->TabIndex = 61;
			this->label10_1->Text = L"10";
			// 
			// label11_1
			// 
			this->label11_1->AutoSize = true;
			this->label11_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11_1->Location = System::Drawing::Point(809, 67);
			this->label11_1->Name = L"label11_1";
			this->label11_1->Size = System::Drawing::Size(28, 21);
			this->label11_1->TabIndex = 62;
			this->label11_1->Text = L"11";
			// 
			// label12_1
			// 
			this->label12_1->AutoSize = true;
			this->label12_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12_1->Location = System::Drawing::Point(877, 67);
			this->label12_1->Name = L"label12_1";
			this->label12_1->Size = System::Drawing::Size(28, 21);
			this->label12_1->TabIndex = 63;
			this->label12_1->Text = L"12";
			// 
			// label13_1
			// 
			this->label13_1->AutoSize = true;
			this->label13_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13_1->Location = System::Drawing::Point(939, 67);
			this->label13_1->Name = L"label13_1";
			this->label13_1->Size = System::Drawing::Size(28, 21);
			this->label13_1->TabIndex = 64;
			this->label13_1->Text = L"13";
			// 
			// label14_1
			// 
			this->label14_1->AutoSize = true;
			this->label14_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14_1->Location = System::Drawing::Point(1007, 67);
			this->label14_1->Name = L"label14_1";
			this->label14_1->Size = System::Drawing::Size(28, 21);
			this->label14_1->TabIndex = 65;
			this->label14_1->Text = L"14";
			// 
			// label15_1
			// 
			this->label15_1->AutoSize = true;
			this->label15_1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15_1->Location = System::Drawing::Point(1074, 67);
			this->label15_1->Name = L"label15_1";
			this->label15_1->Size = System::Drawing::Size(28, 21);
			this->label15_1->TabIndex = 66;
			this->label15_1->Text = L"15";
			// 
			// textBox210
			// 
			this->textBox210->Enabled = false;
			this->textBox210->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox210->Location = System::Drawing::Point(733, 142);
			this->textBox210->Name = L"textBox210";
			this->textBox210->Size = System::Drawing::Size(59, 33);
			this->textBox210->TabIndex = 67;
			// 
			// textBox310
			// 
			this->textBox310->Enabled = false;
			this->textBox310->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox310->Location = System::Drawing::Point(733, 181);
			this->textBox310->Name = L"textBox310";
			this->textBox310->Size = System::Drawing::Size(59, 33);
			this->textBox310->TabIndex = 68;
			// 
			// textBox410
			// 
			this->textBox410->Enabled = false;
			this->textBox410->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox410->Location = System::Drawing::Point(733, 220);
			this->textBox410->Name = L"textBox410";
			this->textBox410->Size = System::Drawing::Size(59, 33);
			this->textBox410->TabIndex = 69;
			// 
			// textBox510
			// 
			this->textBox510->Enabled = false;
			this->textBox510->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox510->Location = System::Drawing::Point(733, 259);
			this->textBox510->Name = L"textBox510";
			this->textBox510->Size = System::Drawing::Size(59, 33);
			this->textBox510->TabIndex = 70;
			// 
			// textBox610
			// 
			this->textBox610->Enabled = false;
			this->textBox610->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox610->Location = System::Drawing::Point(733, 298);
			this->textBox610->Name = L"textBox610";
			this->textBox610->Size = System::Drawing::Size(59, 33);
			this->textBox610->TabIndex = 71;
			// 
			// textBox710
			// 
			this->textBox710->Enabled = false;
			this->textBox710->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox710->Location = System::Drawing::Point(733, 339);
			this->textBox710->Name = L"textBox710";
			this->textBox710->Size = System::Drawing::Size(59, 33);
			this->textBox710->TabIndex = 72;
			// 
			// textBox810
			// 
			this->textBox810->Enabled = false;
			this->textBox810->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox810->Location = System::Drawing::Point(733, 378);
			this->textBox810->Name = L"textBox810";
			this->textBox810->Size = System::Drawing::Size(59, 33);
			this->textBox810->TabIndex = 73;
			// 
			// textBox910
			// 
			this->textBox910->Enabled = false;
			this->textBox910->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox910->Location = System::Drawing::Point(733, 416);
			this->textBox910->Name = L"textBox910";
			this->textBox910->Size = System::Drawing::Size(59, 33);
			this->textBox910->TabIndex = 74;
			// 
			// textBox211
			// 
			this->textBox211->Enabled = false;
			this->textBox211->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox211->Location = System::Drawing::Point(798, 142);
			this->textBox211->Name = L"textBox211";
			this->textBox211->Size = System::Drawing::Size(59, 33);
			this->textBox211->TabIndex = 75;
			// 
			// textBox311
			// 
			this->textBox311->Enabled = false;
			this->textBox311->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox311->Location = System::Drawing::Point(798, 181);
			this->textBox311->Name = L"textBox311";
			this->textBox311->Size = System::Drawing::Size(59, 33);
			this->textBox311->TabIndex = 76;
			// 
			// textBox411
			// 
			this->textBox411->Enabled = false;
			this->textBox411->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox411->Location = System::Drawing::Point(798, 220);
			this->textBox411->Name = L"textBox411";
			this->textBox411->Size = System::Drawing::Size(59, 33);
			this->textBox411->TabIndex = 77;
			// 
			// textBox511
			// 
			this->textBox511->Enabled = false;
			this->textBox511->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox511->Location = System::Drawing::Point(798, 259);
			this->textBox511->Name = L"textBox511";
			this->textBox511->Size = System::Drawing::Size(59, 33);
			this->textBox511->TabIndex = 78;
			// 
			// textBox611
			// 
			this->textBox611->Enabled = false;
			this->textBox611->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox611->Location = System::Drawing::Point(798, 298);
			this->textBox611->Name = L"textBox611";
			this->textBox611->Size = System::Drawing::Size(59, 33);
			this->textBox611->TabIndex = 79;
			// 
			// textBox711
			// 
			this->textBox711->Enabled = false;
			this->textBox711->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox711->Location = System::Drawing::Point(798, 339);
			this->textBox711->Name = L"textBox711";
			this->textBox711->Size = System::Drawing::Size(59, 33);
			this->textBox711->TabIndex = 80;
			// 
			// textBox811
			// 
			this->textBox811->Enabled = false;
			this->textBox811->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox811->Location = System::Drawing::Point(798, 378);
			this->textBox811->Name = L"textBox811";
			this->textBox811->Size = System::Drawing::Size(59, 33);
			this->textBox811->TabIndex = 81;
			// 
			// textBox911
			// 
			this->textBox911->Enabled = false;
			this->textBox911->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox911->Location = System::Drawing::Point(798, 416);
			this->textBox911->Name = L"textBox911";
			this->textBox911->Size = System::Drawing::Size(59, 33);
			this->textBox911->TabIndex = 82;
			// 
			// textBox212
			// 
			this->textBox212->Enabled = false;
			this->textBox212->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox212->Location = System::Drawing::Point(863, 142);
			this->textBox212->Name = L"textBox212";
			this->textBox212->Size = System::Drawing::Size(59, 33);
			this->textBox212->TabIndex = 83;
			// 
			// textBox312
			// 
			this->textBox312->Enabled = false;
			this->textBox312->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox312->Location = System::Drawing::Point(863, 181);
			this->textBox312->Name = L"textBox312";
			this->textBox312->Size = System::Drawing::Size(59, 33);
			this->textBox312->TabIndex = 84;
			// 
			// textBox412
			// 
			this->textBox412->Enabled = false;
			this->textBox412->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox412->Location = System::Drawing::Point(863, 220);
			this->textBox412->Name = L"textBox412";
			this->textBox412->Size = System::Drawing::Size(59, 33);
			this->textBox412->TabIndex = 85;
			// 
			// textBox1011
			// 
			this->textBox1011->Enabled = false;
			this->textBox1011->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1011->Location = System::Drawing::Point(798, 455);
			this->textBox1011->Name = L"textBox1011";
			this->textBox1011->Size = System::Drawing::Size(59, 33);
			this->textBox1011->TabIndex = 86;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(102, 467);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 21);
			this->label10->TabIndex = 87;
			this->label10->Text = L"10";
			// 
			// textBox512
			// 
			this->textBox512->Enabled = false;
			this->textBox512->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox512->Location = System::Drawing::Point(863, 259);
			this->textBox512->Name = L"textBox512";
			this->textBox512->Size = System::Drawing::Size(59, 33);
			this->textBox512->TabIndex = 88;
			// 
			// textBox612
			// 
			this->textBox612->Enabled = false;
			this->textBox612->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox612->Location = System::Drawing::Point(863, 298);
			this->textBox612->Name = L"textBox612";
			this->textBox612->Size = System::Drawing::Size(59, 33);
			this->textBox612->TabIndex = 89;
			// 
			// textBox712
			// 
			this->textBox712->Enabled = false;
			this->textBox712->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox712->Location = System::Drawing::Point(863, 339);
			this->textBox712->Name = L"textBox712";
			this->textBox712->Size = System::Drawing::Size(59, 33);
			this->textBox712->TabIndex = 90;
			// 
			// textBox812
			// 
			this->textBox812->Enabled = false;
			this->textBox812->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox812->Location = System::Drawing::Point(863, 378);
			this->textBox812->Name = L"textBox812";
			this->textBox812->Size = System::Drawing::Size(59, 33);
			this->textBox812->TabIndex = 91;
			// 
			// textBox912
			// 
			this->textBox912->Enabled = false;
			this->textBox912->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox912->Location = System::Drawing::Point(863, 416);
			this->textBox912->Name = L"textBox912";
			this->textBox912->Size = System::Drawing::Size(59, 33);
			this->textBox912->TabIndex = 92;
			// 
			// textBox1012
			// 
			this->textBox1012->Enabled = false;
			this->textBox1012->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1012->Location = System::Drawing::Point(863, 455);
			this->textBox1012->Name = L"textBox1012";
			this->textBox1012->Size = System::Drawing::Size(59, 33);
			this->textBox1012->TabIndex = 93;
			// 
			// textBox1112
			// 
			this->textBox1112->Enabled = false;
			this->textBox1112->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1112->Location = System::Drawing::Point(863, 494);
			this->textBox1112->Name = L"textBox1112";
			this->textBox1112->Size = System::Drawing::Size(59, 33);
			this->textBox1112->TabIndex = 94;
			// 
			// textBox213
			// 
			this->textBox213->Enabled = false;
			this->textBox213->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox213->Location = System::Drawing::Point(928, 142);
			this->textBox213->Name = L"textBox213";
			this->textBox213->Size = System::Drawing::Size(59, 33);
			this->textBox213->TabIndex = 95;
			// 
			// textBox413
			// 
			this->textBox413->Enabled = false;
			this->textBox413->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox413->Location = System::Drawing::Point(928, 220);
			this->textBox413->Name = L"textBox413";
			this->textBox413->Size = System::Drawing::Size(59, 33);
			this->textBox413->TabIndex = 96;
			// 
			// textBox313
			// 
			this->textBox313->Enabled = false;
			this->textBox313->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox313->Location = System::Drawing::Point(928, 181);
			this->textBox313->Name = L"textBox313";
			this->textBox313->Size = System::Drawing::Size(59, 33);
			this->textBox313->TabIndex = 96;
			// 
			// textBox513
			// 
			this->textBox513->Enabled = false;
			this->textBox513->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox513->Location = System::Drawing::Point(928, 259);
			this->textBox513->Name = L"textBox513";
			this->textBox513->Size = System::Drawing::Size(59, 33);
			this->textBox513->TabIndex = 97;
			// 
			// textBox613
			// 
			this->textBox613->Enabled = false;
			this->textBox613->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox613->Location = System::Drawing::Point(928, 298);
			this->textBox613->Name = L"textBox613";
			this->textBox613->Size = System::Drawing::Size(59, 33);
			this->textBox613->TabIndex = 98;
			// 
			// textBox713
			// 
			this->textBox713->Enabled = false;
			this->textBox713->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox713->Location = System::Drawing::Point(928, 337);
			this->textBox713->Name = L"textBox713";
			this->textBox713->Size = System::Drawing::Size(59, 33);
			this->textBox713->TabIndex = 99;
			// 
			// textBox813
			// 
			this->textBox813->Enabled = false;
			this->textBox813->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox813->Location = System::Drawing::Point(928, 376);
			this->textBox813->Name = L"textBox813";
			this->textBox813->Size = System::Drawing::Size(59, 33);
			this->textBox813->TabIndex = 100;
			// 
			// textBox913
			// 
			this->textBox913->Enabled = false;
			this->textBox913->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox913->Location = System::Drawing::Point(928, 415);
			this->textBox913->Name = L"textBox913";
			this->textBox913->Size = System::Drawing::Size(59, 33);
			this->textBox913->TabIndex = 101;
			// 
			// textBox1013
			// 
			this->textBox1013->Enabled = false;
			this->textBox1013->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1013->Location = System::Drawing::Point(928, 454);
			this->textBox1013->Name = L"textBox1013";
			this->textBox1013->Size = System::Drawing::Size(59, 33);
			this->textBox1013->TabIndex = 102;
			// 
			// textBox1113
			// 
			this->textBox1113->Enabled = false;
			this->textBox1113->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1113->Location = System::Drawing::Point(928, 494);
			this->textBox1113->Name = L"textBox1113";
			this->textBox1113->Size = System::Drawing::Size(59, 33);
			this->textBox1113->TabIndex = 103;
			// 
			// textBox1213
			// 
			this->textBox1213->Enabled = false;
			this->textBox1213->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1213->Location = System::Drawing::Point(928, 533);
			this->textBox1213->Name = L"textBox1213";
			this->textBox1213->Size = System::Drawing::Size(59, 33);
			this->textBox1213->TabIndex = 104;
			// 
			// textBox214
			// 
			this->textBox214->Enabled = false;
			this->textBox214->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox214->Location = System::Drawing::Point(993, 142);
			this->textBox214->Name = L"textBox214";
			this->textBox214->Size = System::Drawing::Size(59, 33);
			this->textBox214->TabIndex = 105;
			// 
			// textBox314
			// 
			this->textBox314->Enabled = false;
			this->textBox314->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox314->Location = System::Drawing::Point(993, 181);
			this->textBox314->Name = L"textBox314";
			this->textBox314->Size = System::Drawing::Size(59, 33);
			this->textBox314->TabIndex = 106;
			// 
			// textBox414
			// 
			this->textBox414->Enabled = false;
			this->textBox414->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox414->Location = System::Drawing::Point(993, 220);
			this->textBox414->Name = L"textBox414";
			this->textBox414->Size = System::Drawing::Size(59, 33);
			this->textBox414->TabIndex = 107;
			// 
			// textBox514
			// 
			this->textBox514->Enabled = false;
			this->textBox514->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox514->Location = System::Drawing::Point(993, 259);
			this->textBox514->Name = L"textBox514";
			this->textBox514->Size = System::Drawing::Size(59, 33);
			this->textBox514->TabIndex = 108;
			// 
			// textBox614
			// 
			this->textBox614->Enabled = false;
			this->textBox614->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox614->Location = System::Drawing::Point(993, 298);
			this->textBox614->Name = L"textBox614";
			this->textBox614->Size = System::Drawing::Size(59, 33);
			this->textBox614->TabIndex = 109;
			// 
			// textBox714
			// 
			this->textBox714->Enabled = false;
			this->textBox714->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox714->Location = System::Drawing::Point(993, 337);
			this->textBox714->Name = L"textBox714";
			this->textBox714->Size = System::Drawing::Size(59, 33);
			this->textBox714->TabIndex = 110;
			// 
			// textBox814
			// 
			this->textBox814->Enabled = false;
			this->textBox814->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox814->Location = System::Drawing::Point(993, 376);
			this->textBox814->Name = L"textBox814";
			this->textBox814->Size = System::Drawing::Size(59, 33);
			this->textBox814->TabIndex = 111;
			// 
			// textBox914
			// 
			this->textBox914->Enabled = false;
			this->textBox914->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox914->Location = System::Drawing::Point(993, 415);
			this->textBox914->Name = L"textBox914";
			this->textBox914->Size = System::Drawing::Size(59, 33);
			this->textBox914->TabIndex = 112;
			// 
			// textBox1014
			// 
			this->textBox1014->Enabled = false;
			this->textBox1014->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1014->Location = System::Drawing::Point(993, 454);
			this->textBox1014->Name = L"textBox1014";
			this->textBox1014->Size = System::Drawing::Size(59, 33);
			this->textBox1014->TabIndex = 113;
			// 
			// textBox1114
			// 
			this->textBox1114->Enabled = false;
			this->textBox1114->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1114->Location = System::Drawing::Point(993, 494);
			this->textBox1114->Name = L"textBox1114";
			this->textBox1114->Size = System::Drawing::Size(59, 33);
			this->textBox1114->TabIndex = 114;
			// 
			// textBox1214
			// 
			this->textBox1214->Enabled = false;
			this->textBox1214->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1214->Location = System::Drawing::Point(993, 533);
			this->textBox1214->Name = L"textBox1214";
			this->textBox1214->Size = System::Drawing::Size(59, 33);
			this->textBox1214->TabIndex = 115;
			// 
			// textBox1314
			// 
			this->textBox1314->Enabled = false;
			this->textBox1314->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1314->Location = System::Drawing::Point(993, 572);
			this->textBox1314->Name = L"textBox1314";
			this->textBox1314->Size = System::Drawing::Size(59, 33);
			this->textBox1314->TabIndex = 116;
			// 
			// textBox1315
			// 
			this->textBox1315->Enabled = false;
			this->textBox1315->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1315->Location = System::Drawing::Point(1058, 572);
			this->textBox1315->Name = L"textBox1315";
			this->textBox1315->Size = System::Drawing::Size(59, 33);
			this->textBox1315->TabIndex = 117;
			// 
			// textBox215
			// 
			this->textBox215->Enabled = false;
			this->textBox215->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox215->Location = System::Drawing::Point(1058, 142);
			this->textBox215->Name = L"textBox215";
			this->textBox215->Size = System::Drawing::Size(59, 33);
			this->textBox215->TabIndex = 118;
			// 
			// textBox315
			// 
			this->textBox315->Enabled = false;
			this->textBox315->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox315->Location = System::Drawing::Point(1058, 181);
			this->textBox315->Name = L"textBox315";
			this->textBox315->Size = System::Drawing::Size(59, 33);
			this->textBox315->TabIndex = 119;
			// 
			// textBox415
			// 
			this->textBox415->Enabled = false;
			this->textBox415->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox415->Location = System::Drawing::Point(1058, 220);
			this->textBox415->Name = L"textBox415";
			this->textBox415->Size = System::Drawing::Size(59, 33);
			this->textBox415->TabIndex = 120;
			// 
			// textBox515
			// 
			this->textBox515->Enabled = false;
			this->textBox515->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox515->Location = System::Drawing::Point(1058, 259);
			this->textBox515->Name = L"textBox515";
			this->textBox515->Size = System::Drawing::Size(59, 33);
			this->textBox515->TabIndex = 121;
			// 
			// textBox615
			// 
			this->textBox615->Enabled = false;
			this->textBox615->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox615->Location = System::Drawing::Point(1058, 298);
			this->textBox615->Name = L"textBox615";
			this->textBox615->Size = System::Drawing::Size(59, 33);
			this->textBox615->TabIndex = 122;
			// 
			// textBox715
			// 
			this->textBox715->Enabled = false;
			this->textBox715->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox715->Location = System::Drawing::Point(1058, 337);
			this->textBox715->Name = L"textBox715";
			this->textBox715->Size = System::Drawing::Size(59, 33);
			this->textBox715->TabIndex = 123;
			// 
			// textBox815
			// 
			this->textBox815->Enabled = false;
			this->textBox815->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox815->Location = System::Drawing::Point(1058, 376);
			this->textBox815->Name = L"textBox815";
			this->textBox815->Size = System::Drawing::Size(59, 33);
			this->textBox815->TabIndex = 124;
			// 
			// textBox915
			// 
			this->textBox915->Enabled = false;
			this->textBox915->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox915->Location = System::Drawing::Point(1058, 415);
			this->textBox915->Name = L"textBox915";
			this->textBox915->Size = System::Drawing::Size(59, 33);
			this->textBox915->TabIndex = 125;
			// 
			// textBox1015
			// 
			this->textBox1015->Enabled = false;
			this->textBox1015->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1015->Location = System::Drawing::Point(1058, 454);
			this->textBox1015->Name = L"textBox1015";
			this->textBox1015->Size = System::Drawing::Size(59, 33);
			this->textBox1015->TabIndex = 126;
			// 
			// textBox1115
			// 
			this->textBox1115->Enabled = false;
			this->textBox1115->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1115->Location = System::Drawing::Point(1058, 494);
			this->textBox1115->Name = L"textBox1115";
			this->textBox1115->Size = System::Drawing::Size(59, 33);
			this->textBox1115->TabIndex = 127;
			// 
			// textBox1215
			// 
			this->textBox1215->Enabled = false;
			this->textBox1215->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1215->Location = System::Drawing::Point(1058, 533);
			this->textBox1215->Name = L"textBox1215";
			this->textBox1215->Size = System::Drawing::Size(59, 33);
			this->textBox1215->TabIndex = 128;
			// 
			// textBox1415
			// 
			this->textBox1415->Enabled = false;
			this->textBox1415->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1415->Location = System::Drawing::Point(1058, 611);
			this->textBox1415->Name = L"textBox1415";
			this->textBox1415->Size = System::Drawing::Size(59, 33);
			this->textBox1415->TabIndex = 129;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(102, 506);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 21);
			this->label11->TabIndex = 130;
			this->label11->Text = L"11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(102, 545);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 21);
			this->label12->TabIndex = 131;
			this->label12->Text = L"12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(102, 584);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 21);
			this->label13->TabIndex = 132;
			this->label13->Text = L"13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(102, 623);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 21);
			this->label14->TabIndex = 133;
			this->label14->Text = L"14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(102, 661);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 21);
			this->label15->TabIndex = 134;
			this->label15->Text = L"15";
			// 
			// FormIngresarMatriz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1484, 761);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox1415);
			this->Controls->Add(this->textBox1215);
			this->Controls->Add(this->textBox1115);
			this->Controls->Add(this->textBox1015);
			this->Controls->Add(this->textBox915);
			this->Controls->Add(this->textBox815);
			this->Controls->Add(this->textBox715);
			this->Controls->Add(this->textBox615);
			this->Controls->Add(this->textBox515);
			this->Controls->Add(this->textBox415);
			this->Controls->Add(this->textBox315);
			this->Controls->Add(this->textBox215);
			this->Controls->Add(this->textBox1315);
			this->Controls->Add(this->textBox1314);
			this->Controls->Add(this->textBox1214);
			this->Controls->Add(this->textBox1114);
			this->Controls->Add(this->textBox1014);
			this->Controls->Add(this->textBox914);
			this->Controls->Add(this->textBox814);
			this->Controls->Add(this->textBox714);
			this->Controls->Add(this->textBox614);
			this->Controls->Add(this->textBox514);
			this->Controls->Add(this->textBox414);
			this->Controls->Add(this->textBox314);
			this->Controls->Add(this->textBox214);
			this->Controls->Add(this->textBox1213);
			this->Controls->Add(this->textBox1113);
			this->Controls->Add(this->textBox1013);
			this->Controls->Add(this->textBox913);
			this->Controls->Add(this->textBox813);
			this->Controls->Add(this->textBox713);
			this->Controls->Add(this->textBox613);
			this->Controls->Add(this->textBox513);
			this->Controls->Add(this->textBox313);
			this->Controls->Add(this->textBox413);
			this->Controls->Add(this->textBox213);
			this->Controls->Add(this->textBox1112);
			this->Controls->Add(this->textBox1012);
			this->Controls->Add(this->textBox912);
			this->Controls->Add(this->textBox812);
			this->Controls->Add(this->textBox712);
			this->Controls->Add(this->textBox612);
			this->Controls->Add(this->textBox512);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox1011);
			this->Controls->Add(this->textBox412);
			this->Controls->Add(this->textBox312);
			this->Controls->Add(this->textBox212);
			this->Controls->Add(this->textBox911);
			this->Controls->Add(this->textBox811);
			this->Controls->Add(this->textBox711);
			this->Controls->Add(this->textBox611);
			this->Controls->Add(this->textBox511);
			this->Controls->Add(this->textBox411);
			this->Controls->Add(this->textBox311);
			this->Controls->Add(this->textBox211);
			this->Controls->Add(this->textBox910);
			this->Controls->Add(this->textBox810);
			this->Controls->Add(this->textBox710);
			this->Controls->Add(this->textBox610);
			this->Controls->Add(this->textBox510);
			this->Controls->Add(this->textBox410);
			this->Controls->Add(this->textBox310);
			this->Controls->Add(this->textBox210);
			this->Controls->Add(this->label15_1);
			this->Controls->Add(this->label14_1);
			this->Controls->Add(this->label13_1);
			this->Controls->Add(this->label12_1);
			this->Controls->Add(this->label11_1);
			this->Controls->Add(this->label10_1);
			this->Controls->Add(this->textBox115);
			this->Controls->Add(this->textBox114);
			this->Controls->Add(this->textBox113);
			this->Controls->Add(this->textBox112);
			this->Controls->Add(this->textBox111);
			this->Controls->Add(this->textBox110);
			this->Controls->Add(this->textBox79);
			this->Controls->Add(this->textBox69);
			this->Controls->Add(this->textBox59);
			this->Controls->Add(this->textBox49);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox89);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label9_1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label8_1);
			this->Controls->Add(this->textBox78);
			this->Controls->Add(this->textBox68);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->textBox48);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label7_1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6_1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox67);
			this->Controls->Add(this->textBox57);
			this->Controls->Add(this->textBox56);
			this->Controls->Add(this->textBox47);
			this->Controls->Add(this->textBox46);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4_1);
			this->Controls->Add(this->label5_1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3_1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2_1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1_2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Name = L"FormIngresarMatriz";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormIngresarMatriz";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //Boton Generar
		int** matriz;
		matriz = new int* [n];
		for (int i = 0; i < n; i++) {
			matriz[i] = new int[n];
		}

		//Inicializar datos en -1
		for (int i = 0; i < n;i++) {
			for (int j = 0; j < n;j++) {
				matriz[i][j] = -1;
			}
		}

		//Actualizar matriz por los datos ingresados por el usuario
		int aux = 0;

		if (this->textBox12->Text != "") {
			aux = Convert::ToInt32(this->textBox12->Text);
			if(aux>=0) matriz[0][1] = aux;
		}
		if (this->textBox13->Text != "") {
			aux = Convert::ToInt32(this->textBox13->Text);
			if (aux >= 0) matriz[0][2] = aux;
		}
		if (this->textBox14->Text != "") {
			aux = Convert::ToInt32(this->textBox14->Text);
			if (aux >= 0) matriz[0][3] = aux;
		}
		if (this->textBox15->Text != "") {
			aux = Convert::ToInt32(this->textBox15->Text);
			if (aux >= 0) matriz[0][4] = aux;
		}
		if (this->textBox23->Text != "") {
			aux = Convert::ToInt32(this->textBox23->Text);
			if (aux >= 0) matriz[1][2] = aux;
		}
		if (this->textBox24->Text != "") {
			aux = Convert::ToInt32(this->textBox24->Text);
			if (aux >=0) matriz[1][3] = aux;
		}
		if (this->textBox25->Text != "") {
			aux = Convert::ToInt32(this->textBox25->Text);
			if (aux >= 0) matriz[1][4] = aux;
		}
		if (this->textBox34->Text != "") {
			aux = Convert::ToInt32(this->textBox34->Text);
			if (aux >= 0) matriz[2][3] = aux;
		}
		if (this->textBox35->Text != "") {
			aux = Convert::ToInt32(this->textBox35->Text);
			if (aux >= 0) matriz[2][4] = aux;
		}
		if (this->textBox45->Text != "") {
			aux = Convert::ToInt32(this->textBox45->Text);
			if (aux >= 0) matriz[3][4] = aux;
		}

		if (n>=6) {
			if (this->textBox16->Text != "") {
				aux = Convert::ToInt32(this->textBox16->Text);
				if (aux >= 0) matriz[0][5] = aux;
			}
			if (this->textBox26->Text != "") {
				aux = Convert::ToInt32(this->textBox26->Text);
				if (aux >= 0) matriz[1][5] = aux;
			}
			if (this->textBox36->Text != "") {
				aux = Convert::ToInt32(this->textBox36->Text);
				if (aux >= 0) matriz[2][5] = aux;
			}
			if (this->textBox46->Text != "") {
				aux = Convert::ToInt32(this->textBox46->Text);
				if (aux >= 0) matriz[3][5] = aux;
			}
			if (this->textBox56->Text != "") {
				aux = Convert::ToInt32(this->textBox56->Text);
				if (aux >= 0) matriz[4][5] = aux;
			}
		}
		if (n>=7) {
			if (this->textBox17->Text != "") {
				aux = Convert::ToInt32(this->textBox17->Text);
				if (aux >= 0) matriz[0][6] = aux;
			}
			if (this->textBox27->Text != "") {
				aux = Convert::ToInt32(this->textBox27->Text);
				if (aux >= 0) matriz[1][6] = aux;
			}
			if (this->textBox37->Text != "") {
				aux = Convert::ToInt32(this->textBox37->Text);
				if (aux >= 0) matriz[2][6] = aux;
			}
			if (this->textBox47->Text != "") {
				aux = Convert::ToInt32(this->textBox47->Text);
				if (aux >= 0) matriz[3][6] = aux;
			}
			if (this->textBox57->Text != "") {
				aux = Convert::ToInt32(this->textBox57->Text);
				if (aux >= 0) matriz[4][6] = aux;
			}
			if (this->textBox67->Text != "") {
				aux = Convert::ToInt32(this->textBox67->Text);
				if (aux >= 0) matriz[5][6] = aux;
			}
		}
		if (n>=8) {
			if (this->textBox18->Text != "") {
				aux = Convert::ToInt32(this->textBox18->Text);
				if (aux >= 0) matriz[0][7] = aux;
			}
			if (this->textBox28->Text != "") {
				aux = Convert::ToInt32(this->textBox28->Text);
				if (aux >= 0) matriz[1][7] = aux;
			}
			if (this->textBox38->Text != "") {
				aux = Convert::ToInt32(this->textBox38->Text);
				if (aux >= 0) matriz[2][7] = aux;
			}
			if (this->textBox48->Text != "") {
				aux = Convert::ToInt32(this->textBox48->Text);
				if (aux >= 0) matriz[3][7] = aux;
			}
			if (this->textBox58->Text != "") {
				aux = Convert::ToInt32(this->textBox58->Text);
				if (aux >= 0) matriz[4][7] = aux;
			}
			if (this->textBox68->Text != "") {
				aux = Convert::ToInt32(this->textBox68->Text);
				if (aux >= 0) matriz[5][7] = aux;
			}
			if (this->textBox78->Text != "") {
				aux = Convert::ToInt32(this->textBox78->Text);
				if (aux >= 0) matriz[6][7] = aux;
			}
		}
		if (n >= 9) {
			if (this->textBox19->Text != "") {
				aux = Convert::ToInt32(this->textBox19->Text);
				if (aux >= 0) matriz[0][8] = aux;
			}
			if (this->textBox29->Text != "") {
				aux = Convert::ToInt32(this->textBox29->Text);
				if (aux >= 0) matriz[1][8] = aux;
			}
			if (this->textBox39->Text != "") {
				aux = Convert::ToInt32(this->textBox39->Text);
				if (aux >= 0) matriz[2][8] = aux;
			}
			if (this->textBox49->Text != "") {
				aux = Convert::ToInt32(this->textBox49->Text);
				if (aux >= 0) matriz[3][8] = aux;
			}
			if (this->textBox59->Text != "") {
				aux = Convert::ToInt32(this->textBox59->Text);
				if (aux >= 0) matriz[4][8] = aux;
			}
			if (this->textBox69->Text != "") {
				aux = Convert::ToInt32(this->textBox69->Text);
				if (aux >= 0) matriz[5][8] = aux;
			}
			if (this->textBox79->Text != "") {
				aux = Convert::ToInt32(this->textBox79->Text);
				if (aux >= 0) matriz[6][8] = aux;
			}
			if (this->textBox89->Text != "") {
				aux = Convert::ToInt32(this->textBox89->Text);
				if (aux >= 0) matriz[7][8] = aux;
			}
		}
		if (n >= 10) {
			if (this->textBox110->Text != "") {
				aux = Convert::ToInt32(this->textBox110->Text);
				if (aux >= 0) matriz[0][9] = aux;
			}
			if (this->textBox210->Text != "") {
				aux = Convert::ToInt32(this->textBox210->Text);
				if (aux >= 0) matriz[1][9] = aux;
			}
			if (this->textBox310->Text != "") {
				aux = Convert::ToInt32(this->textBox310->Text);
				if (aux >= 0) matriz[2][9] = aux;
			}
			if (this->textBox410->Text != "") {
				aux = Convert::ToInt32(this->textBox410->Text);
				if (aux >= 0) matriz[3][9] = aux;
			}
			if (this->textBox510->Text != "") {
				aux = Convert::ToInt32(this->textBox510->Text);
				if (aux >=0) matriz[4][9] = aux;
			}
			if (this->textBox610->Text != "") {
				aux = Convert::ToInt32(this->textBox610->Text);
				if (aux >= 0) matriz[5][9] = aux;
			}
			if (this->textBox710->Text != "") {
				aux = Convert::ToInt32(this->textBox710->Text);
				if (aux >= 0) matriz[6][9] = aux;
			}
			if (this->textBox810->Text != "") {
				aux = Convert::ToInt32(this->textBox810->Text);
				if (aux >= 0) matriz[7][9] = aux;
			}
			if (this->textBox910->Text != "") {
				aux = Convert::ToInt32(this->textBox810->Text);
				if (aux >= 0) matriz[8][9] = aux;
			}
		}
		if (n >= 11) {
			if (this->textBox111->Text != "") {
				aux = Convert::ToInt32(this->textBox111->Text);
				if (aux >= 0) matriz[0][10] = aux;
			}
			if (this->textBox211->Text != "") {
				aux = Convert::ToInt32(this->textBox211->Text);
				if (aux >= 0) matriz[1][10] = aux;
			}
			if (this->textBox311->Text != "") {
				aux = Convert::ToInt32(this->textBox311->Text);
				if (aux >= 0) matriz[2][10] = aux;
			}
			if (this->textBox411->Text != "") {
				aux = Convert::ToInt32(this->textBox411->Text);
				if (aux >= 0) matriz[3][10] = aux;
			}
			if (this->textBox511->Text != "") {
				aux = Convert::ToInt32(this->textBox511->Text);
				if (aux >= 0) matriz[4][10] = aux;
			}
			if (this->textBox611->Text != "") {
				aux = Convert::ToInt32(this->textBox611->Text);
				if (aux >= 0) matriz[5][10] = aux;
			}
			if (this->textBox711->Text != "") {
				aux = Convert::ToInt32(this->textBox711->Text);
				if (aux >= 0) matriz[6][10] = aux;
			}
			if (this->textBox811->Text != "") {
				aux = Convert::ToInt32(this->textBox811->Text);
				if (aux >= 0) matriz[7][10] = aux;
			}
			if (this->textBox911->Text != "") {
				aux = Convert::ToInt32(this->textBox911->Text);
				if (aux >= 0) matriz[8][10] = aux;
			}
			if (this->textBox1011->Text != "") {
				aux = Convert::ToInt32(this->textBox1011->Text);
				if (aux >= 0) matriz[9][10] = aux;
			}
		}
		if (n >= 12) {
			if (this->textBox112->Text != "") {
				aux = Convert::ToInt32(this->textBox112->Text);
				if (aux >=0) matriz[0][11] = aux;
			}
			if (this->textBox212->Text != "") {
				aux = Convert::ToInt32(this->textBox212->Text);
				if (aux >= 0) matriz[1][11] = aux;
			}
			if (this->textBox312->Text != "") {
				aux = Convert::ToInt32(this->textBox312->Text);
				if (aux >= 0) matriz[2][11] = aux;
			}
			if (this->textBox412->Text != "") {
				aux = Convert::ToInt32(this->textBox412->Text);
				if (aux >= 0) matriz[3][11] = aux;
			}
			if (this->textBox512->Text != "") {
				aux = Convert::ToInt32(this->textBox512->Text);
				if (aux >= 0) matriz[4][11] = aux;
			}
			if (this->textBox612->Text != "") {
				aux = Convert::ToInt32(this->textBox612->Text);
				if (aux >= 0) matriz[5][11] = aux;
			}
			if (this->textBox712->Text != "") {
				aux = Convert::ToInt32(this->textBox712->Text);
				if (aux >= 0) matriz[6][11] = aux;
			}
			if (this->textBox812->Text != "") {
				aux = Convert::ToInt32(this->textBox812->Text);
				if (aux >= 0) matriz[7][11] = aux;
			}
			if (this->textBox912->Text != "") {
				aux = Convert::ToInt32(this->textBox912->Text);
				if (aux >= 0) matriz[8][11] = aux;
			}
			if (this->textBox1012->Text != "") {
				aux = Convert::ToInt32(this->textBox1012->Text);
				if (aux >= 0) matriz[9][11] = aux;
			}
			if (this->textBox1112->Text != "") {
				aux = Convert::ToInt32(this->textBox1112->Text);
				if (aux >= 0) matriz[10][11] = aux;
			}
		}
		if (n >= 13) {
			if (this->textBox113->Text != "") {
				aux = Convert::ToInt32(this->textBox113->Text);
				if (aux >= 0) matriz[0][12] = aux;
			}
			if (this->textBox213->Text != "") {
				aux = Convert::ToInt32(this->textBox213->Text);
				if (aux >= 0) matriz[1][12] = aux;
			}
			if (this->textBox313->Text != "") {
				aux = Convert::ToInt32(this->textBox313->Text);
				if (aux >= 0) matriz[2][12] = aux;
			}
			if (this->textBox413->Text != "") {
				aux = Convert::ToInt32(this->textBox413->Text);
				if (aux >= 0) matriz[3][12] = aux;
			}
			if (this->textBox513->Text != "") {
				aux = Convert::ToInt32(this->textBox513->Text);
				if (aux >= 0) matriz[4][12] = aux;
			}
			if (this->textBox613->Text != "") {
				aux = Convert::ToInt32(this->textBox613->Text);
				if (aux >= 0) matriz[5][12] = aux;
			}
			if (this->textBox713->Text != "") {
				aux = Convert::ToInt32(this->textBox713->Text);
				if (aux >= 0) matriz[6][12] = aux;
			}
			if (this->textBox813->Text != "") {
				aux = Convert::ToInt32(this->textBox813->Text);
				if (aux >= 0) matriz[7][12] = aux;
			}
			if (this->textBox913->Text != "") {
				aux = Convert::ToInt32(this->textBox913->Text);
				if (aux >= 0) matriz[8][12] = aux;
			}
			if (this->textBox1013->Text != "") {
				aux = Convert::ToInt32(this->textBox1013->Text);
				if (aux >= 0) matriz[9][12] = aux;
			}
			if (this->textBox1113->Text != "") {
				aux = Convert::ToInt32(this->textBox1113->Text);
				if (aux >= 0) matriz[10][12] = aux;
			}
			if (this->textBox1213->Text != "") {
				aux = Convert::ToInt32(this->textBox1213->Text);
				if (aux >= 0) matriz[11][12] = aux;
			}
		}
		if (n >= 14) {
			if (this->textBox114->Text != "") {
				aux = Convert::ToInt32(this->textBox114->Text);
				if (aux >= 0) matriz[0][13] = aux;
			}
			if (this->textBox214->Text != "") {
				aux = Convert::ToInt32(this->textBox214->Text);
				if (aux >= 0) matriz[1][13] = aux;
			}
			if (this->textBox314->Text != "") {
				aux = Convert::ToInt32(this->textBox314->Text);
				if (aux >= 0) matriz[2][13] = aux;
			}
			if (this->textBox414->Text != "") {
				aux = Convert::ToInt32(this->textBox414->Text);
				if (aux >= 0) matriz[3][13] = aux;
			}
			if (this->textBox514->Text != "") {
				aux = Convert::ToInt32(this->textBox514->Text);
				if (aux >= 0) matriz[4][13] = aux;
			}
			if (this->textBox614->Text != "") {
				aux = Convert::ToInt32(this->textBox614->Text);
				if (aux >= 0) matriz[5][13] = aux;
			}
			if (this->textBox714->Text != "") {
				aux = Convert::ToInt32(this->textBox714->Text);
				if (aux >= 0) matriz[6][13] = aux;
			}
			if (this->textBox814->Text != "") {
				aux = Convert::ToInt32(this->textBox814->Text);
				if (aux >= 0) matriz[7][13] = aux;
			}
			if (this->textBox914->Text != "") {
				aux = Convert::ToInt32(this->textBox914->Text);
				if (aux >= 0) matriz[8][13] = aux;
			}
			if (this->textBox1014->Text != "") {
				aux = Convert::ToInt32(this->textBox1014->Text);
				if (aux >= 0) matriz[9][13] = aux;
			}
			if (this->textBox1114->Text != "") {
				aux = Convert::ToInt32(this->textBox1114->Text);
				if (aux >= 0) matriz[10][13] = aux;
			}
			if (this->textBox1214->Text != "") {
				aux = Convert::ToInt32(this->textBox1214->Text);
				if (aux >= 0) matriz[11][13] = aux;
			}
			if (this->textBox1314->Text != "") {
				aux = Convert::ToInt32(this->textBox1314->Text);
				if (aux >= 0) matriz[12][13] = aux;
			}
		}
		if (n == 15) {
			if (this->textBox115->Text != "") {
				aux = Convert::ToInt32(this->textBox115->Text);
				if (aux >= 0) matriz[0][14] = aux;
			}
			if (this->textBox215->Text != "") {
				aux = Convert::ToInt32(this->textBox215->Text);
				if (aux >= 0) matriz[1][14] = aux;
			}
			if (this->textBox315->Text != "") {
				aux = Convert::ToInt32(this->textBox315->Text);
				if (aux >= 0) matriz[2][14] = aux;
			}
			if (this->textBox415->Text != "") {
				aux = Convert::ToInt32(this->textBox415->Text);
				if (aux >= 0) matriz[3][14] = aux;
			}
			if (this->textBox515->Text != "") {
				aux = Convert::ToInt32(this->textBox515->Text);
				if (aux >= 0) matriz[4][14] = aux;
			}
			if (this->textBox615->Text != "") {
				aux = Convert::ToInt32(this->textBox615->Text);
				if (aux >= 0) matriz[5][14] = aux;
			}
			if (this->textBox715->Text != "") {
				aux = Convert::ToInt32(this->textBox715->Text);
				if (aux >= 0) matriz[6][14] = aux;
			}
			if (this->textBox815->Text != "") {
				aux = Convert::ToInt32(this->textBox815->Text);
				if (aux >= 0) matriz[7][14] = aux;
			}
			if (this->textBox915->Text != "") {
				aux = Convert::ToInt32(this->textBox915->Text);
				if (aux >= 0) matriz[8][14] = aux;
			}
			if (this->textBox1015->Text != "") {
				aux = Convert::ToInt32(this->textBox1015->Text);
				if (aux >= 0) matriz[9][14] = aux;
			}
			if (this->textBox1115->Text != "") {
				aux = Convert::ToInt32(this->textBox1115->Text);
				if (aux >= 0) matriz[10][14] = aux;
			}
			if (this->textBox1215->Text != "") {
				aux = Convert::ToInt32(this->textBox1215->Text);
				if (aux >= 0) matriz[11][14] = aux;
			}
			if (this->textBox1315->Text != "") {
				aux = Convert::ToInt32(this->textBox1315->Text);
				if (aux >= 0) matriz[12][14] = aux;
			}
			if (this->textBox1415->Text != "") {
				aux = Convert::ToInt32(this->textBox1415->Text);
				if (aux >= 0) matriz[13][14] = aux;
			}
		}

		FormRedOptima^ FrmRedOptima = gcnew FormRedOptima(n, matriz);
		this->Visible = false;
		FrmRedOptima->ShowDialog();
		delete FrmRedOptima;
		this->Close();
	}

	void ActivarTextBox() {
		if (n >= 6) {
		this->textBox16->Enabled = true;
		this->textBox26->Enabled = true;
		this->textBox36->Enabled = true;
		this->textBox46->Enabled = true;
		this->textBox56->Enabled = true;
		}
		if (n >= 7) {
			this->textBox17->Enabled = true;
			this->textBox27->Enabled = true;
			this->textBox37->Enabled = true;
			this->textBox47->Enabled = true;
			this->textBox57->Enabled = true;
			this->textBox67->Enabled = true;
		}
		if (n >= 8) {
			this->textBox18->Enabled = true;
			this->textBox28->Enabled = true;
			this->textBox38->Enabled = true;
			this->textBox48->Enabled = true;
			this->textBox58->Enabled = true;
			this->textBox68->Enabled = true;
			this->textBox78->Enabled = true;
		}
		if (n >= 9) {
			this->textBox19->Enabled = true;
			this->textBox29->Enabled = true;
			this->textBox39->Enabled = true;
			this->textBox49->Enabled = true;
			this->textBox59->Enabled = true;
			this->textBox69->Enabled = true;
			this->textBox79->Enabled = true;
			this->textBox89->Enabled = true;
		}
		if (n >= 10) {
			this->textBox110->Enabled = true;
			this->textBox210->Enabled = true;
			this->textBox310->Enabled = true;
			this->textBox410->Enabled = true;
			this->textBox510->Enabled = true;
			this->textBox610->Enabled = true;
			this->textBox710->Enabled = true;
			this->textBox810->Enabled = true;
			this->textBox910->Enabled = true;
		}
		if (n >= 11) {
			this->textBox111->Enabled = true;
			this->textBox211->Enabled = true;
			this->textBox311->Enabled = true;
			this->textBox411->Enabled = true;
			this->textBox511->Enabled = true;
			this->textBox611->Enabled = true;
			this->textBox711->Enabled = true;
			this->textBox811->Enabled = true;
			this->textBox911->Enabled = true;
			this->textBox1011->Enabled = true;
		}
		if (n >= 12) {
			this->textBox112->Enabled = true;
			this->textBox212->Enabled = true;
			this->textBox312->Enabled = true;
			this->textBox412->Enabled = true;
			this->textBox512->Enabled = true;
			this->textBox612->Enabled = true;
			this->textBox712->Enabled = true;
			this->textBox812->Enabled = true;
			this->textBox912->Enabled = true;
			this->textBox1012->Enabled = true;
			this->textBox1112->Enabled = true;
		}
		if (n >= 13) {
			this->textBox113->Enabled = true;
			this->textBox213->Enabled = true;
			this->textBox313->Enabled = true;
			this->textBox413->Enabled = true;
			this->textBox513->Enabled = true;
			this->textBox613->Enabled = true;
			this->textBox713->Enabled = true;
			this->textBox813->Enabled = true;
			this->textBox913->Enabled = true;
			this->textBox1013->Enabled = true;
			this->textBox1113->Enabled = true;
			this->textBox1213->Enabled = true;
		}
		if (n >= 14) {
			this->textBox114->Enabled = true;
			this->textBox214->Enabled = true;
			this->textBox314->Enabled = true;
			this->textBox414->Enabled = true;
			this->textBox514->Enabled = true;
			this->textBox614->Enabled = true;
			this->textBox714->Enabled = true;
			this->textBox814->Enabled = true;
			this->textBox914->Enabled = true;
			this->textBox1014->Enabled = true;
			this->textBox1114->Enabled = true;
			this->textBox1214->Enabled = true;
			this->textBox1314->Enabled = true;
		}
		if (n == 15) {
			this->textBox115->Enabled = true;
			this->textBox215->Enabled = true;
			this->textBox315->Enabled = true;
			this->textBox415->Enabled = true;
			this->textBox515->Enabled = true;
			this->textBox615->Enabled = true;
			this->textBox715->Enabled = true;
			this->textBox815->Enabled = true;
			this->textBox915->Enabled = true;
			this->textBox1015->Enabled = true;
			this->textBox1115->Enabled = true;
			this->textBox1215->Enabled = true;
			this->textBox1315->Enabled = true;
			this->textBox1415->Enabled = true;
		}
	}
};
}

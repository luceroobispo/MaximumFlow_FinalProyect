#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include "FormRedOptima.h"
#include "FormIngresarMatriz.h"

namespace RedDeFlujos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class PantallaPrincipal : public System::Windows::Forms::Form
	{
	public:
		PantallaPrincipal(void)
		{
			InitializeComponent();
		}

	protected:
		~PantallaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciar->Location = System::Drawing::Point(550, 563);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(354, 115);
			this->btnIniciar->TabIndex = 0;
			this->btnIniciar->Text = L"INICIAR";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &PantallaPrincipal::btnIniciar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(483, 380);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese el tamaño de la matriz:";
			this->label1->Click += gcnew System::EventHandler(this, &PantallaPrincipal::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(808, 380);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(124, 33);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(231, 436);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(536, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Desea generar la matriz (1) o ingresar los valores usted (2):";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->comboBox1->DisplayMember = L"1";
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"2" });
			this->comboBox1->Location = System::Drawing::Point(808, 436);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(124, 29);
			this->comboBox1->TabIndex = 4;
			// 
			// PantallaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1484, 761);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnIniciar);
			this->Name = L"PantallaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PantallaPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		int n, opc;

		if(this->textBox1->Text!="") n = Convert::ToInt32(this->textBox1->Text);
		if(this->comboBox1->Text!="") opc = Convert::ToInt32(this->comboBox1->Text);


		if ((n >= 5 && n <= 15)&&(this->comboBox1->Text != "")) {
			int** matriz;
			matriz = new int* [n];
			for (int i = 0; i < n; i++) {
				matriz[i] = new int[n];
			}

			FormRedOptima^ FrmRedOptima;
			FormIngresarMatriz^ FrmIngresarMatriz;
			switch (opc) {
			case 1: //GENERAR MATRIZ CON VALORES RANDOM
				srand(time(NULL));
				//Inicializar matriz
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						matriz[i][j] = -1;
					}
				}

				//Actualizar matriz con valores random
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						if (j > i) matriz[i][j] = 1 + rand() % 100;
					}
				}

				FrmRedOptima = gcnew FormRedOptima(n,matriz);
				this->Visible = false;
				FrmRedOptima->ShowDialog();
				break;

			case 2: //EL USUARIO INGRESA DATOS A LA MATRIZ
				FrmIngresarMatriz = gcnew FormIngresarMatriz(n);
				this->Visible = false;
				FrmIngresarMatriz->ShowDialog();
				break;
			}
			delete FrmRedOptima;
			delete FrmIngresarMatriz;
			this->Close();
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

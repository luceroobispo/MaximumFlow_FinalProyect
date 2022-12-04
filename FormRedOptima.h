#pragma once
#include "Controladora.h"
#include"grafi.h"
using namespace System;
namespace RedDeFlujos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormRedOptima : public System::Windows::Forms::Form
	{
		

	private:
		Controladora* c;
		grafi^ i;
		//graff^ f;
		int** mat;
		int N;
		int* Posx;
		int* Posy;
		bool verificador;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ labelMatrizGenerada;
	private: System::Windows::Forms::Label^ label_matriz;
	private: System::Windows::Forms::Label^ label_grafo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblFlujoMaximo;
	private: System::Windows::Forms::Label^ label_grafoFinal;
	private: System::Windows::Forms::Button^ buttonDatosIniciales;
	private: System::Windows::Forms::Button^ buttonRed;
	private: System::Windows::Forms::Label^ labelNameFlujoMaximo;
	private: System::Windows::Forms::Button^ btnmostrar;

		   int opc;
	public:
		FormRedOptima(int n, int**matriz)
		{
			N = n;
			mat = matriz;
			InitializeComponent();
			c = new Controladora(n, matriz); //n es el tamanno de la matriz
			Posx = new int[N];
			Posx[0]=15;
			Posy = new int[N];
			Posy[0] = 600;
			Random dado;
			int yy = 600;
			for (int i =2;i<=n;i++)
			{

				Posx[i-1] = Posx[i-2] + dado.Next(70, 150);
				if (i % 2 == 0)
				{
					Posy[i-1] = yy;
					Posy[i-1] = Posy[i-1] - dado.Next(150, 300);

				}
				else
				{
					Posy[i-1] = yy;
					Posy[i-1] = Posy[i-1] + dado.Next(150, 300);
			
				}
			}
			verificador = false;
		}

	protected:
		~FormRedOptima()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelMatrizGenerada = (gcnew System::Windows::Forms::Label());
			this->label_matriz = (gcnew System::Windows::Forms::Label());
			this->label_grafo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblFlujoMaximo = (gcnew System::Windows::Forms::Label());
			this->label_grafoFinal = (gcnew System::Windows::Forms::Label());
			this->buttonDatosIniciales = (gcnew System::Windows::Forms::Button());
			this->buttonRed = (gcnew System::Windows::Forms::Button());
			this->labelNameFlujoMaximo = (gcnew System::Windows::Forms::Label());
			this->btnmostrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FormRedOptima::timer1_Tick);
			// 
			// labelMatrizGenerada
			// 
			this->labelMatrizGenerada->AutoSize = true;
			this->labelMatrizGenerada->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMatrizGenerada->Location = System::Drawing::Point(12, 9);
			this->labelMatrizGenerada->Name = L"labelMatrizGenerada";
			this->labelMatrizGenerada->Size = System::Drawing::Size(94, 27);
			this->labelMatrizGenerada->TabIndex = 0;
			this->labelMatrizGenerada->Text = L"MATRIZ";
			// 
			// label_matriz
			// 
			this->label_matriz->AutoSize = true;
			this->label_matriz->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_matriz->Location = System::Drawing::Point(21, 51);
			this->label_matriz->Name = L"label_matriz";
			this->label_matriz->Size = System::Drawing::Size(0, 21);
			this->label_matriz->TabIndex = 1;
			// 
			// label_grafo
			// 
			this->label_grafo->AutoSize = true;
			this->label_grafo->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_grafo->Location = System::Drawing::Point(13, 461);
			this->label_grafo->Name = L"label_grafo";
			this->label_grafo->Size = System::Drawing::Size(0, 21);
			this->label_grafo->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 450);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 27);
			this->label1->TabIndex = 3;
			this->label1->Text = L"GRAFO";
			// 
			// lblFlujoMaximo
			// 
			this->lblFlujoMaximo->AutoSize = true;
			this->lblFlujoMaximo->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12));
			this->lblFlujoMaximo->Location = System::Drawing::Point(21, 51);
			this->lblFlujoMaximo->Name = L"lblFlujoMaximo";
			this->lblFlujoMaximo->Size = System::Drawing::Size(106, 21);
			this->lblFlujoMaximo->TabIndex = 5;
			this->lblFlujoMaximo->Text = L"FlujoMaximo";
			this->lblFlujoMaximo->Visible = false;
			// 
			// label_grafoFinal
			// 
			this->label_grafoFinal->AutoSize = true;
			this->label_grafoFinal->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_grafoFinal->Location = System::Drawing::Point(12, 512);
			this->label_grafoFinal->Name = L"label_grafoFinal";
			this->label_grafoFinal->Size = System::Drawing::Size(105, 21);
			this->label_grafoFinal->TabIndex = 6;
			this->label_grafoFinal->Text = L"[Grafo Final]";
			this->label_grafoFinal->Visible = false;
			// 
			// buttonDatosIniciales
			// 
			this->buttonDatosIniciales->Location = System::Drawing::Point(984, 228);
			this->buttonDatosIniciales->Margin = System::Windows::Forms::Padding(2);
			this->buttonDatosIniciales->Name = L"buttonDatosIniciales";
			this->buttonDatosIniciales->Size = System::Drawing::Size(225, 57);
			this->buttonDatosIniciales->TabIndex = 7;
			this->buttonDatosIniciales->Text = L"DATOS INICIALES";
			this->buttonDatosIniciales->UseVisualStyleBackColor = true;
			this->buttonDatosIniciales->Click += gcnew System::EventHandler(this, &FormRedOptima::buttonDatosIniciales_Click);
			// 
			// buttonRed
			// 
			this->buttonRed->Location = System::Drawing::Point(984, 121);
			this->buttonRed->Margin = System::Windows::Forms::Padding(2);
			this->buttonRed->Name = L"buttonRed";
			this->buttonRed->Size = System::Drawing::Size(225, 57);
			this->buttonRed->TabIndex = 8;
			this->buttonRed->Text = L"MOSTRAR RED";
			this->buttonRed->UseVisualStyleBackColor = true;
			this->buttonRed->Visible = false;
			this->buttonRed->Click += gcnew System::EventHandler(this, &FormRedOptima::buttonRed_Click);
			// 
			// labelNameFlujoMaximo
			// 
			this->labelNameFlujoMaximo->AutoSize = true;
			this->labelNameFlujoMaximo->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameFlujoMaximo->Location = System::Drawing::Point(12, 9);
			this->labelNameFlujoMaximo->Name = L"labelNameFlujoMaximo";
			this->labelNameFlujoMaximo->Size = System::Drawing::Size(176, 27);
			this->labelNameFlujoMaximo->TabIndex = 9;
			this->labelNameFlujoMaximo->Text = L"FLUJO MAXIMO";
			this->labelNameFlujoMaximo->Visible = false;
			// 
			// btnmostrar
			// 
			this->btnmostrar->Location = System::Drawing::Point(822, 765);
			this->btnmostrar->Name = L"btnmostrar";
			this->btnmostrar->Size = System::Drawing::Size(435, 154);
			this->btnmostrar->TabIndex = 50;
			this->btnmostrar->Text = L"MOSTRAR DIAGRAMA\r\n";
			this->btnmostrar->UseVisualStyleBackColor = true;
			this->btnmostrar->Visible = false;
			this->btnmostrar->Click += gcnew System::EventHandler(this, &FormRedOptima::button1_Click);
			// 
			// FormRedOptima
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1695, 961);
			this->Controls->Add(this->btnmostrar);
			this->Controls->Add(this->labelNameFlujoMaximo);
			this->Controls->Add(this->buttonRed);
			this->Controls->Add(this->buttonDatosIniciales);
			this->Controls->Add(this->label_grafoFinal);
			this->Controls->Add(this->lblFlujoMaximo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_grafo);
			this->Controls->Add(this->label_matriz);
			this->Controls->Add(this->labelMatrizGenerada);
			this->Name = L"FormRedOptima";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Red Optima";
			this->Load += gcnew System::EventHandler(this, &FormRedOptima::FormRedOptima_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonDatosIniciales_Click(System::Object^ sender, System::EventArgs^ e) {
		this->buttonDatosIniciales->Visible = false;
		this->buttonRed->Visible = true;
		this->btnmostrar->Visible = true;

		String^ matriz = gcnew String(c->mostrarMatriz().c_str());
		this->label_matriz->Text = matriz;

		c->InsertarNodos();
		c->InsertarAristas();

		String^ grafo = gcnew String(c->imprimirGrafo().c_str());
		this->label_grafo->Text = grafo;

		
	}
	private: System::Void buttonRed_Click(System::Object^ sender, System::EventArgs^ e) {
		this->buttonRed->Visible = false;
		this->lblFlujoMaximo->Visible = true;
		this->label_grafoFinal->Visible = true; 
		this->labelNameFlujoMaximo->Visible = true;

		String^ flujoMaximo = gcnew String(c->FordFulkerson().c_str());
		this->lblFlujoMaximo->Text = flujoMaximo;

		String^ grafoFinal = gcnew String(c->imprimirGrafo().c_str());
		this->label_grafoFinal->Text = grafoFinal;

		//invisible:
		this->label_matriz->Visible = false;
		this->label_grafo->Visible = false;
		verificador = true;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	i = gcnew grafi(N, mat,c,Posx,Posy,verificador);
	i->ShowDialog();
}
private: System::Void FormRedOptima_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

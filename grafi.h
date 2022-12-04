#pragma once
#include "Dibujar.h";
#include"DibujagraF.h";
namespace RedDeFlujos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de grafi
	/// </summary>
	public ref class grafi : public System::Windows::Forms::Form
	{
	public:
		Controladora *ca;

		int N;
		Graphics^ g;
		BufferedGraphicsContext^ Buf;
		BufferedGraphics^ buffer;
		int** ara;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	public:
		//Dibujar* dibujo;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ button4;
	public:
		DibujagraF* grafinal;

		grafi(int nu, int** mat , Controladora *a,int*PX, int*PY, bool veri)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			ca = a;
			ara = mat;
			N = nu;
			g = panel1->CreateGraphics();
			Buf = BufferedGraphicsManager::Current;
			buffer = Buf->Allocate(g, panel1->ClientRectangle);
		//	dibujo = new Dibujar(ca,N, mat, PX, PY);
			grafinal = new DibujagraF(ca,PX,PY,ara);
			button3->Visible = false;
			button1->Visible = false;
			if (veri == false)
			{
				
				
				timer1->Enabled = true;
				
			}
			else
			{
				
				timer2->Enabled = true;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~grafi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(192, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1720, 1046);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 559);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &grafi::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &grafi::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(38, 559);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &grafi::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(38, 559);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &grafi::button3_Click);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &grafi::timer2_Tick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(38, 262);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Cerrar ventana";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &grafi::button4_Click);
			// 
			// grafi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1061);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"grafi";
			this->Text = L"grafi";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::WhiteSmoke);
		/*dibujo->Graficar(buffer->Graphics);
		dibujo->Line(buffer->Graphics);
		dibujo->tamaño(buffer->Graphics);*/
		grafinal->Graficar(buffer->Graphics);
		grafinal->Line(buffer->Graphics);
		grafinal->tamaño(buffer->Graphics);
		buffer->Render(g);
		timer1->Enabled = false;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		Close();
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	timer2->Enabled = true;
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	buffer->Graphics->Clear(Color::WhiteSmoke);


	grafinal->Graficar(buffer->Graphics);
	grafinal->Line(buffer->Graphics);
	grafinal->tamaño(buffer->Graphics);
	buffer->Render(g);
	timer2->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	timer2->Enabled = false;
	Close();
}
};
}

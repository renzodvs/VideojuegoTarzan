#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

FILE *archivo;
char archivo_d[] = "jugadores.txt";

namespace TarzanSprite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ranking
	/// </summary>
	public ref class Ranking : public System::Windows::Forms::Form
	{
	public:
		Ranking(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Ranking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Fondo;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  lstJugadores;
	private: System::Windows::Forms::Button^  btn_Actualizar;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Ranking::typeid));
			this->Fondo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lstJugadores = (gcnew System::Windows::Forms::ListBox());
			this->btn_Actualizar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fondo))->BeginInit();
			this->SuspendLayout();
			// 
			// Fondo
			// 
			this->Fondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Fondo.Image")));
			this->Fondo->Location = System::Drawing::Point(-5, 1);
			this->Fondo->Name = L"Fondo";
			this->Fondo->Size = System::Drawing::Size(1000, 500);
			this->Fondo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Fondo->TabIndex = 0;
			this->Fondo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Swis721 Blk BT", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(859, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(799, 192);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ranking";
			// 
			// lstJugadores
			// 
			this->lstJugadores->BackColor = System::Drawing::Color::SpringGreen;
			this->lstJugadores->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstJugadores->ForeColor = System::Drawing::Color::Red;
			this->lstJugadores->FormattingEnabled = true;
			this->lstJugadores->ItemHeight = 47;
			this->lstJugadores->Location = System::Drawing::Point(81, 308);
			this->lstJugadores->Name = L"lstJugadores";
			this->lstJugadores->Size = System::Drawing::Size(2431, 709);
			this->lstJugadores->TabIndex = 2;
			// 
			// btn_Actualizar
			// 
			this->btn_Actualizar->BackColor = System::Drawing::Color::Yellow;
			this->btn_Actualizar->Font = (gcnew System::Drawing::Font(L"Poor Richard", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Actualizar->ForeColor = System::Drawing::Color::Black;
			this->btn_Actualizar->Location = System::Drawing::Point(2060, 117);
			this->btn_Actualizar->Name = L"btn_Actualizar";
			this->btn_Actualizar->Size = System::Drawing::Size(305, 107);
			this->btn_Actualizar->TabIndex = 3;
			this->btn_Actualizar->Text = L"Actualizar";
			this->btn_Actualizar->UseVisualStyleBackColor = false;
			this->btn_Actualizar->Click += gcnew System::EventHandler(this, &Ranking::btn_Actualizar_Click);
			// 
			// Ranking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2617, 1101);
			this->Controls->Add(this->btn_Actualizar);
			this->Controls->Add(this->lstJugadores);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Fondo);
			this->Name = L"Ranking";
			this->Text = L"Ranking";
			this->Load += gcnew System::EventHandler(this, &Ranking::Ranking_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fondo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Ranking_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Width = 1000;
		this->Height = 500;
	}

	private: System::Void btn_Actualizar_Click(System::Object^  sender, System::EventArgs^  e) {
		lstJugadores->Items->Clear();
		archivo = fopen(archivo_d, "r");
		while (!feof(archivo))
		{
			char Nombre[100];
			int Tiempo;
			int Puntaje;
			fscanf(archivo, "%s %i %i\n", Nombre, &Tiempo, &Puntaje);
			String ^nombre = gcnew String(Nombre);
			lstJugadores->Items->Add("Jugador: " + nombre + "\t\tPuntaje: " + Puntaje + "\t\tTiempo:  " + Tiempo);
		}
		fclose(archivo);			
	}
};
}

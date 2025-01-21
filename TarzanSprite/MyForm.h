#pragma once
#include "Tarzan.h"
#include "ArrEnemigos.h"
#include "ArrChita.h"
#include "ArrArmasTarzan.h"
#include "ArrLianas.h"
#include "Jane.h"
#include "Ranking.h"
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


namespace TarzanSprite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		CArrEnemigos *oArrTiburones;
		CArrEnemigos *oArrCazadores;
		CArrEnemigos *oArrTigres;
		CTarzan *oTarzan;
		CJane *oJane;
		CArrChita *oArrChita;
		CArrArmasTarzan*oArrCuchillos;
		CArrArmasTarzan*oArrLanzas;
		CArrArmasTarzan*oArrFlechas;
		CArrLianas*oArrLianas;
		int fase;
		int puntaje;
		int tiempo;
		int contadorCazadores;
		int contadorTiburones;
		int contadorTigres;
		int contadorCuchillos;
		int contadorLanzas;
		int contadorFlechas;
		int indiceX_Final;
		int indiceY_Final;

	private: System::Windows::Forms::PictureBox^  SpriteCazador;
	public:
	private: System::Windows::Forms::PictureBox^  imgBala;
	private: System::Windows::Forms::PictureBox^  SpriteChita;

	private: System::Windows::Forms::PictureBox^  imgIntro;
	private: System::Windows::Forms::PictureBox^  imgRio;
	private: System::Windows::Forms::Label^  lblTxtVidas;

	private: System::Windows::Forms::Label^  lblVidas;
	private: System::Windows::Forms::PictureBox^  imgCuchillo;
	private: System::Windows::Forms::PictureBox^  imgFlecha;
	private: System::Windows::Forms::PictureBox^  imgLanza;
	private: System::Windows::Forms::Label^  lblCuchillos;
	private: System::Windows::Forms::Label^  lblTxtCuchillos;
	private: System::Windows::Forms::Label^  lblFlechas;
	private: System::Windows::Forms::Label^  lblTxtFlechas;
	private: System::Windows::Forms::Label^  lblLanzas;
	private: System::Windows::Forms::Label^  lblTxtLanzas;
	private: System::Windows::Forms::PictureBox^  SpriteFinal;
	private: System::Windows::Forms::Button^  btn_JugarDeNuevo;
	private: System::Windows::Forms::Button^  btn_Salir;
	private: System::Windows::Forms::Label^  lblGana;
	private: System::Windows::Forms::PictureBox^  SpriteTarzan_Nadar;
	private: System::Windows::Forms::PictureBox^  imgPantano;
	private: System::Windows::Forms::PictureBox^  SpriteTigre;
	private: System::Windows::Forms::Label^  lblPierde;
	private: System::Windows::Forms::PictureBox^  imgPierde;
	private: System::Windows::Forms::Label^  lblPuntaje;
	private: System::Windows::Forms::Label^  lblTxtPuntaje;
	private: System::Windows::Forms::PictureBox^  SpriteJane;
	private: System::Windows::Forms::Label^  lblTiempo;
	private: System::Windows::Forms::Label^  lblTxtTiempo;
	private: System::Windows::Forms::Button^  btn_Ranking;
	private: System::Windows::Forms::Button^  btn_Agregar;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::TextBox^  txtNombre;

	private: System::Windows::Forms::Button^  IniciarJuego;

	public:
		MyForm(void)
		{
			InitializeComponent();
			oTarzan = new CTarzan(900, 300);
			oJane = new CJane(10, 280);
			oArrTiburones = new CArrEnemigos(0);
			oArrCazadores = new CArrEnemigos(1);
			oArrTigres = new CArrEnemigos(2);
			oArrChita = new CArrChita();
			oArrCuchillos = new CArrArmasTarzan(0);
			oArrFlechas = new CArrArmasTarzan(2);
			oArrLanzas = new CArrArmasTarzan(1);
			oArrLianas = new CArrLianas();
			oArrLianas->AgregarLiana(150, 0);
			oArrLianas->AgregarLiana(400, 0);
			oArrLianas->AgregarLiana(650, 0);
			contadorTiburones = 0;
			contadorCazadores = 0;
			contadorTigres = 1;
			contadorCuchillos = 5;
			contadorFlechas = 5;
			contadorLanzas = 5;
			fase = 0;
			puntaje = 0;
			tiempo = 1000;
			indiceX_Final = 0;
			indiceY_Final = 0;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  SpriteTarzan;
	private: System::Windows::Forms::PictureBox^  ImgCampo;

	private: System::Windows::Forms::PictureBox^  SpriteTiburon;
	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SpriteTarzan = (gcnew System::Windows::Forms::PictureBox());
			this->ImgCampo = (gcnew System::Windows::Forms::PictureBox());
			this->SpriteTiburon = (gcnew System::Windows::Forms::PictureBox());
			this->SpriteCazador = (gcnew System::Windows::Forms::PictureBox());
			this->imgBala = (gcnew System::Windows::Forms::PictureBox());
			this->SpriteChita = (gcnew System::Windows::Forms::PictureBox());
			this->imgIntro = (gcnew System::Windows::Forms::PictureBox());
			this->IniciarJuego = (gcnew System::Windows::Forms::Button());
			this->imgRio = (gcnew System::Windows::Forms::PictureBox());
			this->lblTxtVidas = (gcnew System::Windows::Forms::Label());
			this->lblVidas = (gcnew System::Windows::Forms::Label());
			this->imgCuchillo = (gcnew System::Windows::Forms::PictureBox());
			this->imgFlecha = (gcnew System::Windows::Forms::PictureBox());
			this->imgLanza = (gcnew System::Windows::Forms::PictureBox());
			this->lblCuchillos = (gcnew System::Windows::Forms::Label());
			this->lblTxtCuchillos = (gcnew System::Windows::Forms::Label());
			this->lblFlechas = (gcnew System::Windows::Forms::Label());
			this->lblTxtFlechas = (gcnew System::Windows::Forms::Label());
			this->lblLanzas = (gcnew System::Windows::Forms::Label());
			this->lblTxtLanzas = (gcnew System::Windows::Forms::Label());
			this->SpriteFinal = (gcnew System::Windows::Forms::PictureBox());
			this->btn_JugarDeNuevo = (gcnew System::Windows::Forms::Button());
			this->btn_Salir = (gcnew System::Windows::Forms::Button());
			this->lblGana = (gcnew System::Windows::Forms::Label());
			this->SpriteTarzan_Nadar = (gcnew System::Windows::Forms::PictureBox());
			this->imgPantano = (gcnew System::Windows::Forms::PictureBox());
			this->SpriteTigre = (gcnew System::Windows::Forms::PictureBox());
			this->lblPierde = (gcnew System::Windows::Forms::Label());
			this->imgPierde = (gcnew System::Windows::Forms::PictureBox());
			this->lblPuntaje = (gcnew System::Windows::Forms::Label());
			this->lblTxtPuntaje = (gcnew System::Windows::Forms::Label());
			this->SpriteJane = (gcnew System::Windows::Forms::PictureBox());
			this->lblTiempo = (gcnew System::Windows::Forms::Label());
			this->lblTxtTiempo = (gcnew System::Windows::Forms::Label());
			this->btn_Ranking = (gcnew System::Windows::Forms::Button());
			this->btn_Agregar = (gcnew System::Windows::Forms::Button());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteTarzan))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgCampo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteTiburon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteCazador))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBala))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteChita))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgIntro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgRio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgCuchillo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFlecha))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLanza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteFinal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteTarzan_Nadar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPantano))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteTigre))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPierde))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteJane))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// SpriteTarzan
			// 
			this->SpriteTarzan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpriteTarzan.Image")));
			this->SpriteTarzan->Location = System::Drawing::Point(81, 144);
			this->SpriteTarzan->Name = L"SpriteTarzan";
			this->SpriteTarzan->Size = System::Drawing::Size(272, 46);
			this->SpriteTarzan->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->SpriteTarzan->TabIndex = 1;
			this->SpriteTarzan->TabStop = false;
			this->SpriteTarzan->Visible = false;
			// 
			// ImgCampo
			// 
			this->ImgCampo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImgCampo.Image")));
			this->ImgCampo->Location = System::Drawing::Point(161, 407);
			this->ImgCampo->Name = L"ImgCampo";
			this->ImgCampo->Size = System::Drawing::Size(1000, 500);
			this->ImgCampo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->ImgCampo->TabIndex = 2;
			this->ImgCampo->TabStop = false;
			this->ImgCampo->Visible = false;
			// 
			// SpriteTiburon
			// 
			this->SpriteTiburon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpriteTiburon.Image")));
			this->SpriteTiburon->Location = System::Drawing::Point(135, 277);
			this->SpriteTiburon->Name = L"SpriteTiburon";
			this->SpriteTiburon->Size = System::Drawing::Size(1650, 99);
			this->SpriteTiburon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->SpriteTiburon->TabIndex = 3;
			this->SpriteTiburon->TabStop = false;
			this->SpriteTiburon->Visible = false;
			// 
			// SpriteCazador
			// 
			this->SpriteCazador->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpriteCazador.Image")));
			this->SpriteCazador->Location = System::Drawing::Point(385, 56);
			this->SpriteCazador->Name = L"SpriteCazador";
			this->SpriteCazador->Size = System::Drawing::Size(260, 70);
			this->SpriteCazador->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->SpriteCazador->TabIndex = 4;
			this->SpriteCazador->TabStop = false;
			this->SpriteCazador->Visible = false;
			// 
			// imgBala
			// 
			this->imgBala->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgBala.Image")));
			this->imgBala->Location = System::Drawing::Point(385, 161);
			this->imgBala->Name = L"imgBala";
			this->imgBala->Size = System::Drawing::Size(500, 200);
			this->imgBala->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgBala->TabIndex = 5;
			this->imgBala->TabStop = false;
			this->imgBala->Visible = false;
			// 
			// SpriteChita
			// 
			this->SpriteChita->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpriteChita.Image")));
			this->SpriteChita->Location = System::Drawing::Point(161, 444);
			this->SpriteChita->Name = L"SpriteChita";
			this->SpriteChita->Size = System::Drawing::Size(306, 39);
			this->SpriteChita->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->SpriteChita->TabIndex = 6;
			this->SpriteChita->TabStop = false;
			this->SpriteChita->Visible = false;
			// 
			// imgIntro
			// 
			this->imgIntro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgIntro.Image")));
			this->imgIntro->Location = System::Drawing::Point(549, 382);
			this->imgIntro->Name = L"imgIntro";
			this->imgIntro->Size = System::Drawing::Size(1000, 500);
			this->imgIntro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgIntro->TabIndex = 8;
			this->imgIntro->TabStop = false;
			this->imgIntro->Visible = false;
			// 
			// IniciarJuego
			// 
			this->IniciarJuego->BackColor = System::Drawing::Color::Yellow;
			this->IniciarJuego->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IniciarJuego->Location = System::Drawing::Point(2047, 430);
			this->IniciarJuego->Name = L"IniciarJuego";
			this->IniciarJuego->Size = System::Drawing::Size(241, 105);
			this->IniciarJuego->TabIndex = 9;
			this->IniciarJuego->Text = L"Jugar";
			this->IniciarJuego->UseVisualStyleBackColor = false;
			this->IniciarJuego->Click += gcnew System::EventHandler(this, &MyForm::IniciarJuego_Click);
			// 
			// imgRio
			// 
			this->imgRio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgRio.Image")));
			this->imgRio->Location = System::Drawing::Point(213, 583);
			this->imgRio->Name = L"imgRio";
			this->imgRio->Size = System::Drawing::Size(1000, 500);
			this->imgRio->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgRio->TabIndex = 10;
			this->imgRio->TabStop = false;
			this->imgRio->Visible = false;
			// 
			// lblTxtVidas
			// 
			this->lblTxtVidas->AutoSize = true;
			this->lblTxtVidas->BackColor = System::Drawing::Color::Lime;
			this->lblTxtVidas->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblTxtVidas->ForeColor = System::Drawing::Color::Red;
			this->lblTxtVidas->Location = System::Drawing::Point(2298, 47);
			this->lblTxtVidas->Name = L"lblTxtVidas";
			this->lblTxtVidas->Size = System::Drawing::Size(163, 45);
			this->lblTxtVidas->TabIndex = 11;
			this->lblTxtVidas->Text = L"Vidas:";
			this->lblTxtVidas->Visible = false;
			// 
			// lblVidas
			// 
			this->lblVidas->AutoSize = true;
			this->lblVidas->BackColor = System::Drawing::Color::Lime;
			this->lblVidas->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblVidas->ForeColor = System::Drawing::Color::Red;
			this->lblVidas->Location = System::Drawing::Point(2461, 47);
			this->lblVidas->Name = L"lblVidas";
			this->lblVidas->Size = System::Drawing::Size(398, 45);
			this->lblVidas->TabIndex = 12;
			this->lblVidas->Text = L"Numero de Vidas";
			this->lblVidas->Visible = false;
			// 
			// imgCuchillo
			// 
			this->imgCuchillo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgCuchillo.Image")));
			this->imgCuchillo->Location = System::Drawing::Point(736, 161);
			this->imgCuchillo->Name = L"imgCuchillo";
			this->imgCuchillo->Size = System::Drawing::Size(500, 200);
			this->imgCuchillo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgCuchillo->TabIndex = 13;
			this->imgCuchillo->TabStop = false;
			this->imgCuchillo->Visible = false;
			// 
			// imgFlecha
			// 
			this->imgFlecha->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgFlecha.Image")));
			this->imgFlecha->Location = System::Drawing::Point(1423, 543);
			this->imgFlecha->Name = L"imgFlecha";
			this->imgFlecha->Size = System::Drawing::Size(500, 200);
			this->imgFlecha->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgFlecha->TabIndex = 14;
			this->imgFlecha->TabStop = false;
			this->imgFlecha->Visible = false;
			// 
			// imgLanza
			// 
			this->imgLanza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLanza.Image")));
			this->imgLanza->Location = System::Drawing::Point(117, 639);
			this->imgLanza->Name = L"imgLanza";
			this->imgLanza->Size = System::Drawing::Size(500, 200);
			this->imgLanza->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgLanza->TabIndex = 15;
			this->imgLanza->TabStop = false;
			this->imgLanza->Visible = false;
			// 
			// lblCuchillos
			// 
			this->lblCuchillos->AutoSize = true;
			this->lblCuchillos->BackColor = System::Drawing::Color::Lime;
			this->lblCuchillos->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblCuchillos->ForeColor = System::Drawing::Color::Blue;
			this->lblCuchillos->Location = System::Drawing::Point(2538, 137);
			this->lblCuchillos->Name = L"lblCuchillos";
			this->lblCuchillos->Size = System::Drawing::Size(467, 45);
			this->lblCuchillos->TabIndex = 17;
			this->lblCuchillos->Text = L"Numero de Cuchillos";
			this->lblCuchillos->Visible = false;
			// 
			// lblTxtCuchillos
			// 
			this->lblTxtCuchillos->AutoSize = true;
			this->lblTxtCuchillos->BackColor = System::Drawing::Color::Lime;
			this->lblTxtCuchillos->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblTxtCuchillos->ForeColor = System::Drawing::Color::Blue;
			this->lblTxtCuchillos->Location = System::Drawing::Point(2300, 137);
			this->lblTxtCuchillos->Name = L"lblTxtCuchillos";
			this->lblTxtCuchillos->Size = System::Drawing::Size(232, 45);
			this->lblTxtCuchillos->TabIndex = 16;
			this->lblTxtCuchillos->Text = L"Cuchillos:";
			this->lblTxtCuchillos->Visible = false;
			// 
			// lblFlechas
			// 
			this->lblFlechas->AutoSize = true;
			this->lblFlechas->BackColor = System::Drawing::Color::Lime;
			this->lblFlechas->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblFlechas->ForeColor = System::Drawing::Color::Blue;
			this->lblFlechas->Location = System::Drawing::Point(2508, 182);
			this->lblFlechas->Name = L"lblFlechas";
			this->lblFlechas->Size = System::Drawing::Size(467, 45);
			this->lblFlechas->TabIndex = 19;
			this->lblFlechas->Text = L"Numero de Cuchillos";
			this->lblFlechas->Visible = false;
			// 
			// lblTxtFlechas
			// 
			this->lblTxtFlechas->AutoSize = true;
			this->lblTxtFlechas->BackColor = System::Drawing::Color::Lime;
			this->lblTxtFlechas->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblTxtFlechas->ForeColor = System::Drawing::Color::Blue;
			this->lblTxtFlechas->Location = System::Drawing::Point(2300, 182);
			this->lblTxtFlechas->Name = L"lblTxtFlechas";
			this->lblTxtFlechas->Size = System::Drawing::Size(204, 45);
			this->lblTxtFlechas->TabIndex = 18;
			this->lblTxtFlechas->Text = L"Flechas:";
			this->lblTxtFlechas->Visible = false;
			// 
			// lblLanzas
			// 
			this->lblLanzas->AutoSize = true;
			this->lblLanzas->BackColor = System::Drawing::Color::Lime;
			this->lblLanzas->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblLanzas->ForeColor = System::Drawing::Color::Blue;
			this->lblLanzas->Location = System::Drawing::Point(2504, 227);
			this->lblLanzas->Name = L"lblLanzas";
			this->lblLanzas->Size = System::Drawing::Size(467, 45);
			this->lblLanzas->TabIndex = 21;
			this->lblLanzas->Text = L"Numero de Cuchillos";
			this->lblLanzas->Visible = false;
			// 
			// lblTxtLanzas
			// 
			this->lblTxtLanzas->AutoSize = true;
			this->lblTxtLanzas->BackColor = System::Drawing::Color::Lime;
			this->lblTxtLanzas->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblTxtLanzas->ForeColor = System::Drawing::Color::Blue;
			this->lblTxtLanzas->Location = System::Drawing::Point(2300, 227);
			this->lblTxtLanzas->Name = L"lblTxtLanzas";
			this->lblTxtLanzas->Size = System::Drawing::Size(197, 45);
			this->lblTxtLanzas->TabIndex = 20;
			this->lblTxtLanzas->Text = L"Lanzas:";
			this->lblTxtLanzas->Visible = false;
			// 
			// SpriteFinal
			// 
			this->SpriteFinal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpriteFinal.Image")));
			this->SpriteFinal->Location = System::Drawing::Point(1579, 430);
			this->SpriteFinal->Name = L"SpriteFinal";
			this->SpriteFinal->Size = System::Drawing::Size(1112, 573);
			this->SpriteFinal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->SpriteFinal->TabIndex = 22;
			this->SpriteFinal->TabStop = false;
			this->SpriteFinal->Visible = false;
			// 
			// btn_JugarDeNuevo
			// 
			this->btn_JugarDeNuevo->BackColor = System::Drawing::Color::Yellow;
			this->btn_JugarDeNuevo->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_JugarDeNuevo->Location = System::Drawing::Point(2047, 603);
			this->btn_JugarDeNuevo->Name = L"btn_JugarDeNuevo";
			this->btn_JugarDeNuevo->Size = System::Drawing::Size(241, 111);
			this->btn_JugarDeNuevo->TabIndex = 23;
			this->btn_JugarDeNuevo->Text = L"Jugar de nuevo";
			this->btn_JugarDeNuevo->UseVisualStyleBackColor = false;
			this->btn_JugarDeNuevo->Visible = false;
			this->btn_JugarDeNuevo->Click += gcnew System::EventHandler(this, &MyForm::btn_JugarDeNuevo_Click);
			// 
			// btn_Salir
			// 
			this->btn_Salir->BackColor = System::Drawing::Color::Yellow;
			this->btn_Salir->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Salir->Location = System::Drawing::Point(2047, 776);
			this->btn_Salir->Name = L"btn_Salir";
			this->btn_Salir->Size = System::Drawing::Size(241, 111);
			this->btn_Salir->TabIndex = 24;
			this->btn_Salir->Text = L"Salir del Juego";
			this->btn_Salir->UseVisualStyleBackColor = false;
			this->btn_Salir->Click += gcnew System::EventHandler(this, &MyForm::btn_Salir_Click);
			// 
			// lblGana
			// 
			this->lblGana->AutoSize = true;
			this->lblGana->BackColor = System::Drawing::Color::Black;
			this->lblGana->Font = (gcnew System::Drawing::Font(L"Ravie", 25));
			this->lblGana->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lblGana->Location = System::Drawing::Point(38, 30);
			this->lblGana->Name = L"lblGana";
			this->lblGana->Size = System::Drawing::Size(1849, 111);
			this->lblGana->TabIndex = 25;
			this->lblGana->Text = L"Felicidades .. Ganaste el juego !!";
			this->lblGana->Visible = false;
			// 
			// SpriteTarzan_Nadar
			// 
			this->SpriteTarzan_Nadar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpriteTarzan_Nadar.Image")));
			this->SpriteTarzan_Nadar->Location = System::Drawing::Point(1339, 165);
			this->SpriteTarzan_Nadar->Name = L"SpriteTarzan_Nadar";
			this->SpriteTarzan_Nadar->Size = System::Drawing::Size(199, 52);
			this->SpriteTarzan_Nadar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->SpriteTarzan_Nadar->TabIndex = 26;
			this->SpriteTarzan_Nadar->TabStop = false;
			this->SpriteTarzan_Nadar->Visible = false;
			// 
			// imgPantano
			// 
			this->imgPantano->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgPantano.Image")));
			this->imgPantano->Location = System::Drawing::Point(57, 444);
			this->imgPantano->Name = L"imgPantano";
			this->imgPantano->Size = System::Drawing::Size(1000, 500);
			this->imgPantano->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgPantano->TabIndex = 27;
			this->imgPantano->TabStop = false;
			this->imgPantano->Visible = false;
			// 
			// SpriteTigre
			// 
			this->SpriteTigre->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpriteTigre.Image")));
			this->SpriteTigre->Location = System::Drawing::Point(663, 620);
			this->SpriteTigre->Name = L"SpriteTigre";
			this->SpriteTigre->Size = System::Drawing::Size(1701, 76);
			this->SpriteTigre->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->SpriteTigre->TabIndex = 28;
			this->SpriteTigre->TabStop = false;
			this->SpriteTigre->Visible = false;
			// 
			// lblPierde
			// 
			this->lblPierde->AutoSize = true;
			this->lblPierde->BackColor = System::Drawing::Color::Black;
			this->lblPierde->Font = (gcnew System::Drawing::Font(L"Ravie", 25));
			this->lblPierde->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lblPierde->Location = System::Drawing::Point(516, 30);
			this->lblPierde->Name = L"lblPierde";
			this->lblPierde->Size = System::Drawing::Size(645, 111);
			this->lblPierde->TabIndex = 29;
			this->lblPierde->Text = L"Perdiste :(";
			this->lblPierde->Visible = false;
			// 
			// imgPierde
			// 
			this->imgPierde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgPierde.Image")));
			this->imgPierde->Location = System::Drawing::Point(632, 382);
			this->imgPierde->Name = L"imgPierde";
			this->imgPierde->Size = System::Drawing::Size(1000, 500);
			this->imgPierde->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgPierde->TabIndex = 30;
			this->imgPierde->TabStop = false;
			this->imgPierde->Visible = false;
			// 
			// lblPuntaje
			// 
			this->lblPuntaje->AutoSize = true;
			this->lblPuntaje->BackColor = System::Drawing::Color::Lime;
			this->lblPuntaje->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblPuntaje->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lblPuntaje->Location = System::Drawing::Point(2523, 92);
			this->lblPuntaje->Name = L"lblPuntaje";
			this->lblPuntaje->Size = System::Drawing::Size(452, 45);
			this->lblPuntaje->TabIndex = 32;
			this->lblPuntaje->Text = L"Numero de puntaje";
			this->lblPuntaje->Visible = false;
			// 
			// lblTxtPuntaje
			// 
			this->lblTxtPuntaje->AutoSize = true;
			this->lblTxtPuntaje->BackColor = System::Drawing::Color::Lime;
			this->lblTxtPuntaje->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblTxtPuntaje->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lblTxtPuntaje->Location = System::Drawing::Point(2300, 92);
			this->lblTxtPuntaje->Name = L"lblTxtPuntaje";
			this->lblTxtPuntaje->Size = System::Drawing::Size(220, 45);
			this->lblTxtPuntaje->TabIndex = 31;
			this->lblTxtPuntaje->Text = L"Puntaje:";
			this->lblTxtPuntaje->Visible = false;
			// 
			// SpriteJane
			// 
			this->SpriteJane->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SpriteJane.Image")));
			this->SpriteJane->Location = System::Drawing::Point(1822, 166);
			this->SpriteJane->Name = L"SpriteJane";
			this->SpriteJane->Size = System::Drawing::Size(145, 51);
			this->SpriteJane->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->SpriteJane->TabIndex = 33;
			this->SpriteJane->TabStop = false;
			this->SpriteJane->Visible = false;
			// 
			// lblTiempo
			// 
			this->lblTiempo->AutoSize = true;
			this->lblTiempo->BackColor = System::Drawing::Color::Lime;
			this->lblTiempo->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblTiempo->ForeColor = System::Drawing::Color::Red;
			this->lblTiempo->Location = System::Drawing::Point(2154, 47);
			this->lblTiempo->Name = L"lblTiempo";
			this->lblTiempo->Size = System::Drawing::Size(191, 45);
			this->lblTiempo->TabIndex = 35;
			this->lblTiempo->Text = L"Numero";
			this->lblTiempo->Visible = false;
			// 
			// lblTxtTiempo
			// 
			this->lblTxtTiempo->AutoSize = true;
			this->lblTxtTiempo->BackColor = System::Drawing::Color::Lime;
			this->lblTxtTiempo->Font = (gcnew System::Drawing::Font(L"Ravie", 10));
			this->lblTxtTiempo->ForeColor = System::Drawing::Color::Red;
			this->lblTxtTiempo->Location = System::Drawing::Point(1955, 47);
			this->lblTxtTiempo->Name = L"lblTxtTiempo";
			this->lblTxtTiempo->Size = System::Drawing::Size(198, 45);
			this->lblTxtTiempo->TabIndex = 34;
			this->lblTxtTiempo->Text = L"Tiempo:";
			this->lblTxtTiempo->Visible = false;
			// 
			// btn_Ranking
			// 
			this->btn_Ranking->BackColor = System::Drawing::Color::Yellow;
			this->btn_Ranking->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Ranking->Location = System::Drawing::Point(2370, 599);
			this->btn_Ranking->Name = L"btn_Ranking";
			this->btn_Ranking->Size = System::Drawing::Size(241, 115);
			this->btn_Ranking->TabIndex = 36;
			this->btn_Ranking->Text = L"Ver Ranking";
			this->btn_Ranking->UseVisualStyleBackColor = false;
			this->btn_Ranking->Click += gcnew System::EventHandler(this, &MyForm::btn_Ranking_Click);
			// 
			// btn_Agregar
			// 
			this->btn_Agregar->BackColor = System::Drawing::Color::Yellow;
			this->btn_Agregar->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Agregar->Location = System::Drawing::Point(2411, 290);
			this->btn_Agregar->Name = L"btn_Agregar";
			this->btn_Agregar->Size = System::Drawing::Size(241, 115);
			this->btn_Agregar->TabIndex = 37;
			this->btn_Agregar->Text = L"Agregar al Ranking";
			this->btn_Agregar->UseVisualStyleBackColor = false;
			this->btn_Agregar->Visible = false;
			this->btn_Agregar->Click += gcnew System::EventHandler(this, &MyForm::btn_Agregar_Click);
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(1846, 309);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(243, 61);
			this->lblNombre->TabIndex = 38;
			this->lblNombre->Text = L"Nombre: ";
			this->lblNombre->Visible = false;
			// 
			// txtNombre
			// 
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(2100, 309);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(288, 67);
			this->txtNombre->TabIndex = 39;
			this->txtNombre->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2733, 1042);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->btn_Agregar);
			this->Controls->Add(this->btn_Ranking);
			this->Controls->Add(this->lblTiempo);
			this->Controls->Add(this->lblTxtTiempo);
			this->Controls->Add(this->SpriteJane);
			this->Controls->Add(this->lblPuntaje);
			this->Controls->Add(this->lblTxtPuntaje);
			this->Controls->Add(this->imgPierde);
			this->Controls->Add(this->imgPantano);
			this->Controls->Add(this->SpriteTarzan_Nadar);
			this->Controls->Add(this->lblGana);
			this->Controls->Add(this->btn_Salir);
			this->Controls->Add(this->btn_JugarDeNuevo);
			this->Controls->Add(this->lblLanzas);
			this->Controls->Add(this->lblTxtLanzas);
			this->Controls->Add(this->lblFlechas);
			this->Controls->Add(this->lblTxtFlechas);
			this->Controls->Add(this->lblCuchillos);
			this->Controls->Add(this->lblTxtCuchillos);
			this->Controls->Add(this->imgLanza);
			this->Controls->Add(this->imgFlecha);
			this->Controls->Add(this->imgCuchillo);
			this->Controls->Add(this->lblVidas);
			this->Controls->Add(this->lblTxtVidas);
			this->Controls->Add(this->imgRio);
			this->Controls->Add(this->IniciarJuego);
			this->Controls->Add(this->SpriteChita);
			this->Controls->Add(this->imgBala);
			this->Controls->Add(this->SpriteCazador);
			this->Controls->Add(this->SpriteTiburon);
			this->Controls->Add(this->ImgCampo);
			this->Controls->Add(this->SpriteTarzan);
			this->Controls->Add(this->imgIntro);
			this->Controls->Add(this->SpriteFinal);
			this->Controls->Add(this->SpriteTigre);
			this->Controls->Add(this->lblPierde);
			this->Name = L"MyForm";
			this->Text = L"Tarzan: The Jungle King";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::PresionarTecla);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::SoltarTecla);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteTarzan))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImgCampo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteTiburon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteCazador))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBala))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteChita))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgIntro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgRio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgCuchillo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFlecha))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLanza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteFinal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteTarzan_Nadar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPantano))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteTigre))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPierde))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpriteJane))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Height = 500;
		this->Width = 1000;
	}
	private: System::Void PresionarTecla(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		
		switch (e->KeyCode)
		{
		case Keys::Left:
			oTarzan->Direccion = Direcciones::Izquierda;
			break;
		case Keys::Right:
			oTarzan->Direccion = Direcciones::Derecha;
			break;
		case Keys::Up:
			oTarzan->Direccion = Direcciones::Arriba;
			break;
		case Keys::Down:
			oTarzan->Direccion = Direcciones::Abajo;
			break;
		case Keys::D:
			oTarzan->Direccion = Direcciones::CorrerDerecha;
			break;
		case Keys::A:
			oTarzan->Direccion = Direcciones::CorrerIzquierda;
			break;
		case Keys::Z:
			if (contadorCuchillos > 0)
			{
				oArrCuchillos->AgregarDisparo(oTarzan);//AGREGA CUCHILLOS
				contadorCuchillos--;
			}
			else
			{
				MessageBox::Show("No te quedan mas cuchillos :(");
			}
			break;
		case Keys::X:
			
			if (contadorLanzas > 0)
			{
				oArrLanzas->AgregarDisparo(oTarzan);//AGREGA LANZAS
				contadorLanzas--;
			}
			else
			{
				MessageBox::Show("No te quedan mas lanzas :(");
			}
			break;
		case Keys::C:
			if (contadorFlechas > 0)
			{
				oArrFlechas->AgregarDisparo(oTarzan);//AGREGA FLECHAS
				contadorFlechas--;
			}
			else
			{
				MessageBox::Show("No te quedan mas flechas :(");
			}
			break;
		//case Keys::Shift:
		//	oTarzan->Correr();
		}
	}
	private: System::Void SoltarTecla(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		oTarzan->Direccion = Direcciones::Ninguna;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);

		if (oTarzan->Get_Vidas() != 0 && tiempo != 0)
		{
				switch (fase)
				{
				case 0:
				{
					buffer->Graphics->DrawImage(imgIntro->Image, 0, 0, imgIntro->Width, imgIntro->Height);
				}
				break;
				case 1:
				{
					tiempo--;
					buffer->Graphics->DrawImage(ImgCampo->Image, 0, 0, ImgCampo->Width, ImgCampo->Height);
					oArrCazadores->Mover(buffer, SpriteTiburon->Image, SpriteCazador->Image, imgBala->Image, SpriteTigre->Image, SpriteTiburon->Width, SpriteTiburon->Height, imgBala->Width, imgBala->Height, SpriteTigre->Width, SpriteTigre->Height);
					//MOVER ARMAS
					oArrCuchillos->Mover(buffer, imgCuchillo->Image, imgCuchillo->Width, imgCuchillo->Height);
					oArrLanzas->Mover(buffer, imgLanza->Image, imgLanza->Width, imgLanza->Height);
					oArrFlechas->Mover(buffer, imgFlecha->Image, imgFlecha->Width, imgFlecha->Height);

					if (contadorCazadores % 30 == 0)
					{
						oArrCazadores->AgregarEnemigo(false);
					}
					contadorCazadores++;
					oArrCazadores->EliminarEnemigo(oArrCazadores, 1000, buffer, oTarzan);
					//ELIMINAR ARMAS Y ENEMIGOS
					oArrCuchillos->EliminarDisparo(oArrCuchillos, buffer, oArrCazadores);
					oArrLanzas->EliminarDisparo(oArrLanzas, buffer, oArrCazadores);
					oArrFlechas->EliminarDisparo(oArrFlechas, buffer, oArrCazadores);
					//MOVER TARZAN
					oTarzan->Caminar(buffer, SpriteTarzan->Image, SpriteTarzan->Width, SpriteTarzan->Height);
					//MOVERCHITA
					oArrChita->DibujarChita(buffer, SpriteChita->Image, SpriteChita->Width, SpriteChita->Height);
					//ELIMINAR CHITA
					oArrChita->EliminarChita(oArrChita, oTarzan);
					//PASAR DE NIVEL
					if (oTarzan->Get_X() < 1)
					{
						fase++;
						oTarzan->Set_X(900);
						contadorCuchillos += 5;
						contadorFlechas += 5;
						contadorLanzas += 5;
						oArrCuchillos->EliminarTodo();
						oArrFlechas->EliminarTodo();
						oArrLanzas->EliminarTodo();
						oArrCazadores->EliminarTodo();
						oArrChita->AgregarChita(500, 350);
					}
					lblTxtVidas->Visible = true;
					lblVidas->Visible = true;
					lblVidas->Text = Convert::ToString(oTarzan->Get_Vidas());
					lblTxtPuntaje->Visible = true;
					lblPuntaje->Visible = true;
					puntaje = (oArrCuchillos->Get_Puntaje() + oArrLanzas->Get_Puntaje() + oArrFlechas->Get_Puntaje());
					lblPuntaje->Text = Convert::ToString(puntaje);
					lblTxtCuchillos->Visible = true;
					lblCuchillos->Visible = true;
					lblCuchillos->Text = Convert::ToString(contadorCuchillos);
					lblTxtFlechas->Visible = true;
					lblFlechas->Visible = true;
					lblFlechas->Text = Convert::ToString(contadorFlechas);
					lblTxtLanzas->Visible = true;
					lblLanzas->Visible = true;
					lblLanzas->Text = Convert::ToString(contadorLanzas); 
					lblTxtTiempo->Visible = true;
					lblTiempo->Visible = true;
					lblTiempo->Text = Convert::ToString(tiempo);
				}
				break;
				case 2:
				{
					tiempo--;
					oTarzan->Set_EstaNadando(true);
					buffer->Graphics->DrawImage(imgRio->Image, 0, 0, 1000, 500);
					oArrTiburones->Mover(buffer, SpriteTiburon->Image, SpriteCazador->Image, imgBala->Image, SpriteTigre->Image, SpriteTiburon->Width, SpriteTiburon->Height, imgBala->Width, imgBala->Height, SpriteTigre->Width, SpriteTigre->Height);
					oArrCuchillos->Mover(buffer, imgCuchillo->Image, imgCuchillo->Width, imgCuchillo->Height);
					oArrLanzas->Mover(buffer, imgLanza->Image, imgLanza->Width, imgLanza->Height);
					oArrFlechas->Mover(buffer, imgFlecha->Image, imgFlecha->Width, imgFlecha->Height); 

					if (contadorTiburones % 18 == 0)
					{
						oArrTiburones->AgregarEnemigo(false);
					}
					contadorTiburones++;
					oArrTiburones->EliminarEnemigo(oArrTiburones, 1000, buffer, oTarzan);
					oArrCuchillos->EliminarDisparo(oArrCuchillos, buffer, oArrTiburones);
					oArrLanzas->EliminarDisparo(oArrLanzas,  buffer, oArrTiburones);
					oArrFlechas->EliminarDisparo(oArrFlechas, buffer, oArrTiburones);
					oTarzan->Nadar(buffer, SpriteTarzan_Nadar->Image, SpriteTarzan_Nadar->Width, SpriteTarzan_Nadar->Height);
					oArrChita->DibujarChita(buffer, SpriteChita->Image, SpriteChita->Width, SpriteChita->Height);
					oArrChita->EliminarChita(oArrChita, oTarzan);
					//PASAR DE NIVEL
					if (oTarzan->Get_X() < 1)
					{
						fase++;
						oTarzan->Set_EstaNadando(false);
						oTarzan->Set_X(900);
						oTarzan->Set_Y(300);
						contadorCuchillos += 5;
						contadorFlechas += 5;
						contadorLanzas += 5;
						oArrCuchillos->EliminarTodo();
						oArrFlechas->EliminarTodo();
						oArrLanzas->EliminarTodo();
						oArrTiburones->EliminarTodo();
					}
					lblVidas->Text = Convert::ToString(oTarzan->Get_Vidas());
					puntaje = (oArrCuchillos->Get_Puntaje() + oArrLanzas->Get_Puntaje() + oArrFlechas->Get_Puntaje());
					lblPuntaje->Text = Convert::ToString(puntaje);
					lblCuchillos->Text = Convert::ToString(contadorCuchillos);
					lblFlechas->Text = Convert::ToString(contadorFlechas);
					lblLanzas->Text = Convert::ToString(contadorLanzas);
					lblTiempo->Text = Convert::ToString(tiempo);
				}
				break;
				case 3:
				{
					tiempo--;
					buffer->Graphics->DrawImage(imgPantano->Image, 0, 0, imgPantano->Width, imgPantano->Height);
					oArrLianas->MoverLianas(buffer);
					oArrCazadores->Mover(buffer, SpriteTiburon->Image, SpriteCazador->Image, imgBala->Image, SpriteTigre->Image, SpriteTiburon->Width, SpriteTiburon->Height, imgBala->Width, imgBala->Height, SpriteTigre->Width, SpriteTigre->Height);
					oArrTigres->Mover(buffer, SpriteTiburon->Image, SpriteCazador->Image, imgBala->Image, SpriteTigre->Image, SpriteTiburon->Width, SpriteTiburon->Height, imgBala->Width, imgBala->Height, SpriteTigre->Width, SpriteTigre->Height);
					//MOVER ARMAS
					oArrCuchillos->Mover(buffer, imgCuchillo->Image, imgCuchillo->Width, imgCuchillo->Height);
					oArrLanzas->Mover(buffer, imgLanza->Image, imgLanza->Width, imgLanza->Height);
					oArrFlechas->Mover(buffer, imgFlecha->Image, imgFlecha->Width, imgFlecha->Height);
					//DIBUJAR A JANE
					oJane->Dibujar(buffer, SpriteJane->Image, SpriteJane->Width, SpriteJane->Height);
					if (contadorCazadores % 20 == 0)
					{
						oArrCazadores->AgregarEnemigo(true);
					}
					contadorCazadores++;
					if (contadorTigres % 25 == 0)
					{
						oArrTigres->AgregarEnemigo(false);
					}
					contadorTigres++;
					oArrCazadores->EliminarEnemigo(oArrCazadores, 1000, buffer, oTarzan);
					oArrTigres->EliminarEnemigo(oArrTigres, 1000, buffer, oTarzan);
					//ELIMINAR ARMAS Y ENEMIGOS
					oArrCuchillos->EliminarDisparo(oArrCuchillos, buffer, oArrCazadores);
					oArrLanzas->EliminarDisparo(oArrLanzas, buffer, oArrCazadores);
					oArrFlechas->EliminarDisparo(oArrFlechas, buffer, oArrCazadores);
					oArrCuchillos->EliminarDisparo(oArrCuchillos, buffer, oArrTigres);
					oArrLanzas->EliminarDisparo(oArrLanzas, buffer, oArrTigres);
					oArrFlechas->EliminarDisparo(oArrFlechas, buffer, oArrTigres);
					//MOVER TARZAN
					oTarzan->Caminar(buffer, SpriteTarzan->Image, SpriteTarzan->Width, SpriteTarzan->Height);
					//MOVERCHITA
					oArrChita->DibujarChita(buffer, SpriteChita->Image, SpriteChita->Width, SpriteChita->Height);
					//ELIMINAR CHITA
					oArrChita->EliminarChita(oArrChita, oTarzan);
					//PASAR DE NIVEL
					Rectangle Jane = Rectangle(oJane->Get_X(), oJane->Get_Y(), oJane->Get_Ancho(), oJane->Get_Alto());
					Rectangle Tarzan = Rectangle(oTarzan->Get_X(), oTarzan->Get_Y(), oTarzan->Get_Ancho(), oTarzan->Get_Alto());
					if (Tarzan.IntersectsWith(Jane))
					{
						fase++;
						oTarzan->Set_X(900);
						oTarzan->Set_Y(300);
						contadorCazadores = 0;
						contadorTiburones = 0;
						contadorTigres = 0;
						oArrCuchillos->EliminarTodo();
						oArrFlechas->EliminarTodo();
						oArrLanzas->EliminarTodo();
						oArrCazadores->EliminarTodo();
						btn_Agregar->Visible = true;
						btn_Agregar->Enabled = true;
						lblNombre->Visible = true;
						txtNombre->Visible = true;
						txtNombre->Enabled = true;
					}
					lblVidas->Text = Convert::ToString(oTarzan->Get_Vidas());
					puntaje = (oArrCuchillos->Get_Puntaje() + oArrLanzas->Get_Puntaje() + oArrFlechas->Get_Puntaje());
					lblPuntaje->Text = Convert::ToString(puntaje);
					lblCuchillos->Text = Convert::ToString(contadorCuchillos);
					lblFlechas->Text = Convert::ToString(contadorFlechas);
					lblLanzas->Text = Convert::ToString(contadorLanzas);
					lblTiempo->Text = Convert::ToString(tiempo);
				}
				break;
				case 4://FINAL
				{
					int anchoImagen = SpriteFinal->Width / 7;
					int altoImagen = SpriteFinal->Height / 4;

					System::Drawing::Rectangle porcion = System::Drawing::Rectangle(anchoImagen*indiceX_Final, altoImagen*indiceY_Final, anchoImagen, altoImagen);
					System::Drawing::Rectangle aumento = System::Drawing::Rectangle(150, 0, anchoImagen * 3, altoImagen * 3);
					buffer->Graphics->DrawImage(SpriteFinal->Image, aumento, porcion, System::Drawing::GraphicsUnit::Pixel);
					indiceX_Final++;
					if (indiceX_Final >= 7)
					{
						indiceX_Final = 0;
						indiceY_Final++;
					}
					if (indiceY_Final >= 4)
					{
						indiceY_Final = 0;
					}
					btn_JugarDeNuevo->Enabled = true;
					btn_Salir->Enabled = true;
					btn_JugarDeNuevo->Visible = true;
					btn_Salir->Visible = true;
					lblGana->Visible = true;
				}
				break;
				}
		}
		else
		{
			//PERDIO EL JUEGO
			buffer->Graphics->DrawImage(imgPierde->Image, 0, 0, 1000, 500);
			lblTxtVidas->Visible = false;
			lblVidas->Visible = false;
			btn_JugarDeNuevo->Enabled = true;
			btn_Salir->Enabled = true;
			btn_JugarDeNuevo->Visible = true;
			btn_Salir->Visible = true;
			lblPierde->Visible = true;
		}
	
		buffer->Render(g);
		delete buffer;
		delete espacio;
		delete g;
	}

private: System::Void IniciarJuego_Click(System::Object^  sender, System::EventArgs^  e) {
	fase = 1;
	IniciarJuego->Visible = false;
	IniciarJuego->Enabled = false;
	btn_Salir->Enabled = false;
	btn_Salir->Visible = false;
	btn_Ranking->Enabled = false;
	btn_Ranking->Visible = false;
}
private: System::Void btn_JugarDeNuevo_Click(System::Object^  sender, System::EventArgs^  e) {
	fase = 1;
	IniciarJuego->Visible = false;
	IniciarJuego->Enabled = false;
	btn_JugarDeNuevo->Visible = false;
	btn_JugarDeNuevo->Enabled = false;
	btn_Salir->Visible = false;
	btn_Salir->Enabled = false;
	btn_Ranking->Enabled = false;
	btn_Ranking->Visible = false;
	lblGana->Visible = false;
	lblPierde->Visible = false;
	oTarzan->JugarDeNuevo();
	//RESTABLECER VALORES PARAR JUGAR DE NUEVO
	contadorCuchillos = 5;
	contadorFlechas = 5;
	contadorLanzas = 5;
	tiempo = 1000;
	oArrCuchillos->Set_Puntaje(0);
	oArrFlechas->Set_Puntaje(0);
	oArrLanzas->Set_Puntaje(0);
}
private: System::Void btn_Salir_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void btn_Ranking_Click(System::Object^  sender, System::EventArgs^  e) {
	Ranking ^miRanking = gcnew Ranking();
	timer1->Stop(); miRanking->ShowDialog(); timer1->Start();
	delete miRanking;
}
private: System::Void btn_Agregar_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (txtNombre->TextLength != 0)
	{
		char*Nombre = new char[100];
		sprintf(Nombre, "%s", txtNombre->Text);
		int TiempoFinal = tiempo;
		int Puntaje_Total = puntaje;
		archivo = fopen(archivo_d, "a+");
		fprintf(archivo, "%s %i %i\n", Nombre, TiempoFinal, Puntaje_Total);
		fclose(archivo);

		btn_Agregar->Visible = false;
		btn_Agregar->Enabled = false;
		lblNombre->Visible = false;
		txtNombre->Visible = false;
		txtNombre->Enabled = false;
		btn_Ranking->Visible = true;
		btn_Ranking->Enabled = true;
	}

}
};
}

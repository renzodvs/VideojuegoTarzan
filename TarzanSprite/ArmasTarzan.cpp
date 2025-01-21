#include "ArmasTarzan.h"



CArmasTarzan::CArmasTarzan()
{

}


CArmasTarzan::~CArmasTarzan()
{

}
CArmasTarzan::CArmasTarzan(int x, int y, Direcciones direccion, Direcciones Ultima) {
	this->x = x;
	this->y = y;
	dx = -20;
	dy = 0;
	indiceY = 0;

	switch (direccion)
	{
	case Direcciones::Derecha:
		dx = 20;
		indiceY = 1;
		break;
	case Direcciones::Izquierda:
		dx = -20;
		indiceY = 0;
		break;
	case Direcciones::Ninguna:
		dx = dy = 0;
		switch (Ultima)
		{
		case Direcciones::Derecha:
			dx = 20;
			indiceY = 1;
			break;
		case Direcciones::Izquierda:
			dx = -20;
			indiceY = 0;
			break;
		}

	}
}

void	CArmasTarzan::Dibujar(BufferedGraphics ^buffer, Image^ imgArma, int ancho, int alto){

	int AnchoImagen = ancho;
	int AltoImagen = alto / 2;
	System::Drawing::Rectangle porcion2 = System::Drawing::Rectangle(0, AltoImagen*indiceY, AnchoImagen, AltoImagen);
	System::Drawing::Rectangle aumento2 = System::Drawing::Rectangle(x, y, AnchoImagen / 8, AltoImagen / 8);
	buffer->Graphics->DrawImage(imgArma, aumento2, porcion2, System::Drawing::GraphicsUnit::Pixel);

	this->ancho = ancho;
	this->alto = alto;

	x = dx + x;
	y = dy + y;
}

int		CArmasTarzan::Get_X() { return x; }
int		CArmasTarzan::Get_Y() { return y; }
int		CArmasTarzan::Get_Ancho(){ return (ancho / 8); }
int		CArmasTarzan::Get_Alto(){ return (alto / 16); }


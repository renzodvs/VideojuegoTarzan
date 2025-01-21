#include "Chita.h"



CChita::CChita()
{
}


CChita::~CChita()
{
}

CChita::CChita(int x, int y) {
	this->x = x;
	this->y = y;
	indice = 0;
}

void	CChita::Dibujar(BufferedGraphics ^buffer, Image ^SpriteChita, int ancho, int alto){

	int anchoImagen = ancho / 10;
	int altoImagen = alto;

	System::Drawing::Rectangle porcion = System::Drawing::Rectangle(anchoImagen*indice , 0, anchoImagen, altoImagen);
	System::Drawing::Rectangle aumento = System::Drawing::Rectangle(x, y, anchoImagen * 2, altoImagen * 2);
	buffer->Graphics->DrawImage(SpriteChita, aumento, porcion, System::Drawing::GraphicsUnit::Pixel);
	indice++;
	if (indice >=7)
	{
		indice = 0;
	}
	this->alto = alto;
	this->ancho = ancho;
}

int CChita::Get_X() { return x; }
int CChita::Get_Y() { return y; }
int CChita::Get_Ancho() { return ancho / 5; }
int CChita::Get_Alto() { return alto * 2; }
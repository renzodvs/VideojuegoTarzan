#include "Jane.h"



CJane::CJane()
{

}


CJane::~CJane()
{
}

CJane::CJane(int x, int y) {
	this->x = x;
	this->y = y;
	indice = 0;
}

void	CJane::Dibujar(BufferedGraphics ^buffer, Image ^SpriteJane, int ancho, int alto) {

	int anchoImagen = ancho / 5;
	int altoImagen = alto;

	System::Drawing::Rectangle porcion = System::Drawing::Rectangle(anchoImagen*indice, 0, anchoImagen, altoImagen);
	System::Drawing::Rectangle aumento = System::Drawing::Rectangle(x, y, anchoImagen*2, altoImagen*2);
	buffer->Graphics->DrawImage(SpriteJane, aumento, porcion, System::Drawing::GraphicsUnit::Pixel);
	this->ancho = anchoImagen;
	this->alto = altoImagen;

	indice++;
	if (indice >= 5)
	{
		indice = 0;
	}

}

int		CJane::Get_X() { return x; }
int		CJane::Get_Y() { return y; }
int		CJane::Get_Ancho() { return ancho *2; }
int		CJane::Get_Alto() { return alto*2; }
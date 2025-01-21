#include "Tiburon.h"



CTiburon::CTiburon()
{
	int tipo = 0;
}


CTiburon::~CTiburon()
{
}

CTiburon::CTiburon(int x, int y):CEnemigo(x,y) {}

void	CTiburon::Dibujar(BufferedGraphics ^buffer, Image ^Sprite,Image ^Bala, int ancho, int alto){

	int anchoImagen = ancho / 9;
	int altoImagen = alto;

	System::Drawing::Rectangle porcion = System::Drawing::Rectangle(anchoImagen*indice, 0, anchoImagen, altoImagen);
	System::Drawing::Rectangle aumento = System::Drawing::Rectangle(x, y, anchoImagen / 2, altoImagen / 2);
	buffer->Graphics->DrawImage(Sprite, aumento, porcion, System::Drawing::GraphicsUnit::Pixel);
	this->ancho = anchoImagen;
	this->alto = altoImagen;
	x = dx + x;
	y = dy + y;
}
void	CTiburon::Mover(BufferedGraphics ^buffer, Image^Sprite,Image^ Bala, int ancho, int alto){

	Dibujar(buffer, Sprite, Bala,ancho, alto);
	indice++;
	if (indice >= 9)
	{
		indice = 0;
	}
	dx = 20;


}
int		CTiburon::Get_X() { return x; }
int		CTiburon::Get_Y() { return y; }
int		CTiburon::Get_Ancho() { return ancho / 2; }
int		CTiburon::Get_Alto() { return alto / 2; }
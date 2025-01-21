#include "Tigre.h"



CTigre::CTigre()
{
	int tipo = 0;
}


CTigre::~CTigre()
{
}

CTigre::CTigre(int x, int y) :CEnemigo(x, y) {}

void	CTigre::Dibujar(BufferedGraphics ^buffer, Image ^Sprite, Image ^Bala, int ancho, int alto) {

	int anchoImagen = ancho / 10;
	int altoImagen = alto;

	System::Drawing::Rectangle porcion = System::Drawing::Rectangle(anchoImagen*indice, 0, anchoImagen, altoImagen);
	System::Drawing::Rectangle aumento = System::Drawing::Rectangle(x, y, anchoImagen, altoImagen);
	buffer->Graphics->DrawImage(Sprite, aumento, porcion, System::Drawing::GraphicsUnit::Pixel);
	this->ancho = ancho;
	this->alto = alto;
	x = dx + x;
	y = dy + y;
}
void	CTigre::Mover(BufferedGraphics ^buffer, Image^Sprite, Image^ Bala, int ancho, int alto) {

	Dibujar(buffer, Sprite, Bala, ancho, alto);
	indice++;
	if (indice >= 10)
	{
		indice = 0;
	}
	dx = -20;


}
int		CTigre::Get_X() { return x; }
int		CTigre::Get_Y() { return y; }
int		CTigre::Get_Ancho() { return ancho / 10; }
int		CTigre::Get_Alto() { return alto; }
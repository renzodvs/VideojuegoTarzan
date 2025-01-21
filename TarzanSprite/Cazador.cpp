#include "Cazador.h"



CCazador::CCazador()
{
	int tipo = 1;
	contador = 0;
}

CCazador::~CCazador()
{
}

CCazador::CCazador(int x, int y):CEnemigo(x,y){
	this->X_Bala = x;
	this->Y_Bala = y;
}

void	CCazador::Dibujar(BufferedGraphics ^buffer, Image ^SpriteCazador, Image ^Bala, int ancho, int alto){

	int anchoImagen = 50;
	int altoImagen = 70;

	System::Drawing::Rectangle porcion1 = System::Drawing::Rectangle(anchoImagen*indice, 0, anchoImagen, altoImagen);
	System::Drawing::Rectangle aumento1 = System::Drawing::Rectangle(x - anchoImagen*2, y - 50, anchoImagen * 2, altoImagen * 2);
	buffer->Graphics->DrawImage(SpriteCazador, aumento1, porcion1, System::Drawing::GraphicsUnit::Pixel);
	
	System::Drawing::Rectangle porcion2 = System::Drawing::Rectangle(0, 0, ancho, alto);
	System::Drawing::Rectangle aumento2 = System::Drawing::Rectangle(X_Bala, Y_Bala, ancho / 20, alto / 20);
	buffer->Graphics->DrawImage(Bala, aumento2, porcion2, System::Drawing::GraphicsUnit::Pixel);

	this->ancho = ancho;
	this->alto = alto;

	X_Bala = dx + X_Bala;
	Y_Bala = dy + Y_Bala;

}
void	CCazador::Mover(BufferedGraphics ^buffer, Image^Sprite, Image ^Bala,int ancho, int alto){

	Dibujar(buffer, Sprite, Bala,ancho, alto);
	indice++;
	if (contador % 25 == 0)
	{
		indice = 0;
	}
	contador++;
	dx = 20;
}
int		CCazador::Get_X() { return X_Bala; }
int		CCazador::Get_Y() { return Y_Bala; }
int		CCazador::Get_Ancho() { return ancho / 20; }
int		CCazador::Get_Alto() { return alto / 20; }

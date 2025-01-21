#pragma once
#include "Enemigo.h"

class CCazador :public CEnemigo
{
public:
	int X_Bala;
	int Y_Bala;
	int contador;
public:
	CCazador();
	~CCazador();
	CCazador(int x, int y);
	void Dibujar(BufferedGraphics ^buffer, Image ^Sprite, Image^Bala,int ancho, int alto);
	void Mover(BufferedGraphics ^buffer, Image^Sprite, Image^Bala,int ancho, int alto);
	int Get_X();
	int Get_Y();
	int Get_Ancho();
	int Get_Alto();

};


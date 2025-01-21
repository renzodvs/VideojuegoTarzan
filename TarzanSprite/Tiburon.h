#pragma once
#include "Enemigo.h"

class CTiburon:public CEnemigo
{
public:
	CTiburon();
	~CTiburon();
	CTiburon(int x, int y);
	void Dibujar(BufferedGraphics ^buffer, Image ^Sprite, Image ^Bala,int ancho, int alto);
	void Mover(BufferedGraphics ^buffer, Image^Sprite, Image^Bala,int ancho, int alto);
	int Get_X();
	int Get_Y();
	int Get_Ancho();
	int Get_Alto();

};


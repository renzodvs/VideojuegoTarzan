#pragma once
using namespace System::Drawing;
#include "Tarzan.h"

class CArmasTarzan
{
protected:
	int x;
	int y;
	int dx;
	int dy;
	int ancho;
	int alto;
	int indiceY;
public:
	CArmasTarzan();
	~CArmasTarzan();
	CArmasTarzan(int x, int y, Direcciones direccion, Direcciones Ultima);
	void Dibujar(BufferedGraphics ^buffer, Image^ imgArma, int ancho, int alto);

	int Get_X()	;
	int Get_Y()	;
	int Get_Ancho();
	int Get_Alto();
};


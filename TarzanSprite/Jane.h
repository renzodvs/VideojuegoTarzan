#pragma once
using namespace System::Drawing;
class CJane
{
private:
	int x;
	int y;
	int ancho;
	int alto;
	int indice;
public:
	CJane();
	~CJane();
	CJane(int x, int y);
	void Dibujar(BufferedGraphics ^buffer, Image ^SpriteJane, int ancho, int alto);
	int Get_X();
	int Get_Y();
	int Get_Ancho();
	int Get_Alto();

};



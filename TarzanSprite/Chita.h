#pragma once
using namespace System::Drawing;
class CChita
{
private:
	int x;
	int y;
	int alto;
	int ancho;
	int indice;
public:
	CChita();
	~CChita();
	CChita(int x, int y);
	void Dibujar(BufferedGraphics ^buffer, Image ^SpriteChita, int ancho, int alto);
	int Get_X();
	int Get_Y();
	int Get_Ancho();
	int Get_Alto();
};


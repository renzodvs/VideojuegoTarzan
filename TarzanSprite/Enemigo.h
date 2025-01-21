#pragma once
using namespace System::Drawing;
class CEnemigo
{
protected:
	int x;
	int y;
	int dx;
	int dy;
	int ancho;
	int alto;
	int indice;
	int tipo;
public:
	CEnemigo();
	~CEnemigo();
	CEnemigo(int x, int y);
	virtual void Dibujar(BufferedGraphics ^buffer, Image ^Sprite, Image ^Bala,int ancho, int alto)abstract;
	virtual void Mover(BufferedGraphics ^buffer, Image^Sprite, Image ^Bala,int ancho, int alto)abstract;
	virtual int Get_X()		abstract;
	virtual int Get_Y()		abstract;
	virtual int Get_Ancho()	abstract;
	virtual int Get_Alto()	abstract;


};


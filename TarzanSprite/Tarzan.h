#pragma once
using namespace System::Drawing;
enum Direcciones { Ninguna, Derecha, Izquierda, Arriba, Abajo, CorrerDerecha, CorrerIzquierda };
class CTarzan
{
private:
	int x;
	int y;
	int dx;
	int dy;
	int alto;
	int ancho;
	int indiceX;
	int indiceY;
	int vidas;
	bool ParedForm;//Colision con la pared;
	bool EstaNadando;//CUANDO TARZAN ESTA NADANDO
	Direcciones Ultima;
public:
	Direcciones Direccion;
	CTarzan();
	~CTarzan();
	CTarzan(int x, int y);
	void Dibujar(BufferedGraphics ^buffer, Image ^Sprite, int ancho, int alto);
	void Caminar(BufferedGraphics ^buffer, Image^Sprite,int ancho, int alto);
	void Nadar(BufferedGraphics ^buffer, Image ^Sprite, int ancho, int alto);
	int Get_X();
	int Get_Y();
	int Get_Ancho();
	int Get_Alto();
	int Get_Vidas();
	bool Get_ParedForm();
	bool Get_EstaNadando();
	void Set_EstaNadando(bool value);
	void Set_ParedForm(bool value);
	void ColisionConEnemigo();
	void ColisionConChita();
	void JugarDeNuevo();
	void Set_DX(int value);
	void Set_X(int value);
	void Set_Y(int value);
	Direcciones Get_Direcciones();
};


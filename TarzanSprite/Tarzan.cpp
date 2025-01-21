#include "Tarzan.h"



CTarzan::CTarzan()
{
}


CTarzan::~CTarzan()
{
}
CTarzan::CTarzan(int x, int y){
			this->x = x;
			this->y = y;
			dx = 0;
			dy = 0;
			Direccion = Direcciones::Ninguna;
			Ultima = Direcciones::Izquierda;
			indiceX = 0;
			indiceY = 1;
			vidas = 5;
			EstaNadando = false;
}
void	CTarzan::Dibujar(BufferedGraphics ^buffer,Image ^Sprite,int ancho, int alto){

	if (EstaNadando)
	{
		int anchoImagen = ancho / 5;
		int altoImagen = alto / 2;

		System::Drawing::Rectangle porcion = System::Drawing::Rectangle(anchoImagen*indiceX, altoImagen*indiceY, anchoImagen, altoImagen);
		System::Drawing::Rectangle aumento = System::Drawing::Rectangle(x, y, anchoImagen * 3, altoImagen * 3);
		buffer->Graphics->DrawImage(Sprite, aumento, porcion, System::Drawing::GraphicsUnit::Pixel);
		x = dx + x;
		y = dy + y;
		this->ancho = ancho;
		this->alto = alto;
	}
	else
	{
		int anchoImagen = ancho / 8;
		int altoImagen = alto / 2;

		System::Drawing::Rectangle porcion = System::Drawing::Rectangle(anchoImagen*indiceX, altoImagen*indiceY, anchoImagen, altoImagen);
		System::Drawing::Rectangle aumento = System::Drawing::Rectangle(x, y, anchoImagen * 3, altoImagen * 3);
		buffer->Graphics->DrawImage(Sprite, aumento, porcion, System::Drawing::GraphicsUnit::Pixel);
		x = dx + x;
		y = dy + y;
		this->ancho = ancho;
		this->alto = alto;
	}
}

void CTarzan::Caminar(BufferedGraphics ^buffer, Image^Sprite,int ancho, int alto) {
	
	if (ParedForm)
	{
		switch (Direccion)
			{
				case Direcciones::Derecha:
					indiceY = 0;
					if (indiceX >= 0 && indiceX < 7)
						indiceX++;
					else
					{
						indiceX = 0;
					}
					dy = 0;
					dx = 20;
					Ultima = Derecha;
					break;
				case Direcciones::Izquierda:
					indiceY = 1;
					if (indiceX >= 0 && indiceX < 7)
						indiceX++;
					else
					{
						indiceX = 0;
					}
					dy = 0;
					dx = -20;
					Ultima = Izquierda;
					break;
				case Direcciones::CorrerDerecha:
					indiceY = 0;
					if (indiceX >= 0 && indiceX < 7)
						indiceX++;
					else
					{
						indiceX = 0;
					}
					dy = 0;
					dx = 40;
					Ultima = Derecha;
					break;
				case Direcciones::CorrerIzquierda:
					indiceY = 1;
					if (indiceX >= 0 && indiceX < 7)
						indiceX++;
					else
					{
						indiceX = 0;
					}
					dy = 0;
					dx = -40;
					Ultima = Izquierda;
					break;
				case Direcciones::Ninguna:
					dx = dy = 0;
					switch (Ultima)
					{
					case Direcciones::Derecha:
						indiceX = 0;
						indiceY = 0;
						break;
					case Direcciones::Izquierda:
						indiceX = 0;
						indiceY = 1;
						break;
					}
					break;
				}
			}
else
{
	switch (Direccion)
	{
	case Direcciones::Derecha:
		indiceY = 0;
		if (indiceX >= 0 && indiceX < 7)
			indiceX++;
		else
		{
			indiceX = 0;
		}
		dy = 0;
		dx = 20;
		Ultima = Derecha;
		break;
	case Direcciones::Izquierda:
		indiceY = 1;
		if (indiceX >= 0 && indiceX < 7)
			indiceX++;
		else
		{
			indiceX = 0;
		}
		dy = 0;
		dx = -20;
		Ultima = Izquierda;
		break;
	case Direcciones::Ninguna:
		dx = dy = 0;
		switch (Ultima)
		{
		case Direcciones::Derecha:
			indiceX = 0;
			indiceY = 0;
			break;
		case Direcciones::Izquierda:
			indiceX = 0;
			indiceY = 1;
			break;
		}
		break;
	}
}
	Dibujar(buffer, Sprite, ancho, alto);
}

void CTarzan::Nadar(BufferedGraphics ^buffer, Image ^Sprite, int ancho, int alto) {

	if (ParedForm)
	{
		switch (Direccion)
		{
		case Direcciones::Derecha:
			indiceY = 0;
			if (indiceX >= 0 && indiceX < 4)
				indiceX++;
			else
			{
				indiceX = 0;
			}
			dy = 0;
			dx = 20;
			Ultima = Derecha;
			break;
		case Direcciones::Izquierda:
			indiceY = 1;
			if (indiceX >= 0 && indiceX < 4)
				indiceX++;
			else
			{
				indiceX = 0;
			}
			dy = 0;
			dx = -20;
			Ultima = Izquierda;
			break;
		case Direcciones::Arriba:
			indiceY = 1;
			if (indiceX >= 0 && indiceX < 4)
				indiceX++;
			else
			{
				indiceX = 0;
			}
			dy = -20;
			dx = 0;
			Ultima = Izquierda;
			break;
		case Direcciones::Abajo:
			indiceY = 1;
			if (indiceX >= 0 && indiceX < 4)
				indiceX++;
			else
			{
				indiceX = 0;
			}
			dy = 20;
			dx = 0;
			Ultima = Izquierda;
			break;
		case Direcciones::Ninguna:
			dx = dy = 0;
			switch (Ultima)
			{
			case Direcciones::Derecha:
				indiceX = 0;
				indiceY = 0;
				break;
			case Direcciones::Izquierda:
				indiceX = 0;
				indiceY = 1;
				break;
			}
			break;
		}
	}
	else
	{
		switch (Direccion)
		{
		case Direcciones::Derecha:
			indiceY = 0;
			if (indiceX >= 0 && indiceX < 4)
				indiceX++;
			else
			{
				indiceX = 0;
			}
			dy = 0;
			dx = 0;
			Ultima = Derecha;
			break;
		case Direcciones::Izquierda:
			indiceY = 1;
			if (indiceX >= 0 && indiceX < 4)
				indiceX++;
			else
			{
				indiceX = 0;
			}
			dy = 0;
			dx = -20;
			Ultima = Izquierda;
			break;
		case Direcciones::Arriba:
			indiceY = 1;
			if (indiceX >= 0 && indiceX < 4)
				indiceX++;
			else
			{
				indiceX = 0;
			}
			dy = -20;
			dx = 0;
			Ultima = Izquierda;
			break;
		case Direcciones::Abajo:
			indiceY = 1;
			if (indiceX >= 0 && indiceX < 4)
				indiceX++;
			else
			{
				indiceX = 0;
			}
			dy = 20;
			dx = 0;
			Ultima = Izquierda;
			break;
		case Direcciones::Ninguna:
			dx = dy = 0;
			switch (Ultima)
			{
			case Direcciones::Derecha:
				indiceX = 0;
				indiceY = 0;
				break;
			case Direcciones::Izquierda:
				indiceX = 0;
				indiceY = 1;
				break;
			}
			break;
		}
	}

	Dibujar(buffer, Sprite, ancho, alto);
}


int CTarzan::Get_X() { return x; }
int CTarzan::Get_Y() { return y; }
int		CTarzan::Get_Vidas() { return vidas; }
void	CTarzan::ColisionConEnemigo() { vidas = vidas - 1; }
void CTarzan::ColisionConChita() { vidas = vidas + 1; }
void CTarzan::JugarDeNuevo() { vidas = 5; }
void CTarzan::Set_DX(int value) { dx = value; }
void CTarzan::Set_X(int value) { x = value; }
void CTarzan::Set_Y(int value) { y = value; }
bool CTarzan::Get_ParedForm() { return ParedForm; }
void CTarzan::Set_ParedForm(bool value) { ParedForm = value; }
int CTarzan::Get_Ancho() {
	if (EstaNadando)
	{
		return (ancho / 5) * 3;
	}
	else
	{
		return (ancho / 8) * 3;
	}
}
int CTarzan::Get_Alto() { return (alto / 2) * 3; }
Direcciones CTarzan::Get_Direcciones() { return Ultima; }
bool CTarzan::Get_EstaNadando() { return EstaNadando; }
void CTarzan::Set_EstaNadando(bool value) { EstaNadando = value; }


#include "Lianas.h"

CLianas::CLianas()
{
}


CLianas::~CLianas()
{
}

CLianas::CLianas(int x, int y) {
	this->x = x;
	this->y = y;
	radio = 150;
	angulo = 0.0;
	dx = 0.1;
}

void	CLianas::Dibujar(BufferedGraphics ^buffer) {
	Random r;
	int R = r.Next(0, 255);
	int G = r.Next(0, 255);
	int B = r.Next(0, 255);
	Point raiz = Point(x, y);
	PointF ultimo = PointF(x + (radio*cos(angulo)), y + (radio*sin(angulo)));
	Pen ^miPincel = gcnew Pen(Color::FromArgb(R, G, B));
	buffer->Graphics->DrawLine(miPincel, raiz, ultimo);
}
void	CLianas::Mover(BufferedGraphics ^buffer) {

	if (angulo > 3.1)
	{
		this->dx = -0.1;
	}
	if (angulo < 0.1)
	{
		this->dx = 0.1;
	}

	angulo += dx;

	Dibujar(buffer);
}
int		CLianas::Get_x() { return (x + (radio*cos(angulo))); }
int		CLianas::Get_y() { return (y + (radio*sin(angulo))); }
int		CLianas::Get_angulo() { return angulo; }
int		CLianas::Get_radio() { return radio; }
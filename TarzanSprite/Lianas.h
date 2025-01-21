#pragma once
#include <math.h>
using namespace System::Drawing;
using namespace System;
class CLianas
{
	int x;
	int y;
	double angulo;
	int radio;
	double dx;
public:
	CLianas();
	~CLianas();
	CLianas(int x, int y);
	void Dibujar(BufferedGraphics ^buffer);
	void Mover(BufferedGraphics ^buffer);
	int Get_x();
	int Get_y();
	int Get_angulo();
	int Get_radio();
};

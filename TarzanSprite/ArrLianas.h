#pragma once
#include "Lianas.h"
#include <vector>
using namespace std;
class CArrLianas
{
	vector <CLianas*>ArregloLianas;
public:
	CArrLianas();
	~CArrLianas();
	void AgregarLiana(int x, int y);
	void MoverLianas(BufferedGraphics ^buffer);
	void EliminarLianas();
	int Get_X();
	int Get_Y();
};


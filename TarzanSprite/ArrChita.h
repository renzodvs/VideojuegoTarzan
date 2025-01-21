#pragma once
#include "Tarzan.h"
#include "Chita.h"
#include <vector>
using namespace std;

class CArrChita
{
	vector<CChita*>ArregloChita;
public:
	CArrChita();
	~CArrChita();
	void AgregarChita(int x, int y);
	CChita* getElemento(int pos);
	void EliminarChita(CArrChita*oArreglo, CTarzan*oTarzan);
	void DibujarChita(BufferedGraphics ^buffer, Image ^SpriteChita, int ancho, int alto);
};


#pragma once
#include <vector>
#include "ArmasTarzan.h"
#include "Tarzan.h"
#include "ArrEnemigos.h"

using namespace std;

class CArrArmasTarzan
{
	vector<CArmasTarzan*>ArregloArmasTarzan;
	int tipo;
	int puntaje;
public:
	CArrArmasTarzan(int tipo);
	~CArrArmasTarzan();
	CArmasTarzan* getElemento(int pos);
	void AgregarDisparo(CTarzan*oTarzan);
	void Mover(BufferedGraphics ^buffer, Image ^imgArma, int ancho, int alto);
	void EliminarDisparo(CArrArmasTarzan*oArreglo, BufferedGraphics^buffer, CArrEnemigos*oArrEnemigos);
	void EliminarTodo();
	int Get_Puntaje();
	void Set_Puntaje(int value);
};


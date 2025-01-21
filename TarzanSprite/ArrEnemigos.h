#pragma once
#include "Enemigo.h"
#include "Tigre.h"
#include "Tiburon.h"
#include "Cazador.h"
#include "Tarzan.h"
#include <vector>

using namespace std;
using namespace System;

class CArrEnemigos
{
	int tipo;
	vector <CEnemigo*>ArregloEnemigo;
	int contadorTiburones;
public:
	CArrEnemigos(int tipo);
	~CArrEnemigos();
	CEnemigo* getElemento(int pos);
	int Get_Cant();
	void AgregarEnemigo(bool CazadorFinal);
	void Mover(BufferedGraphics ^buffer, Image ^SpriteTiburon, Image ^SpriteCazador, Image ^Bala, Image ^SpriteTigre, int anchoTiburon, int altoTiburon, int anchoCazador, int altoCazador, int anchoTigre, int altoTigre);
	void EliminarEnemigo(CArrEnemigos*oArreglo,int AnchoForm, BufferedGraphics^buffer, CTarzan *oTarzan);
	void Eliminar(int pos);
	void EliminarTodo();
};


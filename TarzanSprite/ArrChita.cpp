#include "ArrChita.h"



CArrChita::CArrChita()
{
}


CArrChita::~CArrChita()
{
}

void CArrChita::AgregarChita(int x, int y) {
	CChita*nuevo;
	nuevo = new CChita(x, y);
	ArregloChita.push_back(nuevo);
}

CChita* CArrChita::getElemento(int pos){
	if (pos < ArregloChita.size())
	{
		return ArregloChita[pos];
	}
}

void CArrChita::EliminarChita(CArrChita*oArreglo, CTarzan*oTarzan) {
	for (int i = 0; i < ArregloChita.size(); i++)
	{
		Rectangle Chita = Rectangle(oArreglo->getElemento(i)->Get_X(), oArreglo->getElemento(i)->Get_Y(), oArreglo->getElemento(i)->Get_Ancho(), oArreglo->getElemento(i)->Get_Alto());
		Rectangle Tarzan = Rectangle(oTarzan->Get_X(), oTarzan->Get_Y(), oTarzan->Get_Ancho(), oTarzan->Get_Alto());
		if (Tarzan.IntersectsWith(Chita))
		{
			oTarzan->ColisionConChita();
			oArreglo->ArregloChita.erase(oArreglo->ArregloChita.begin() + i);
		}
	}
}
void CArrChita::DibujarChita(BufferedGraphics ^buffer, Image ^SpriteChita, int ancho, int alto) {
	for (int i = 0; i < ArregloChita.size(); i++)
	{
		ArregloChita[i]->Dibujar(buffer, SpriteChita, ancho, alto);
	}
}

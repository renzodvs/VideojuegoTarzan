#include "ArrLianas.h"



CArrLianas::CArrLianas()
{
}


CArrLianas::~CArrLianas()
{
}

void CArrLianas::AgregarLiana(int x, int y) {
	CLianas*nuevo;
	nuevo = new CLianas(x, y);
	ArregloLianas.push_back(nuevo);
}
void CArrLianas::EliminarLianas() {
	ArregloLianas.clear();
}

void CArrLianas::MoverLianas(BufferedGraphics ^buffer) {

	for (int i = 0; i < ArregloLianas.size(); i++)
	{
		ArregloLianas[i]->Mover(buffer);
	}

}

int CArrLianas::Get_X() {
	return ArregloLianas[1]->Get_x();
}
int CArrLianas::Get_Y() {
	return ArregloLianas[1]->Get_y();
}
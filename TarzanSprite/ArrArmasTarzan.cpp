#include "ArrArmasTarzan.h"



CArrArmasTarzan::CArrArmasTarzan(int tipo)
{
	this->tipo = tipo;
	puntaje = 0;
}


CArrArmasTarzan::~CArrArmasTarzan()
{
}

CArmasTarzan* CArrArmasTarzan::getElemento(int pos){
	if (pos < ArregloArmasTarzan.size())
	{
		return ArregloArmasTarzan[pos];
	}		
}

void	CArrArmasTarzan::AgregarDisparo(CTarzan *oTarzan){
//TIPO 0 = CUCHILLO
//TIPO 1 = LANZA 
//TIPO 2 = FLECHA

	CArmasTarzan *nuevo;
	nuevo = new CArmasTarzan(oTarzan->Get_X(), oTarzan->Get_Y() + 20, oTarzan->Direccion, oTarzan->Get_Direcciones());
	ArregloArmasTarzan.push_back(nuevo);

}
void	CArrArmasTarzan::Mover(BufferedGraphics ^buffer,Image ^imgArma, int ancho, int alto){
	for (int i = 0; i < ArregloArmasTarzan.size(); i++)
	{
		ArregloArmasTarzan[i]->Dibujar(buffer, imgArma, ancho, alto);
	}
}

void CArrArmasTarzan::EliminarTodo() {
	ArregloArmasTarzan.clear();
}



void	CArrArmasTarzan::EliminarDisparo(CArrArmasTarzan*oArreglo,BufferedGraphics^buffer, CArrEnemigos*oArrEnemigos){
	//FORMULARIO
	Rectangle rec3 = Rectangle(0, 0, 10, 500);
	//buffer->Graphics->DrawRectangle(Pens::Red, 0, 0, 10, 500);

	for (int i = 0; i < oArreglo->ArregloArmasTarzan.size(); i++)
	{
		for (int j = 0; j < oArrEnemigos->Get_Cant(); j++)
		{
			Rectangle Arma = Rectangle(oArreglo->getElemento(i)->Get_X(), oArreglo->getElemento(i)->Get_Y(), oArreglo->getElemento(i)->Get_Ancho(), oArreglo->getElemento(i)->Get_Alto());
			//buffer->Graphics->DrawRectangle(Pens::Green, oArreglo->getElemento(i)->Get_X(), oArreglo->getElemento(i)->Get_Y(), oArreglo->getElemento(i)->Get_Ancho(), oArreglo->getElemento(i)->Get_Alto());
			Rectangle Enemigo = Rectangle(oArrEnemigos->getElemento(j)->Get_X(), oArrEnemigos->getElemento(j)->Get_Y(), oArrEnemigos->getElemento(j)->Get_Ancho() , oArrEnemigos->getElemento(j)->Get_Alto() );
			if (Arma.IntersectsWith(Enemigo))
			{
				oArreglo->ArregloArmasTarzan.erase(oArreglo->ArregloArmasTarzan.begin() + i);
				oArrEnemigos->Eliminar(j);
				puntaje += 50;
			}
		}

	}
}

int CArrArmasTarzan::Get_Puntaje() { return puntaje; }
void CArrArmasTarzan::Set_Puntaje(int value) { puntaje = value; }

#include "ArrEnemigos.h"



CArrEnemigos::CArrEnemigos(int tipo)
{
	this->tipo = tipo;
	contadorTiburones = 0;
}

CArrEnemigos::~CArrEnemigos()
{

}

CEnemigo* CArrEnemigos::getElemento(int pos) {
	
	if (pos < ArregloEnemigo.size())
	{
		return ArregloEnemigo[pos];
	}
}

void CArrEnemigos::EliminarTodo() {
	ArregloEnemigo.clear();
}

void CArrEnemigos::AgregarEnemigo(bool CazadorFinal){

	CEnemigo*nuevo;

	if (tipo == 0)
	{
		contadorTiburones += 2;
		if (contadorTiburones % 3 == 0)
		{
			nuevo = new CTiburon(0, 300);
			ArregloEnemigo.push_back(nuevo);
		}
		else
		{
			if (contadorTiburones % 2 == 0)
			{
				nuevo = new CTiburon(0, 400);
				ArregloEnemigo.push_back(nuevo);
			}
		}
	}
	else
	{
		if (tipo == 1)
		{
			if (CazadorFinal)
			{
				nuevo = new CCazador(250, 315);
				ArregloEnemigo.push_back(nuevo);
			}
			else
			{
				nuevo = new CCazador(100, 315);
				ArregloEnemigo.push_back(nuevo);
			}

		}
		else
		{
			if (tipo == 2)
			{
				nuevo = new CTigre(800, 300);
				ArregloEnemigo.push_back(nuevo);
			}
		}
	}
	
}

void CArrEnemigos::Mover(BufferedGraphics ^buffer, Image ^SpriteTiburon, Image ^SpriteCazador, Image ^Bala, Image ^SpriteTigre, int anchoTiburon, int altoTiburon, int anchoCazador, int altoCazador, int anchoTigre, int altoTigre){

	for (int i = 0; i < ArregloEnemigo.size(); i++)
	{
		if (tipo == 0)
		{
			ArregloEnemigo[i]->Mover(buffer, SpriteTiburon, Bala, anchoTiburon, altoTiburon);
		}
		else
		{
			if (tipo == 1)
			{
				ArregloEnemigo[i]->Mover(buffer, SpriteCazador, Bala, anchoCazador, altoCazador);
			}
			else
			{
				if (tipo == 2)
				{
					ArregloEnemigo[i]->Mover(buffer, SpriteTigre, Bala, anchoTigre, altoTigre);
				}
			}
		}
		
	}
}

int CArrEnemigos::Get_Cant() { return ArregloEnemigo.size(); }
void CArrEnemigos::Eliminar(int pos) {

	if (pos<ArregloEnemigo.size())
	{
		ArregloEnemigo.erase(ArregloEnemigo.begin() + pos);
	}

}
void CArrEnemigos::EliminarEnemigo(CArrEnemigos*oArreglo,int AnchoForm, BufferedGraphics ^buffer, CTarzan *oTarzan){

	for (int i = 0; i < oArreglo->ArregloEnemigo.size(); i++)
	{
		//FORMULARIO
		Rectangle rec2 = Rectangle(1000, 0, 10, 500);
		Rectangle rec4 = Rectangle(0, 400, 1000, 10);
		//buffer->Graphics->DrawRectangle(Pens::Red, 1000, 0, 10, 500);
		//buffer->Graphics->DrawRectangle(Pens::Red, 0, 290, 1000, 10);
		//JUGADOR
		Rectangle rec3 = Rectangle(oTarzan->Get_X(), oTarzan->Get_Y(), oTarzan->Get_Ancho(), oTarzan->Get_Alto());
		//buffer->Graphics->DrawRectangle(Pens::Red, oTarzan->Get_X(), oTarzan->Get_Y(), oTarzan->Get_Ancho(), oTarzan->Get_Alto());
		
		Rectangle rec1 = Rectangle(oArreglo->getElemento(i)->Get_X(), oArreglo->getElemento(i)->Get_Y(), oArreglo->getElemento(i)->Get_Ancho() , oArreglo->getElemento(i)->Get_Alto() );
		//BORRAR DIBUJOS
		//buffer->Graphics->DrawRectangle(Pens::Black, oArreglo->getElemento(i)->Get_X(), oArreglo->getElemento(i)->Get_Y(), oArreglo->getElemento(i)->Get_Ancho() , oArreglo->getElemento(i)->Get_Alto() );
		if (rec1.IntersectsWith(rec3))
		{
			oArreglo->ArregloEnemigo.erase(oArreglo->ArregloEnemigo.begin() + i);
			oTarzan->Set_X(900);//POSICION INICIAL DEL JUGADOR
			oTarzan->ColisionConEnemigo();
		}
		if (rec1.IntersectsWith(rec2))
		{
			oArreglo->ArregloEnemigo.erase(oArreglo->ArregloEnemigo.begin() + i);
		}
		if (rec3.IntersectsWith(rec2))
		{
			oTarzan->Set_ParedForm(false);
		}
		else
		{
			oTarzan->Set_ParedForm(true);
		}

	}
				

		//if (oArreglo->ArregloEnemigo[i]->Get_X() + (oArreglo->ArregloEnemigo[i]->Get_Ancho()/9) > AnchoForm)//TIPO TIBURON
		//{
		//	/*oArreglo->ArregloEnemigo[i]->Set_X(50);*/
		//	ArregloEnemigo.erase(ArregloEnemigo.begin() + i);
		//}


}

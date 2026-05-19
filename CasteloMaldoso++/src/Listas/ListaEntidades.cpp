#include "../../include/Listas/ListaEntidades.hpp"

void ListaEntidades::percorrer()
{
	Entidades::Entidade* pAux = LEs.getPrimeiro()->getInfo();
	while (pAux != NULL)
	{
		cout << "Elemento de id: " << pAux->getId() << " está na lista!" << endl;
	}
}
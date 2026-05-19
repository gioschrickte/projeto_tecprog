#pragma once
#include "Lista.hpp"
#include "../entidades/entidade.hpp"
#include <iostream>
using namespace std;

class ListaEntidades
{
private:
	Listas::Lista<Entidades::Entidade> LEs;
public:
	ListaEntidades()
		: LEs()
	{

	}
	~ListaEntidades();
	void incluir(Entidades::Entidade* pE)
	{
		LEs.incluir(pE);
	}
	void percorrer();
};
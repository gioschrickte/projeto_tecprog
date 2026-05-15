#include "../include/Principal.h"

Principal::Principal()
	: pGrafico(pGrafico->getGerenciadorGrafico())
{
	executar();
}


Principal::~Principal() {

}

void Principal::executar() {
	while (pGrafico->verificaJanelaAberta())
	{

	}
}
#include "../include/Principal.h"

Principal::Principal()
	: pGrafico(Gerenciador_Grafico::getGerenciadorGrafico()), e1(new Ente())
{
	Ente::setGG(pGrafico);
	executar();
}


Principal::~Principal() {
	if (e1)
	{
		delete e1;
		e1 = NULL;
	}
}

void Principal::executar() {
	while (pGrafico->verificaJanelaAberta())
	{
		while (const std::optional event = pGrafico->getWindow()->pollEvent())
		{
			if (event->is<sf::Event::Closed>())
				pGrafico->fechaJanela();
		}
		pGrafico->limpaJanela();
		e1->desenhar();
		pGrafico->mostraElementos();
	}
}
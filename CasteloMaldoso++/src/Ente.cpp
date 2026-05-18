#include "../include/Ente.h"

Gerenciador_Grafico* Ente::pGG(Gerenciador_Grafico::getGerenciadorGrafico());
int Ente::cont_id(0);

Ente::Ente()
	: id(cont_id++), figura(NULL)
{
	figura = new sf::RectangleShape(sf::Vector2f(20.0, 20.0));
	figura->setFillColor(sf::Color::Green);
}

Ente::~Ente()
{
	if (figura)
	{
		delete figura;
		figura = NULL;
	}
}

void Ente::desenhar()
{
	pGG->desenhaElemento(*figura);
}


void Ente::setGG(Gerenciador_Grafico* pG)
{
	pGG = pG;
}
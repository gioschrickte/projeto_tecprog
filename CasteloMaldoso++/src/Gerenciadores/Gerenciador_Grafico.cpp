#include "../../include/Gerenciadores/Gerenciador_Grafico.hpp"
#include <iostream>
using namespace std;

Gerenciador_Grafico* Gerenciador_Grafico::pGrafico(nullptr);

Gerenciador_Grafico::Gerenciador_Grafico()
	: window(new sf::RenderWindow(sf::VideoMode({ 800, 600 }), "Castelo++"))
{
	if (window == nullptr)
	{
		cerr << "ERRO: Falha na criação de janela gráfica!\n" << endl;
		exit(1);
	}
}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
	if (window)
	{
		delete window;
		window = nullptr;
	}
}

Gerenciador_Grafico* Gerenciador_Grafico::getGerenciadorGrafico()
{
	if (pGrafico == nullptr)
	{
		pGrafico = new Gerenciador_Grafico();
	}
	return pGrafico;
}

sf::RenderWindow* Gerenciador_Grafico::getWindow()
{
	return window;
}

void Gerenciador_Grafico::limpaJanela()
{
	window->clear();
}

void Gerenciador_Grafico::desenhaElemento(sf::RectangleShape& corpo)
{
	window->draw(corpo);
}

void Gerenciador_Grafico::mostraElementos()
{
	window->display();
}

void Gerenciador_Grafico::fechaJanela()
{
	window->close();
}

const bool Gerenciador_Grafico::verificaJanelaAberta()
{
	return window->isOpen();
}


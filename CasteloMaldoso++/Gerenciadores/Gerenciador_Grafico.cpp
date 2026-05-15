#include "../include/Gerenciadores/Gerenciador_Grafico.hpp"
#include <iostream>
using namespace std;

Gerenciador_Grafico::Gerenciador_Grafico()
	: window(new sf::RenderWindow(sf::VideoMode({ 800, 600 }), "Castelo++"))
{
	if (window == nullptr)
	{
		cerr << "ERRO: Falha na criação de janela gráfica!\n" << endl;
		exit(1);
	}
	pGrafico = this;
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
		return new Gerenciador_Grafico();
	}
}

sf::RenderWindow* Gerenciador_Grafico::getWindow()
{
	return window;
}

void Gerenciador_Grafico::limpaJanela()
{
	window->clear();
}

void Gerenciador_Grafico::desenhaElemento(sf::RectangleShape corpo)
{
	window->draw(corpo);
}

void Gerenciador_Grafico::mostraElementos()
{
	window->display();
}

void Gerenciador_Grafico::limpaJanela()
{
	window->close();
}

const bool Gerenciador_Grafico::verificaJanelaAberta()
{
	return window->isOpen();
}
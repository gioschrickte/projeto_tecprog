#pragma once
#include <iostream>
#include <SFML/Window.hpp>
#include "../include/Gerenciadores/Gerenciador_Grafico.hpp"
#include "../include/Ente.h"

class Principal
{
private:
	Gerenciador_Grafico* pGrafico; // Ajustes necessários
	Ente* e1;
	// Gerenciador colisoes
	// Gerenciador Eventos
	// Jogador 1
	// Fase 1
	// Fase 2
public:
	Principal();
	~Principal();
	void executar();
};
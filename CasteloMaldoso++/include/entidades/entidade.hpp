#pragma once

#include "../Ente.h"

namespace Entidades
{
	class Entidade : public Ente
	{
	protected:
		sf::Vector2i pos;
	public:
		Entidade();
		Entidade(sf::Vector2i p);
		~Entidade();
		virtual void executar() = 0;
		// Falta persistência de classe -> arquivo de salvamento
	};
}
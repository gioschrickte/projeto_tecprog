#include "../../include/entidades/entidade.hpp"
using namespace Entidades;

Entidade::Entidade()
	: Ente(), pos(0, 0)
{

};

Entidade::~Entidade()
{

}

Entidade::Entidade(sf::Vector2i p)
	: Ente(), pos(p.x, p.y)
{

}


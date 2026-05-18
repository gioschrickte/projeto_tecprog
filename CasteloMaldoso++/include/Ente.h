#pragma once
#include "Gerenciadores/Gerenciador_Grafico.hpp"

class Ente
{
private:
	int id;
	static int cont_id;
	static Gerenciador_Grafico* pGG;
	sf::RectangleShape* figura;
public:
	Ente();
	virtual ~Ente();
	void desenhar();
	static void setGG(Gerenciador_Grafico* pG);
};
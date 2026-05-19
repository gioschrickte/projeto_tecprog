#include "../Ente.h"

namespace Entidades
{
	class Entidade : public Ente
	{
	protected:
		sf::Vector2i pos;
		int x;
		int y;
	public:
		Entidade();
		~Entidade();
		virtual void executar() = 0;
		// Falta persistência de classe -> arquivo de salvamento
	};
}
#include <SFML\Graphics.hpp>
#ifndef Barra_h
#define Barra_h


class Barra
{
public:
	sf::RectangleShape rect;
	sf::Vector2f posiciona;
	float movx;
	Barra();

	void mover(float aceleracion);

	void tamano(sf::Vector2f x);

};

#endif // !Barra_h
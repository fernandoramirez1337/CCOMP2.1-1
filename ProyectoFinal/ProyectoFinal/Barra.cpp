#include "Barra.h"
#include "Funciones.h"

Barra::Barra() {
	posiciona.x = 320, posiciona.y = 440, rect.setSize(sf::Vector2f(60, 10));
	movx = 2.0;
	rect.setPosition(sf::Vector2f(320, 440));
	rect.setFillColor(sf::Color::White);
	rect.setOutlineColor(sf::Color::White);
	rect.setOutlineThickness(2);
}

void Barra::mover(float aceleracion)
{
	rect.move(sf::Vector2f(movx*aceleracion, 0));
}
void Barra::tamano(sf::Vector2f x)
{
	rect.setSize(x);
}
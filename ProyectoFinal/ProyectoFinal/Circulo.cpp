#include "Circulo.h"
#include <SFML\Graphics.hpp>
#include <iostream>
#include "Funciones.h"

Circulo::Circulo(float z) :circle(z) {
	circle.setPosition(sf::Vector2f(320, 240));
}

Circulo::Circulo()
{
	ballx = RandomFloat(0.5, 1.0);
	bally = RandomFloat(0.5, 0.8);
	circle.setRadius(7.0);
	circle.setPosition(sf::Vector2f(320, 240));
	circle.setOutlineThickness(2);
	circle.setOutlineColor(sf::Color::Green);
	circle.setFillColor(sf::Color::Green);
}
void Circulo::posicion(float x, float y)
{
	circle.setPosition(sf::Vector2f(x, y));
	return;
}

void Circulo::cambiodirx()
{
	ballx = -ballx;
	return;
}

void Circulo::cambiodiry()
{
	bally = -bally;
	return;
}

void Circulo::mover(float acele)
{
	circle.move(ballx*acele, bally*acele);
	return;
}


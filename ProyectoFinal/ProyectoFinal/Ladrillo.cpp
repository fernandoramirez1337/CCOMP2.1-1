#include"Ladrillo.h"
#include "Funciones.h"
#include <iostream>

void Ladrillo::modificarmatbloques(int x[13][10])
{
	for (int i = 0; i<13; i++)
		for (int j = 0; j < 10; j++)
		{
			matbloques[i][j] = x[i][j];
		}
	return;
}
Ladrillo1::Ladrillo1()
{
	for (int i = 0; i<13; i++)
		for (int j = 0; j < 10; j++)
		{

			sf::Texture t1;
			t1.loadFromFile("imagenes/block02.png");
			blocks[i][j].setTexture(t1);
			blocks[i][j].setColor(sf::Color::Yellow);
		}
}

void Ladrillo1::inicializar(int matbloques[13][10])
{
	for (int i = 0; i < 13; i++)
		for (int j = 0; j < 10; j++)
		{
			if (matbloques[i][j] == 1) {
				blocks[i][j].setPosition((1 + i) * 43.0, j * 21.0);
			}
			else
				blocks[i][j].setPosition(sf::Vector2f(-200.0, 0.0));
		}
	return;
}

int Ladrillo1::actualizar(Circulo &x, int i, int j, int &n)
{
	if (blocks[i][j].getGlobalBounds().intersects(x.circle.getGlobalBounds())) {
		blocks[i][j].setPosition(sf::Vector2f(-200, 100));
		matbloques[i][j] = 0;
		x.bally *= -1;
		n = n + 1;
		return 1;
	}

	return 0;
}
void Ladrillo2::inicializar(int matbloques[13][10])
{

	for (int i = 0; i < 13; i++)
		for (int j = 0; j < 10; j++)
		{
			if (matbloques[i][j] == 2) {
				blocks[i][j].setPosition((1 + i) * 43.0, j * 21.0);
			}
			else
				blocks[i][j].setPosition(sf::Vector2f(-200.0, 0.0));
		}
	return;
}

int Ladrillo2::actualizar(Circulo &x, int i, int j, Ladrillo1 &y, int &n) {
	if (blocks[i][j].getGlobalBounds().intersects(x.circle.getGlobalBounds())) {
		blocks[i][j].setPosition(sf::Vector2f(-200, 0));
		x.ballx *= -1;
		x.bally *= -1;
		n = n + 1;
		y.blocks[i][j].setPosition(sf::Vector2f((i + 1) * 43, 21 * j));

		return 1;
	}
	return 0;
}
Ladrillo2::Ladrillo2() {
	for (int i = 0; i<13; i++)
		for (int j = 0; j < 10; j++)
		{

			sf::Texture t1;
			t1.loadFromFile("imagenes/block01.png");
			blocks[i][j].setTexture(t1);
			blocks[i][j].setColor(sf::Color::Blue);
		}
}
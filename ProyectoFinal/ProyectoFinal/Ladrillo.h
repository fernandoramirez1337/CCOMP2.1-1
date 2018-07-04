#include <SFML\Graphics.hpp>
#include "Circulo.h"
#ifndef Ladrillo_h
#define Ladrillo_h

class Ladrillo
{
public:
	sf::Sprite blocks[13][10];
	int matbloques[13][10];
	void modificarmatbloques(int[13][10]);
};


class Ladrillo1 :public Ladrillo
{
public:
	Ladrillo1();

	void inicializar(int[13][10]);

	int actualizar(Circulo &, int, int, int &);

};
class Ladrillo2 :public Ladrillo
{
public:
	Ladrillo2();
	void inicializar(int[13][10]);

	int actualizar(Circulo &, int, int, Ladrillo1 &, int &);

};
#endif // !Ladrillo_h
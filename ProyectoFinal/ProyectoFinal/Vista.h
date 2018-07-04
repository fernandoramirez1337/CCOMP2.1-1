#include "Ladrillo.h"
#include "Circulo.h"
#include "Barra.h"

#ifndef Vista_h
#define Vista_h


class Vista
{
public:
	Circulo x;
	Barra w;
	Ladrillo1 y;
	Ladrillo2 z;
	sf::RenderWindow window;// (sf::VideoMode(x, y), "BrickBreaker");
	Vista();
	void dibuja();// Ladrillo1 *y, Ladrillos *z, Circulo *x, Barra *w);
	void cerrar();
	void incializar();
};




#endif // !Vista_h

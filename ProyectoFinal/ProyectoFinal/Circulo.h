#include <SFML\Graphics.hpp>
#ifndef Circulo_h
#define Circulo_h

class Circulo
{
public:
	sf::CircleShape circle;
	float ballx, bally;

	Circulo(float);
	Circulo();

	void posicion(float, float);

	void cambiodirx();

	void cambiodiry();

	void mover(float);

};


#endif // !Circulo_h

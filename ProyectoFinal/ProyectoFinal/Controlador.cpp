#include "Controlador.h"
#define acele 1.0

void Controlador::loop(int &freno, int &aux) {//Barra *x, Circulo *y, int &freno, int &aux, Ladrillo2 *b, Ladrillo1 *a) {
	if (vidas == 0)
	{
		freno = 1;
		ventana.cerrar();
	}
	for (int i = 0; i<13; i++)
		for (int j = 0; j < 13; j++) {
			ventana.y.actualizar(ventana.x, i, j, modelo.h);
			ventana.z.actualizar(ventana.x, i, j, ventana.y, modelo.h);
		}
	teclado((ventana.w));
	modelo.paredes(ventana.x);
	modelo.colision(ventana.y, ventana.z, ventana.x);// a, b, y);
	modelo.barrapelota(ventana.x, ventana.w);
	ventana.dibuja();
	aux = 0;

	ventana.x.mover(acele);
	if (ventana.x.circle.getPosition().y > 500)
	{
		ventana.x.ballx = RandomFloat(0.5, 1.0);
		ventana.x.bally = RandomFloat(-1.0, -0.1);
		ventana.x.posicion(320.0, 240.0);
		ventana.w.rect.setPosition(320, 440);
		vidas -= 1;
		aux = 1;
	}
	return;
}

void Controlador::teclado(Barra &x) {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
	{
		if (x.rect.getPosition().x >= 0.0)
			x.mover(-1 * acele);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
	{
		if (x.rect.getPosition().x <= 580)
			(x).mover(1 * acele);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::P))
	{
		while (true) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::R))
				break;
		}
	}
}
Controlador::Controlador() {
	vidas = 3;
	ventana.incializar();
}
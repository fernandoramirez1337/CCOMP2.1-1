#include "Vista.h"
#include "Funciones.h"
void Vista::dibuja() {
	window.clear();
	window.draw(x.circle);
	window.draw(w.rect);
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			window.draw(y.blocks[i][j]);
			window.draw(z.blocks[i][j]);
		}
	}
	window.display();
}
Vista::Vista()
{
	window.create(sf::VideoMode(640, 480), "BrickBreaker(Arkanoid)");
}
void Vista::cerrar() {
	window.close();
}
void Vista::incializar() {
	int mat[13][10];
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 10; j++)
		{
			float numero;
			numero = RandomFloat(0.0, 1.0);
			if (numero < 0.5)
			{
				mat[i][j] = 1;
			}
			else if (numero < 1.0)
			{
				mat[i][j] = 2;
			}
		}
	}
	y.inicializar(mat);
	z.inicializar(mat);
}
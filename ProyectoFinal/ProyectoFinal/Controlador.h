#include "Vista.h"
#include "Model.h"
#include "Funciones.h"

#ifndef Controlador_h
#define Controlador_h

class Controlador
{
public:
	Model modelo;
	Vista ventana;
	int vidas;
	Controlador();
	void teclado(Barra &x);
	void loop(int &, int &);//Barra *x, Circulo *y, int &freno, int &aux, Ladrillo2 *b, Ladrillo1 *a);
};

#endif // !Controlador_h

#include "Circulo.h"
#include "Barra.h"
#include "Ladrillo.h"

#ifndef Model_h
#define Model_h

class Model
{
public:
	int h;
	Model();
	void colision(Ladrillo1 &a, Ladrillo2 &b, Circulo &ball);
	void paredes(Circulo &ball);
	void barrapelota(Circulo &ball, Barra &barra);
};


#endif // !Model_h
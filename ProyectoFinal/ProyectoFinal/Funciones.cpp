#include <iostream>
#include <SFML\Graphics.hpp>
#include <windows.h>
#include <cstdlib>
#include "Funciones.h"
#include "Ladrillo.h"

float RandomFloat(float a, float b) {
	float random = ((float)rand()) / (float)RAND_MAX;
	float dif = b - a;
	float r = random * dif;
	return a + r;
}

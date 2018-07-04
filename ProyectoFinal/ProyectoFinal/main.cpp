#include <iostream>

#include <SFML\Graphics.hpp>
#include <windows.h>
#include <cstdlib>

#include "Circulo.h"
#include "Funciones.h"
#include "Barra.h"
#include "Ladrillo.h"
#include "Model.h"
#include "Vista.h"
#include "Controlador.h"

#include <fstream>


using namespace std;


int main() {
	srand(time(0));

	Controlador control;

	int stop = 0, vida = 0;
	cout << "Vidas: " << control.vidas << endl;

	while (!stop) {
		control.loop(stop, vida);
		if (vida) {
			system("CLS");
			Sleep(3300); cout << "Vidas: " << control.vidas << endl;

		}
		else if (control.vidas == 0) {
			cout << "Perdiste" << endl;
			cout << "Puntaje final : " << control.modelo.h * 10 << endl;

		}
	}

	////////////////////////////////////////////////////////////////////////////////////

	char nombre[10];
	cout << "Ingrese su nombre: ";
	cin >> nombre;

	ofstream txt("Puntajes.txt", ios_base::app);

	//txt.open("Puntajes.txt");
	txt << "El jugador " << nombre << " hizo " << control.modelo.h << " puntos" << endl;
	txt.close();

	system("CLS");

	string linea;
	ifstream puntajes("Puntajes.txt");
	if (puntajes.is_open())
	{
		while (getline(puntajes, linea))
		{
			cout << linea << endl << endl;
		}
		puntajes.close();
	}

	system("pause");

	return 0;
}
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
struct trabajo
{
    char nombre[100];
    int id;
    char trabajo[10];
}trabajadores[10];

int main()
{
    int numTrabajadores = 1;
    int opcion = 0;
    int def =1;
    ofstream file;
    while(1)
    {
        cout << "\nThe db++ Base de datos\n1-Para ingresar data\n2-Para leer data\n3-Para guardar data\n";
        cin >> opcion;
        switch(opcion)
        {
            case 1:

                    cout << endl << "Ingrese el nombre del trabajador:" << endl;
                    cin >> trabajadores[numTrabajadores].nombre;
                    cout << endl << "Ingrese el ID del trabajador:" << endl;
                    cin >> trabajadores[numTrabajadores].id;
                    cout << endl << "Ingrese el cargo del trabajador:" << endl;
                    cin >> trabajadores[numTrabajadores].trabajo;
                    cout << endl;
                    numTrabajadores++;
                break;
            case 2:
                for( int i = 1; i < numTrabajadores; i++ )
                    cout << endl << "El trabajador numero. " << i << " es " << trabajadores[i].nombre << " con el ID numero. " << trabajadores[i].id;
                cout << endl << endl;
                break;
            case 3:
                file.open("report.txt");
                for( int i = 1; i < numTrabajadores; i++ )
                    file << endl << "El trabajador numero. " << i << " es " << trabajadores[i].nombre << " con el ID numero " << trabajadores[i].id << endl;
                file << endl;
                file.close();
                cout << "El archivo ha sido grabado" << endl;
                getch();
                break;
        }
    }
    return 0;
}

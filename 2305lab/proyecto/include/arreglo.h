#ifndef ARREGLO_H
#define ARREGLO_H

#include<iostream>
using namespace std;



bool esprimo(int n);


class ArregloDeEnteros
{

    private:
        int *ndata;
    public:
        int *data;
        int tamano;

        ArregloDeEnteros(int);
        ArregloDeEnteros(ArregloDeEnteros &o);
        ~ArregloDeEnteros();

        void add(int);
        //void add(int,int);
        void deletee(int);
        void empty();
        void sort();
        void print();
        int suma();
        float promedio();
        int mayor();
        int menor();
        void invertir();
        int mayorprimo();
        int menorprimo();
};

#endif // ARREGLO_H

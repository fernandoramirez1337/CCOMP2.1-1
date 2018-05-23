#include <iostream>
#include "arreglo.h"

using namespace std;




int main()
{
    ArregloDeEnteros a(4);
    a.data[0] = 3;
    a.data[1] = 6;
    a.data[2] = 23;
    a.data[3] = 9;
    a.add(4);
    a.sort();
    a.invertir();
    a.print();



    return 0;
}

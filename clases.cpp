#include <iostream>

using namespace std;
class ArregloDeEnteros
{
    public:
        int *datos;
        int *ndatos;
        int tamano;
        ArregloDeEnteros(int tamano)
        {
            datos = new int[tamano];
            this->tamano = tamano;
        }
        ArregloDeEnteros(ArregloDeEnteros &o)
        {
            datos = new int[o.tamano];
            tamano = o.tamano;
            for (int i = 0; i < tamano; ++i)
                datos[i] = o.datos[i];
        }
        ~ArregloDeEnteros()
        {
            delete[] datos;
        }
        void add(int numero)
        {
            tamano+=1;
            ndatos = new int[tamano];
            for (int i = 0; i < tamano-1; ++i)
                ndatos[i] = datos[i];
            delete[] datos;
            datos = new int[tamano];
            for (int i = 0; i < tamano; ++i)
                datos[i] = ndatos[i];
            delete[] ndatos;
            datos[tamano-1]=numero;
        }
        void deletee(int numero)
        {
            ndatos = new int[tamano-1];
            for (int i = 0; i < numero-1; ++i)
                ndatos[i] = datos[i];
            for (int i = numero; i < tamano-1; ++i)
                ndatos[i-1] = datos[i];
            delete[] datos;
            datos = new int[tamano-1];
            for (int i = 0; i < tamano-1; ++i)
                datos[i] = ndatos[i];
            delete[] ndatos;
            tamano-=1;

        }
        void empty()
        {
            delete[] datos;
            datos = new int[0];
            tamano=0;
        }
        void sort()
        {
            int i, j, var;
            for(i=1;i<tamano;++i)
            {
                for(j=0;j<(tamano-i);++j)
                    if(datos[j]>datos[j+1])
                        {
                        var=datos[j];
                        datos[j]=datos[j+1];
                        datos[j+1]=var;
                        }
            }
        }
};


int main()
{
    ArregloDeEnteros a(4);
    a.datos[0] = 4;
    a.datos[1] = 2;
    a.datos[2] = 8;
    a.datos[3] = 0;
    a.empty();
    cout<<a.datos[1]<<endl;


    return 0;
}

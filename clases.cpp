#include <iostream>

using namespace std;
class ArregloDeEnteros
{
    private:
        int *ndata;//Variable adicional
    public:
        int *data;
        int tamano;
        ArregloDeEnteros(int tamano)//Constructor
        {
            data = new int[tamano];
            this->tamano = tamano;
        }
        ArregloDeEnteros(ArregloDeEnteros &o)//Constructor Copia
        {
            data = new int[o.tamano];
            tamano = o.tamano;
            for (int i = 0; i < tamano; ++i)
                data[i] = o.data[i];
        }
        ~ArregloDeEnteros()//Destructor
        {
            delete[] data;
        }
        void add(int numero)//Funcion de insercion de entero
        {
            ndata = new int[tamano+1];
            for (int i = 0; i < tamano; ++i)
                ndata[i] = data[i];
            delete[] data;

            data = new int[tamano+1];
            for (int i = 0; i < tamano+1; ++i)
                data[i] = ndata[i];
            delete[] ndata;

            data[tamano]=numero;
            tamano+=1;
        }
        void deletee(int numero)//Funcion de eliminacion de entero
        {
            ndata = new int[tamano-1];

            for (int i = 0; i < numero-1; ++i)
                ndata[i] = data[i];

            for (int i = numero; i < tamano-1; ++i)
                ndata[i-1] = data[i];
            delete[] data;

            data = new int[tamano-1];
            for (int i = 0; i < tamano-1; ++i)
                data[i] = ndata[i];
            delete[] ndata;

            tamano-=1;

        }
        void empty()//Funcion de vaciado
        {
            delete[] data;
            data = new int[0];
            tamano=0;
        }
        void sort()//Funcion adicional de ordenamiento
        {
            int i, j, var;
            for(i=1;i<tamano;++i)
            {
                for(j=0;j<(tamano-i);++j)
                    if(data[j]>data[j+1])
                        {
                        var=data[j];
                        data[j]=data[j+1];
                        data[j+1]=var;
                        }
            }
        }
        void print()//Funcion adicional de impresion
        {
            if(!tamano)
                cout<<"empty"<<endl;
            else
            {

            for(int i=0;i<tamano;++i)
                cout<< data[i]<<" ";
            cout<<endl;
            }
        }
};


int main()
{
    ArregloDeEnteros a(4);
    a.data[0] = 4;
    a.data[1] = 2;
    a.data[2] = 9;
    a.data[3] = 0;
    a.add(10);
    a.sort();
    a.print();


    return 0;
}

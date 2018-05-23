#include "arreglo.h"

        bool esprimo(int n)
        {
            bool primo = true;
            for(int i = 2; i <= n / 2; ++i)
            {
                if(n % i == 0)
                {
                    primo = false;
                    break;
                }
            }
            if (primo)
                return 1;
            return 0;
        }



        ArregloDeEnteros::ArregloDeEnteros(int tamano)
            {
            data = new int[tamano];
            this->tamano = tamano;
            }

        ArregloDeEnteros::ArregloDeEnteros(ArregloDeEnteros &o)
            {
            data = new int[o.tamano];
            tamano = o.tamano;
            for (int i = 0; i < tamano; ++i)
                data[i] = o.data[i];
            }

        ArregloDeEnteros::~ArregloDeEnteros()
            {
            delete[] data;
            }

        void ArregloDeEnteros::add(int numero)
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

        /*void ArregloDeEnteros::add(int numero, int posicion)
            {
            ndata= new int [tamano+1];

            for(int i=0;i<posicion;++i)
                ndata[i]=data[i];

            ndata[posicion]=numero;

            for (int i=posicion+1;i<tamano;++i)
                    ndata[i]=data[i-1];
            delete[]data;

            data = new int[tamano+1];


            for (int i = 0; i < tamano; ++i)
                data[i] = ndata[i];
            delete[] ndata;

            tamano+=1;
            }*/

        void ArregloDeEnteros::deletee(int numero)
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

        void ArregloDeEnteros::empty()
            {
            delete[] data;
            data = new int[0];
            tamano=0;
            }

        void ArregloDeEnteros::sort()
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

        void ArregloDeEnteros::print()
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

        int ArregloDeEnteros::suma()
            {
            int p=0;
            for (int i=0;i<tamano;++i)
                p+=data[i];
            return p;
            }

        float ArregloDeEnteros::promedio()
            {
            return suma()/tamano;
            }

        int ArregloDeEnteros::mayor()
            {
            int p=0;
            for (int i=0;i<tamano;++i)
                (data[i]>p)?p=data[i]:p*1;
            return p;
            }

        int ArregloDeEnteros::menor()
            {
            int p=data[0];
            for (int i=0;i<tamano;++i)
                (data[i]<p)?p=data[i]:p*1;
            return p;
            }

        void ArregloDeEnteros::invertir()
            {
            int p;
            for(int i=0;i<tamano/2;++i)
                {
                p=data[i];
                data[i]=data[tamano-1-i];
                data[tamano-1-i]=p;
                }
            }

        int ArregloDeEnteros::mayorprimo()
            {
            int p=0;
            for (int i=0;i<tamano;++i)
                (data[i]>p&&esprimo(data[i]))?p=data[i]:p*1;
            return p;
            }

        int ArregloDeEnteros::menorprimo()
            {
            int p=data[1];
            for (int i=0;i<tamano;++i)
                (data[i]<p&&esprimo(data[i]))?p=data[i]:p*1;
            return p;
            }

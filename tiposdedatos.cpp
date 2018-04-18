#include <iostream>

using namespace std;

void maximoEntero()
    {
    int a=1;
    while (++a>0)
        {

        }
    cout<<--a<<endl;
    }

void maximoBool()
    {
    bool a=1;
    bool b=!a;
    cout<<a<<" "<<b<<endl;
    }

void maximoDouble()
    {
    double a=1;
    int cont=0;
    while(a>0)
        {
        a/=10;
        cont+=1;
        }
    cout<<"1/(10**"<<cont<<")"<<endl;
    }

void maximoChar()
    {
    char a=254;
    char b=255;
    char c=256;
    cout<<"Antepenultimo valor ascii (254) "<<a<<endl;
    cout<<"Ultimo valor ascii (255) "<<b<<" (En blanco)"<<endl;
    cout<<"No existe valor ascii (256)"<<c<<endl;
    }

int main()
    {
    return 0;
    }

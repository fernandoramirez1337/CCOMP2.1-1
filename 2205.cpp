#include <iostream>

using namespace std;

class Curso{

string nombre;
float notas[5];

public:
    Curso(string nombre, float n1,float n2 ,float n3 ,float n4 ,float n5)
    {
        notas[0]=n1;
        notas[1]=n2;
        notas[2]=n3;
        notas[3]=n4;
        notas[4]=n5;
        this->nombre = nombre;
    }

    Curso(Curso &o)
        {
            for (int i = 0; i < 5; ++i)
                notas[i] = o.notas[i];
        }

    float promedio()
        {
        float p=0;
        for (int i=0;i<5;++i)
            p+=notas[i];
        return p/5;
        }

    float mayornota()
        {
        float p=0;
        for (int i=0;i<5;++i)
            (notas[i]>p)?p=notas[i]:p*1;
        return p;
        }

    float menornota()
        {
        float p=notas[0];
        for (int i=0;i<5;++i)
            (notas[i]<p)?p=notas[i]:p*1;
        return p;
        }

    string nombree()
        {
        return nombre;
        }

    float nota(int i)
        {
        return notas[i];
        }

};



int main()
{
    Curso a("ccomp",3,6,8,9,5);
    cout<<a.promedio()<<endl;
    cout<<a.mayornota()<<endl;
    cout<<a.menornota()<<endl;
    cout<<a.nombree()<<endl;
    return 0;
}

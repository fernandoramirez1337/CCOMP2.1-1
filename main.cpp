#include <iostream>
using namespace std;

int t(char*x,int cont=0)
{
    if(*(x+cont)=='\0')
        return cont;
    return t(x,cont+=1);
}
//Función con punteros
bool palindrome(char*x)
{
    int tam=t(x);
    for(int i=0;i<tam/2;++i)
    {
        if(*(x+i)!=*(x+tam-i-1))
            return 0;
    }
    return 1;
}
//Función con arrays
bool palindromee(char x[])
{
    int tam=t(x);
    for(int i=0;i<tam/2;++i)
    {
        if(x[i]!=x[tam-i-1])
            return 0;
    }
    return 1;
}
//Invertir un array
void invertir(char x[])
{
    int tam=t(x);
    char var;
    for(int i=0;i<tam/2;++i)
    {
        var=x[i];
        x[i]=x[tam-i-1];
        x[tam-i-1]=var;
    }
}



int main()
{
    char x[]="Hello";
    invertir(x);
    cout<<x<<endl;
    return 0;
}

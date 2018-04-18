#include <iostream>

using namespace std;


int tamanoIterativo(int l1[])
{
    int len=0;
    while(l1[len]!='\0')
    {
    len+=1;
    }
    return len-4;
}

int tamanoRecursivo(int l1[],int len=0)
{
    if(l1[len]=='\0')
        return len-4;
    return tamanoRecursivo(l1,++len);
}


int sumaIterativa(int lista[])
{
    int t=tamanoRecursivo(lista);
    int suma=0;
    for(int i=0;i<t;++i)
        suma+=lista[i];
    return suma;
}

int sumaRecursiva(int lista[],int t, int suma=0)
{
    if (!t)
        {
        return suma;
        }
    return sumaRecursiva(lista,t-1,suma+=lista[t-1]);

}

void copiaIterativo(int l1[],int l2[])
{
    int t=tamanoRecursivo(l1);
    for (int i=0;i<t;++i)
    {
        l2[i]=l1[i];
    }
}

void copiaRecursivo(int l1[],int l2[],int t)
{
    if(!t)
        return;
    l2[t-1]=l1[t-1];
    copiaRecursivo(l1,l2,t-1);
}

int* concatenarIterativo(int l1[],int l2[])
{
    int l3[tamanoRecursivo(l1)+tamanoRecursivo(l2)];
    for (int i=0;i<tamanoRecursivo(l1);++i)
    {
        l3[i]=l1[i];
    }
    for (int i=tamanoRecursivo(l1);i<tamanoRecursivo(l2);++i)
    {
        l3[i]=l2[i];
    }
    return l3;

}

/*
void cambioIterativo(int l1[],int l2[],int t)
{
    int t=tamanoRecursivo(l1);
    int aux=0;
    for (int i=0;i<t;++i)
    {
        aux=l1[i];
        l1[i]=l2[i];
        l2[i]=aux;
    }
}

void cambioRecursivo(int l1[],int l2[],int t)
{
    if(!t)
        return;
    int aux=0;
    aux=l1[t-1];
    l1[t-1]=l2[t-1];
    l2[t-1]=aux;
    cambioRecursivo(l1,l2,t-1);
}
*/





int main()
{
    int l[]={1,2,4,5};
    cout<<sumaIterativa(l);

    return 0;
}



//'\0'


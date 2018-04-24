#include <iostream>

using namespace std;



int tamanoIterativo(char *l1)
{
    int len=0;
    while(*(l1+len)!='\0')
    {
    len+=1;
    }
    return len;
}
int tamanoRecursivo(char *l1,int len=0)
{
    if(*(l1+len)=='\0')
        return len;
    return tamanoRecursivo(l1,++len);
}




int sumaIterativa(char*l)
{
    int t=tamanoRecursivo(l);
    int suma=0;
    for(int i=0;i<t;++i)
        suma+=*(l+i);
    return suma;
}
int sumaRecursiva(char*l,int t, int suma=0)
{
    if (!t)
        {
        return suma;
        }
    return sumaRecursiva(l,t-1,suma+=*(l+t-1));

}

void copiaIterativo(char*l1,char*l2)
{
    int t=tamanoIterativo(l1);
    for (int i=0;i<t;++i)
        *(l2+i)=*(l1+i);

}
void copiaRecursivo(char*l1,char*l2,int t=0)
{
    if(t==tamanoIterativo(l1))
        return;
    *(l2+t)=*(l1+t);
    copiaRecursivo(l1,l2,++t);
}
/*
char* concatenarPunteros(char*l1,char*l2)
{
    int t1=tamanoRecursivo(l1);
    int t2=tamanoRecursivo(l2);
    int t3=t1+t2;
    char l3[t3];
    for (int x=0;x<t1;++x)
    {
        *(l3+x)=*(l1+x);
        *(l3+x+t1)=*(l2+x);
    }


    return l3;
}
*/
void imprimirLista(char*l)
{
    int t=tamanoRecursivo(l);
    for(int i=0;i<t;++i)
        cout<<*(l+i)<<" ";
}


int main()
{
    char a[]="hola";
    char b[]="xxxx";
    imprimirLista(a);
    imprimirLista(b);
    copiaRecursivo(a,b);
    imprimirLista(a);
    imprimirLista(b);

    return 0;
}



//'\0'

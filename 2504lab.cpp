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




int sumaIterativa(int*l,int len)
{
    int suma=0;
    for(int i=0;i<len;++i)
        suma+=*(l+i);
    return suma;
}
int sumaRecursiva(int*l,int len, int suma=0)
{
    if (!len)
        {
        return suma;
        }
    return sumaRecursiva(l,len-1,suma+=*(l+len-1));
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



void invertirIterativo(int *l,int len)
{
    int x;
    for(int i=0;i<(len/2);++i)
    {
        x=*(l+i);
        *(l+i)=*(l+len-i-1);
        *(l+len-i-1)=x;
    }
}
void invertirRecursivo(int *l,int len,int i=0)
{
    if(len<=i)
        return;
    int x;
    x=*(l+i);
    *(l+i)=*(l+len-1);
    *(l+len-1)=x;
    invertirRecursivo(l,len-1,i+1);

}




void concatenar(char*l1,char*l2)
{
    int t1=tamanoRecursivo(l1);
    int t2=tamanoRecursivo(l2);
    for (int i=0;i<t1;++i)
    {
        //if(*(l1+i)==" ")
    }
    return ;
}


void imprimirLista(char*l)
{
    int t=tamanoRecursivo(l);
    for(int i=0;i<t;++i)
        cout<<*(l+i)<<" ";
    cout<<endl;
}

void imprimirLista(int*l,int len)
{
    for(int i=0;i<len;++i)
        cout<<*(l+i)<<" ";
    cout<<endl;
}

int main()
{
    return 0;
}



//'\0'

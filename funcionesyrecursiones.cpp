#include <iostream>

using namespace std;

void ejercicio1(int numero)
{
    (numero<18)?cout<<"Usted es menor de edad"<<endl:cout<<"Usted es mayor de edad"<<endl;
}

int ejercicio2(int numero,int cont=0)
{
    if(cont==numero){
        cout<<", "<<cont<<"."<<endl;
        return 0;}
    if(!cont){
        cout<<cont;
        return ejercicio2(numero,cont+=1);}
    cout<<", "<<cont;
    return ejercicio2(numero,cont+=1);

}

void ejercicio3(int a,int b,int c)
{
    int mayor=0;
    int menor=0;
    int prom=(a+b+c)/3;
    (a>b)?((a>c)?cout<<"El mayor es "<<a<<endl:cout<<"El mayor es "<<c<<endl):((b>c)?cout<<"El mayor es "<<b<<endl:cout<<"El mayor es "<<c<<endl);
    (a<b)?((a<c)?cout<<"El menor es "<<a<<endl:cout<<"El menor es "<<c<<endl):((b<c)?cout<<"El menor es "<<b<<endl:cout<<"El menor es "<<c<<endl);
    cout<<"El promedio es: "<<prom<<endl;
}

void ejercicio4(int a, int b)
{
    ((a%2==0)&&(b%2==0))?cout<<"Ambos son divisibles entre 2"<<endl:(a%2==0)?cout<<a<<" es divisible entre 2"<<endl:(b%2==0)?cout<<b<<" es divisible entre 2"<<endl:cout<<"Ninguno es divisible entre 2"<<endl;
    (a%b==0)?cout<<a<<" es multiplo de "<<b<<endl:cout<<a<<" no es multiplo de "<<b<<endl;
    (a*a==b)?cout<<a<<" elevado al cuadrado es "<<b<<endl:cout<<a<<" elevado al cuadrado no es "<<b<<endl;
}

int ejercicio5 (int numero,int cont=2){
    if (cont==numero){
        cout<<numero<<" si es primo"<<endl;
        return 0;}
    if (numero%cont==0){
        cout<<numero<<" no es primo"<<endl;
        return 0;}
    return ejercicio5 (numero,cont+=1);}

int ejercicio6(int a,int numero=2,int cont=2)
{
    if (numero==a)
        {
        return 0;
        }
    if(cont==numero)
        {
        cout<<numero<<" es primo"<<endl;
        return ejercicio6(a,numero+=1,2);
        }
    if (numero%cont==0){
        return ejercicio6(a,numero+=1,2);}
    return ejercicio6(a,numero,cont+=1);
}

int ejercicio7(int numero,int cont=1){
    if(cont==100000)
        return 0;
    int a=numero-(numero%(10000/cont));
    cout<<a/(10000/cont)<<endl;
    return ejercicio7(numero-a,cont*=10);
}

int ejercicio8(int numero,int cont=1,int w=0, int x=0, int y=0, int z=0){
    if(cont==100000)
        {
       ((w==z)&&(x==y))?cout<<"Es palindrome"<<endl:cout<<"No es palindrome"<<endl;
        return 0;
        }
    int a=numero-(numero%(10000/cont));
    int res=a/(10000/cont);
    (cont==1)?w=res:w=w;
    (cont==10)?x=res:x=x;
    (cont==1000)?y=res:y=y;
    (cont==10000)?z=res:z=z;

    return ejercicio8(numero-a,cont*=10,w,x,y,z);
}

void ejercicio9(int numero)
{
(!(numero%4))?((!(numero%100)&&(numero%400))?cout<<"No es bisiesto"<<endl:cout<<"Es bisiesto"<<endl):cout<<"No es bisiesto"<<endl;
}

int ejercicio10(int numero)
{
    if((numero==0)||(numero==1))
        return 1;
    return ejercicio10(numero-1)+ejercicio10(numero-2);
}

int extra(int numero)
{
    if(numero==1)
        return 1;
    return numero*extra(numero-1);
}

int nuevo6(int a,int numero=2,int cont=2,int limite=0)
{
    if (limite==a)
        {
        return 0;
        }
    if(cont==numero)
        {
        cout<<numero<<" es primo"<<endl;
        return nuevo6(a,numero+=1,2,limite+=1);
        }
    if (numero%cont==0){
        return nuevo6(a,numero+=1,2,limite);}
    return nuevo6(a,numero,cont+=1,limite);
}


int main()
{



return 0;
}

#include <iostream>

using namespace std;

bool ejercicio1(int numero)
{
    return (numero<18)?false:true;
}

void ejercicio2(int numero,int cont=0)
{
    if(cont==numero){
        cout<<", "<<cont<<"."<<endl;
        return;}
    if(!cont){
        cout<<cont;}
    cout<<", "<<cont;
    ejercicio2(numero,cont+=1);

}

void nuevo3(float a,float b,float c,float &mayor,float &menor,float &prom)
{
    prom=(a+b+c)/3;
    mayor=(a>b)?((a>c)?a:c):((b>c)?b:c);
    menor=(a<b)?((a<c)?a:c):((b<c)?b:c);
}

void nuevo4(int a, int b,bool &pares,bool &divisible,bool &potencia)
{
    pares=((a%2==0)&&(b%2==0))?1:0;
    divisible=(a%b==0)?1:0;
    potencia=(a*a==b)?1:0;
}



int ejercicio5 (int numero,int cont=2){
    if (cont==numero){
        return 1;}
    if (numero%cont==0){
        return 0;}
    return ejercicio5 (numero,cont+=1);}

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

void ejercicio7(int numero,int cont=1){
    if(cont==100000)
        return ;
    int a=numero-(numero%(10000/cont));
    cout<<a/(10000/cont)<<endl;
    ejercicio7(numero-a,cont*=10);
}

bool ejercicio8(int numero,int cont=1,int w=0, int x=0, int y=0, int z=0){
    if(cont==100000)
        {
       return ((w==z)&&(x==y))?1:0;
        }
    int a=numero-(numero%(10000/cont));
    int res=a/(10000/cont);
    (cont==1)?w=res:w=w;
    (cont==10)?x=res:x=x;
    (cont==1000)?y=res:y=y;
    (cont==10000)?z=res:z=z;

    ejercicio8(numero-a,cont*=10,w,x,y,z);
}

bool ejercicio9(int numero)
{
return(!(numero%4))?((!(numero%100)&&(numero%400))?false:true):false;
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


bool bisiesto(int numero)
{
return((numero%4)||(numero%100)||!(numero%400));
}


int main()
{

nuevo6(5);


return 0;
}

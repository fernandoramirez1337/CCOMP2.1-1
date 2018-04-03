#include <iostream>

using namespace std;

int main()
{



//UNO
/*
int edad;
    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;
    if (edad<18)
        cout<<"Usted es menor de edad"<<endl;
    else
        cout<<"Usted es mayor de edad"<<endl;

*/
//DOS
/*

    int numero;
    cout<<"Ingrese su numero: "<<endl;
    cin>>numero;
    if (numero==1)
        cout<<numero<<endl;
    else
    {
        cout<<1;
        for(int cont=2;cont!=numero;++cont)
            cout<<", "<<cont;
    }

*/
//TRES
/*

int a,b,c;
    int mayor=0;
    int menor=0;
    cout<<"Ingrese sus 3 numeros: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    int prom=(a+b+c)/3;

    if ((a<=b)&&(c<=b))
        mayor=b;
    else if ((b<=a)&&(c<=a))
        mayor=a;
    else
        mayor=c;

    if ((a>=b)&&(c>=b))
        menor=b;
    else if ((b>=a)&&(c>=a))
        menor=a;
    else
        menor=c;

    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El menor es: "<<menor<<endl;
    cout<<"El promedio es: "<<prom<<endl;

*/
//CUATRO
/*
    int a,b;
    cout<<"Ingrese sus dos numeros: "<<endl;
    cin>>a;
    cin>>b;
    if((a%2==0)&&(b%2==0))
        cout<<"Ambos son divisibles entre 2"<<endl;
    else if (a%2==0)
        cout<<a<<" es divisible entre 2"<<endl;
    else if (b%2==0)
        cout<<b<<" es divisible entre 2"<<endl;
    else
        cout<<"Ninguno es divisible entre 2"<<endl;

    if(a%b==0)
        cout<<a<<" es multiplo de "<<b<<endl;
    else
        cout<<a<<" no es multiplo de "<<b<<endl;

    if (a*a==b)
        cout<<a<<" elevado al cuadrado es igual a "<<b<<endl;
    else
        cout<<a<<" elevado al cuadrado no es igual a "<<b<<endl;

*/
//CINCO
/*

int numero;
cout<<"Ingrese su numero: "<<endl;
cin>>numero;

for (int cont=3;cont<numero;++cont){
        if (numero%cont==0){
            cout<<numero<<" no es primo"<<endl;
            return 0;}}

cout<<numero<<" es primo"<<endl;

*/
//SEIS
/*

int numero;
    cout<<"Ingrese su numero"<<endl;
    cin>>numero;
    for (int i=2; i<numero; i++)
        for (int j=2; j<i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j+1)
                cout << i << " ";

        }

*/
//SIETE
/*
    int numero;
    int a,b,c,d,e;
    cout<<"Ingrese su numero de 5 cifras"<<endl;
    cin>>numero;
    a=numero-(numero%10000);
    b=numero-(numero%1000);
    c=numero-(numero%100);
    d=numero-(numero%10);
    e=numero;
    e=e-d;
    d=(d-c)/10;
    c=(c-b)/100;
    b=(b-a)/1000;
    a=a/10000;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;

*/
//OCHO
/*
    int numero;
    int a,b,c,d,e;
    cout<<"Ingrese su numero de 5 cifras"<<endl;
    cin>>numero;
    a=numero-(numero%10000);
    b=numero-(numero%1000);
    c=numero-(numero%100);
    d=numero-(numero%10);
    e=numero;
    e=e-d;
    d=(d-c)/10;
    c=(c-b)/100;
    b=(b-a)/1000;
    a=a/10000;

    if((a==e)&&(b==d))
        cout<<"Tu numero es palindrome"<<endl;
    else
        cout<<"Tu numero no es palindrome"<<endl;

*/
//NUEVE
/*
    int bisiesto;
    cout<<"Ingrese su año"<<endl;
    cin>>bisiesto;
    if (!(bisiesto%4))
        cout<<"Es bisiesto"<<endl;
    else
        cout<<"No es bisiesto"<<endl;

*/

//DIEZ
/*
int numero;
	int anterior = -1;
	int resultado= 1;
	int suma;

    cout<<"Ingrese su numero: "<<endl;
    cin>>numero;

	for(int cont=0;cont <= numero;++cont)
	{
		suma = resultado + anterior;
		anterior = resultado;
		resultado = suma;
	}

	cout<<"Su numero fibonacci es: "<<resultado<<endl;
    
*/
//EXTRA
/*
    int numero;
    int factorial=1;
    cout<<"Ingrese su numero: "<<endl;
    cin>>numero;
    for (int cont=1;cont<=numero;++cont)
        factorial*=cont;
    cout<<"El factorial de "<<numero<<" es "<<factorial<<endl;


*/

//SEIS MODIFICADO
	
/*
    int numero;
    int cont=0;
    cout<<"Ingrese su numero"<<endl;
    cin>>numero;
    int i=2;

    while(cont<numero){
        ++i;
        for (int j=2; j<i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j+1){
                cout << i << " ";
                cont+=1;}
        }}
*/

#include <iostream>
using namespace std;

class Poligono {
    protected:
        int base, altura;
    public:
        void iniciar(int base, int altura)
            { this->base=base; this->altura=altura; }
        virtual int area ()
            { return 0; }
};

class Rectangulo: public Poligono {
    public:
        int area ()
            { return base * altura; }
};

class Triangulo: public Poligono {
    public:
        int area ()
            { return (base * altura / 2); }
};

int main () {
    Rectangulo rec;
    Triangulo tri;
    Poligono poly;
    Poligono * p1 = &rec;
    Poligono * p2 = &tri;
    Poligono * p3 = &poly;
    p1->iniciar (4,5);
    p2->iniciar (4,5);
    p3->iniciar (4,5);
    cout << p1->area() <<endl;
    cout << p2->area() <<endl;
    cout << p3->area() <<endl;
    return 0;
}

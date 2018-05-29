#include <iostream>
using namespace std;

class Poligono {
    protected:
        int base, altura;
    public:
        void iniciar (int base, int altura)
            { this->base=base; this->altura=altura; }
};

class Rectangulo: public Poligono {
    public:
        int area()
            { return base*altura; }
};

class Triangulo: public Poligono {
    public:
        int area()
            { return base*altura/2; }
};

int main () {
    Rectangulo rec;
    Triangulo tri;
    Poligono * p1 = &rec;
    Poligono * p2 = &tri;
    p1->iniciar(4,5);
    p2->iniciar(4,5);
    cout << rec.area() << '\n';
    cout << tri.area() << '\n';
    return 0;
}

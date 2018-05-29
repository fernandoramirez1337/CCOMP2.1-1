#include <iostream>
using namespace std;

class Poligono {
  protected:
    int base, altura;
  public:
    Poligono (int base, int altura) : base(base), altura(altura) {}
    virtual int area (void) =0;
    void printarea()
      { cout << this->area() <<endl; }
};

class Rectangulo: public Poligono {
  public:
    Rectangulo(int base,int altura) : Poligono(base,altura) {}
    int area()
      { return base*altura; }
};

class Triangulo: public Poligono {
  public:
    Triangulo(int base,int altura) : Poligono(base,altura) {}
    int area()
      { return base*altura/2; }
};

int main () {
  Poligono * p1 = new Rectangulo (4,5);
  Poligono * p2 = new Triangulo (4,5);
  p1->printarea();
  p2->printarea();
  delete p1;
  delete p2;
  return 0;
}

#include "Point.h"


template<typename O>
   Point<O>::Point(O x,O y){this->x=x; this->y=y;}

template<typename O>
    O Point<O>::getx()const{return x;}

template<typename O>
    O Point<O>::gety()const{return y;}

template class Point<int>;
template class Point<float>;

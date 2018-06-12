#ifndef POINT_H
#define POINT_H


template<typename O>
class Point{
O x;
O y;
public:
    Point(O x,O y);
    O getx()const;
    O gety()const;


} ;

#endif // POINT_H

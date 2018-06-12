#include <iostream>
using namespace std;

#include "Point.h"

template<typename T>
class Container {
	T val;
	public:
        Container (const T vall) : val(vall){}
        T inc() {return val+1;}
};

template <>
class Container <char>{
    char val;
    public:
        Container(const char vall) : val(vall){}
        char may(){return val-32;}
};

template <typename T, int N>
class ArrayContainer{
    T val[N];
public:
    T sett(const int i, const T val){val[i]=val;}
    T get(const int i){return val[i];}
};

int main()
{
    ArrayContainer <int,5> intac;
    ArrayContainer <float,10> floatac;
    intac.sett(2,3);
    floatac.sett(3,3.5);


    return 0;
}

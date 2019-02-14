#include "vec.h"
#include <math.h>

vec::vec(double x, double y) :x_{x}, y_{y}        //definiuje wektor klasy vec o parametrach x i y
{
//x_=x;
//y_=y;

}

double vec::lenght() const
{
   return sqrt(x_ * x_ + y_ * y_);
}

vec operator+ (const vec v1, const vec v2)
{
    return vec( v1.x() + v2.x(), v1.y() + v2.y() );
}


#ifndef VEC_H
#define VEC_H


class vec
{
public:
    vec(double x_, double y_);              //deklaruje klase
    inline double x() const {return x_;}    //deklaruje funkcje skladowa zwracajaca x
    inline double y() const {return y_;}    //deklaruje funkcje skladowa zwracajaca y
    double lenght() const;                  //deklaruje funkcje skladowa dlugosc wektora

private:
    double x_=0;                            //definiuje stale i przypisuje im poczatkowe wartosci
    double y_=0;
};

vec operator + (const vec v1, const vec v2);

#endif // VEC_H

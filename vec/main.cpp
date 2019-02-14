#include <iostream>
#include "vec.h"

using namespace std;

int main()
{
    vec v1(2,3), v2(4,5);
    vec v3 =  v1 + v2;
    cout << "dlugosc wektora v3 to " << v3.lenght() << endl;

    return 0;
}

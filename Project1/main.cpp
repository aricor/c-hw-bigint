#include "aint.hpp";
#include <iostream>;
#include <stdio.h> ;

using namespace std;

int main()
{
    aint x, y;
    x.size = 2;
    y.size = 2;
    x.ptr[0] = 7;
    x.ptr[1] = 6;
    y.ptr[0] = 7;
    y.ptr[1] = 1;

    x = x - y;
    cout << x.ptr[0] << '\n';
    cout << x.ptr[1];
    return 0;
}
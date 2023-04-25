#include <iostream>

double square(double length);

int main()
{
    double length = 5.0;
    std :: cout <<"AREA : "<< square(length);
    return 0;
}

double square(double length)
{
    return length * length;
}
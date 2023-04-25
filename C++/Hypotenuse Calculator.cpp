#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "enter a ";
    std ::cin >> a;

    std::cout << "enter b ";
    std ::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std ::cout << c;

    return 0;
}
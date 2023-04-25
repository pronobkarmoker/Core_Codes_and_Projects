#include <iostream>

int main()
{
    int x = 6;
    int y = 8;

    int z;

    z = std::max(x, y);
    //z = std::min(x, y);

    std::cout << z;

    return 0;
}
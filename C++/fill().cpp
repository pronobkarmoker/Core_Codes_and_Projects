#include <iostream>

int main()
{
    std::string mother[100];

    fill(mother, mother + 50, "I only love my mother");
    fill(mother + 50, mother + 100, "I dont care anybody without my mother");

    for (std::string mother : mother)
    {
        std::cout << mother << '\n';
    }

    return 0;
}
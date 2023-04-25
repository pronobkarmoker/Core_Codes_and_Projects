#include <iostream>

int main()
{
    std::string cars[][3] = {{"mustang", "bmw", "f-150"},
                             {"convette", "equinox", "silverado"},
                             {"challenger", "durango", "rado"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }
    // std::cout << rows;
    // std::cout << columns;

    // std::cout << sizeof(cars[0][0]);

    return 0;
}
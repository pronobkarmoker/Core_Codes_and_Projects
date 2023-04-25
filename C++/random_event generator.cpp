#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    int num = rand()%5 + 1;

    switch (num)
    {
    case 1:
        std :: cout << " you won t shirt\n";
        break;
    case 2:
        std :: cout << " you won BMW\n";
        break;
    case 3:
        std :: cout << " you won pant\n";
        break;
    case 4:
        std :: cout << " you won mobile\n";
        break;
    case 5:
        std :: cout << " you won world cup\n";
        break;
    default:
        break;
    }

    return 0;
}
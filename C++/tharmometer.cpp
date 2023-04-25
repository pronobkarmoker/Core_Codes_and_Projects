#include <iostream>

int main()
{
    double temp;
    char unit;

    std ::cout << "**********TEMPERATURE**********\n";

    std::cout << " f = ferenheit\n";
    std ::cout << "c = celsius\n";
    std ::cout << " what unit you want ? ";
    std ::cin >> unit;

    if (unit == 'f')
    {
        std ::cout << "enter the temp in C \n";
        std ::cin >> temp;

        double f = ((temp / 5) * 9) + 32;

        std ::cout << f << "F\n";
    }
    else if (unit == 'c')
    {
        std ::cout << "enter the temp in f\n ";
        std ::cin >> temp;

        double c = (temp - 32) * 5 / 9;

        std ::cout << c << "C\n";
    }

    else
    {
        std ::cout << " please enter c or f\n";
    }

    std ::cout << "*******************************\n";

    return 0;
}
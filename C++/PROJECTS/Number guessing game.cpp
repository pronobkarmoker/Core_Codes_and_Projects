#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std ::cout << "********** Number guessing game ***********\n";

    do
    {
        std ::cout << "Enter a guess (1 - 100)";
        std ::cin >> guess;
        tries++;

        if (guess > num)
        {
            std ::cout << "too high\n";
        }
        else if (guess < num)
        {
            std ::cout << "too low\n";
        }
        else
        {
            std ::cout << "CORRECT!!!!!!! \n # of tries: " << tries << '\n';
        }

    } while (guess != num);

    std ::cout << "*******************************************\n";

    return 0;
}
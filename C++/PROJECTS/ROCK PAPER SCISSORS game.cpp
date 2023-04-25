#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWiner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std ::cout << "your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std ::cout << "computer's choice: ";
    showChoice(computer);

    chooseWiner(player, computer);

    return 0;
}

char getUserChoice()
{
    char player;
    std::cout << "ROCK PAPER SCISSORS GAME \n";
    std ::cout << "************************\n";

    do
    {
        std ::cout << "choose one of the following\n";
        std ::cout << "****************************\n";
        std ::cout << "'r'for rock\n";
        std ::cout << "'p' for paper\n";
        std ::cout << "'s' for scissors\n";

        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{

    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}
void showChoice(char choice)
{

    switch (choice)
    {
    case 'r':
        std::cout << "ROCK \n";
        break;
    case 'p':
        std::cout << "PAPER \n";
        break;
    case 's':
        std::cout << "SCCISSORS \n";
        break;

    default:
        break;
    }
}
void chooseWiner(char player, char computer)
{

    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std ::cout << "TIE !!!\n";
        }
        else if (computer == 'p')
        {
            std::cout << " you loss \n";
        }
        else
        {
            std ::cout << "you win\n";
        }

        break;

    case 'p':
        if (computer == 'r')
        {
            std ::cout << "you win \n";
        }
        else if (computer == 'p')
        {
            std::cout << " TIE !!! \n";
        }
        else
        {
            std ::cout << "you loss\n";
        }
        break;

    case 's':
        if (computer == 'r')
        {
            std ::cout << " you loss\n";
        }
        else if (computer == 'p')
        {
            std::cout << " you win \n";
        }
        else
        {
            std ::cout << "TIE !!!\n";
        }
        break;
    }
}

#include <iostream>

int main()
{
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std ::cout << score << "%";

    return 0;
}
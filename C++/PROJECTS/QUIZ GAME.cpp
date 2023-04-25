#include <iostream>

int main()
{
    std::string questions[] = {"1. when C++ created?", "2. Who invented C++?", "3. Is the earth flat?"};

    std ::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                 {"A. Bjarne stroustrup", "B. shuvo", "C. pronob", "D. tonmoy"},
                                 {"A. YES", "B. NO", "C. may be", "D. none of these"}};

    char answerkey[] = {'C', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        std ::cout << "*************************\n";
        std ::cout << questions[i] << '\n';
        std ::cout << "*************************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std ::cout << options[i][j] << '\n';
        }

        std ::cin >> guess;
        guess = toupper(guess);

        if (guess == answerkey[i])
        {
            std::cout << "CORRECT\n";
            score++;
        }
        else
        {
            std::cout << "WRONG\n";
            std ::cout << "Answer: " << answerkey[i] << '\n';
        }
    }
    std ::cout << "*****************************\n";
    std::cout << "*          RESULTS         *\n";
    std ::cout << "*****************************\n";
    std ::cout << "correct guesss" <<score << '\n';

    return 0;
}
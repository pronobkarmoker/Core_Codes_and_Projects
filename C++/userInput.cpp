#include <iostream>

int main()
{
    int age;
    std::string name;

    std ::cout << "what is your name?";
    // std ::cin >> name;
    std :: getline(std::cin >> std::ws , name);  // to get full name!

    std ::cout << "what is your age?";
    std ::cin >> age;

    std ::cout << "hello " << name << '\n';
    std ::cout << "you are " << age << " years old";

    return 0;
}
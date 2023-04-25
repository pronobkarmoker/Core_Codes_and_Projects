#include <iostream>

int main()
{
    std::string name = "shuvo";
    int age = 20;

    std ::string *pName = &name;
    int *pAge = &age;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';

    return 0;
}
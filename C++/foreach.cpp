#include <iostream>

int main()
{
    std ::string students[] = {"shuvo", "rabby", "nafi"};

    for (std ::string student : students)
    {
        std::cout << student << '\n';
    }

    return 0;
}

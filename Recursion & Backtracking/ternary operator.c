#include <stdio.h>

// int findmax(int x, int y)
// {
//     if (x > y)
//     {
//         return x;
//     }
//     else
//     {
//         return y;
//     }
// }

int findmax(int x, int y)
{
// (condition) ? value if true : value if false
    return (x > y) ? x : y;
}

int main()
{

    int max = findmax(5, 4);
    printf("%d", max);

    return 0;
}

#include <stdio.h>

int main()
{

    char arr[5] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &arr[i]);
    }

    return 0;
}
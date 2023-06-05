#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "HELLO"; // auto '\0 ' thake.....
    str[1] = 98;
    str[3] = 'x';

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c ", str[i]);
        i++;
    }

    return 0;
}
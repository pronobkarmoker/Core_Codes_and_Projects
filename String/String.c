#include <stdio.h>
#include <string.h>

int main()
{

    char arr[] = "HELLO"; // auto '\0 ' thake....

    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c ", arr[i]);
        i++;
    }

    return 0;
}
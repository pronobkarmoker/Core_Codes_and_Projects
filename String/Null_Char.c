#include <stdio.h>
int main()
{
    char ch = '\0';
    printf("%c\n", ch); // null char
    printf("%d\n", ch);   // ascii value

    char arr[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c ", arr[i]);
        i++;
    }

    return 0;
}
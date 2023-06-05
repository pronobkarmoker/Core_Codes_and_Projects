#include <stdio.h>
#include <string.h>

int main()
{

    char str[40];
    printf("Enter string: ");
    gets(str);

    int k = 0;
    int size = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    printf("The size of string is : %d", size);
    printf("\n");

    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("the reverse is : ");
    puts(str);

    return 0;
}
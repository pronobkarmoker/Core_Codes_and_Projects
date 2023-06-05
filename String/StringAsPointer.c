#include <stdio.h>
#include <string.h>

int main()
{

    char arr[] = "HELLO"; 
    char* ptr = arr;  // ptr now points to the arr[0]
    printf("%p", ptr);

    int i = 0;
    while (*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
        i++;
    }

    return 0;
}
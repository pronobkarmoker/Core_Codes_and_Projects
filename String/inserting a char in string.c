#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "IT,DU";
    puts(str);

    for (int i = 4; i >= 1; i--)
    {
        str[i + 1] = str[i];
    }
    str[1]= 'I';
    puts(str);
    return 0;
}
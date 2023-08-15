#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char input[25];

    file = fopen("shuvo.txt", "w");

    if (file == NULL)

    {
        printf("unsble");
    }
    else
    {
        printf("Enter the text : \n");
        gets(input);
        fputs(input, file);
        printf("successfully written");

        fclose(file);
    }
}

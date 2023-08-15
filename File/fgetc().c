#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char input;

    // feof(file);

    file = fopen("shuvo.txt", "r");

    if (file == NULL)

    {
        printf("unsble");
    }
    else
    {
        while (!feof(file))
        {
            input = fgetc(file);
            printf("%c", input);
        }

        printf("successfull");

        fclose(file);
    }
}

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char input[25];

    file = fopen("shuvo.txt", "r");

    if (file == NULL)

    {
        printf("unsble");
    }
    else
    {
        while (!feof(file))
        {
            fgets(input, 25, file);
            printf("%s", input);
        }

        fclose(file);
    }
}

#include <stdio.h>
#include <string.h>

int main()
{

    FILE *file;
    char data[25] = "LEARNING FILE";
    int length = strlen(data);
    int counter;

    file = fopen("file.txt", "w");

    if (file == NULL)

    {
        printf("unsble");
    }
    else
    {
        for (counter = 0; counter < length; counter++)
        {
            printf("writing the char %c \n", data[counter]);
            fputc(data[counter], file);
        }

        printf("successful");

        fclose(file);
    }

    //getch();
    return 0;
}
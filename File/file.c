#include <stdio.h>

int main()
{

    FILE *file;

    file = fopen("file.txt", "w");

    if (file == NULL)

    {
        printf("unsble");
    }
    else
    {
        printf("successful");

        fclose(file);
    }

    // fopen("file_name", "mode");

    // "mode" = "r" -> read
    // "mode" = "w" -> write
    // "mode" = "a" -> append / edit
    // "mode" = "r+" -> readinng & writing
    // "mode" = "w+" -> empty file then read and write
    // "mode" = "a+" -> open file and edit
    // "mode" = "wb" -> binary file
}
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[25];
    int age;

    printf("enter your name and age :\n");
    scanf("%s%d", name, &age);

    file = fopen("shuvo.txt", "a");

    if (file == NULL)

    {
        printf("unsble");
    }
    else
    {
        fprintf(file, "%s\t%d\t", name, age);
        printf("successfully written");

        fclose(file);
    }
}

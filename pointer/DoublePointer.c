#include <stdio.h>

int main()
{
    int a = 5;
    int*p = &a;
    int** y = &p;

    printf("%d\n", a);
    printf("%p\n", p); // address
    printf("%p\n", y); // address

    printf("%d\n", a);
    printf("%d\n", *p); 
    printf("%d\n", **y);

    return 0;
}
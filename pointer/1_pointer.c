#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;

    printf("%d\n", a);
    printf("%p\n", &a); // address
    printf("%p\n", p);  // address
    printf("%d\n", *p); // value
    *p = 12;            // a is changed
    printf("%d\n", *p); // value
    printf("%p\n", p);  // address
    printf("%p\n", p + 1);
    printf("%p\n", &a); // address

    return 0;
}
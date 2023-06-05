#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x; // temp= a;
    *x = *y;   // a= b
    *y = temp; // b= temp
    return;
}
int main()
{
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("AFTER SWAPING :::::  \n");
    printf("a : %d\n", a);
    printf("b : %d\n", b);

    return 0;
}
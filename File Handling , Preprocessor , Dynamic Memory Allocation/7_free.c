#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(10 * sizeof(int));
    // ptr++;
    // free(ptr); we cant n=do this ,
    
    int *a = ptr; // starting e set kora
    a++;
    free(a);
}
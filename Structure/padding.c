#include<stdio.h>

struct abc{
    char x;
    int y;
    char z;
}var;

int main(){
    struct abc var;
    printf("%d", sizeof(var)); //12

    return 0;
} 
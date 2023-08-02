#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = sizeof(int);
    int *ptr =(int*)malloc(10*sizeof(int));
    printf("%d", *ptr);
}
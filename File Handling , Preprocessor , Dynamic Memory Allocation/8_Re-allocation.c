#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = sizeof(int);
    int *ptr =(int*)malloc(10*sizeof(int)); //0000000000C114B0
    printf("%p\n", ptr);
    ptr = realloc(ptr,200000*sizeof(int)); //0000000000A70080
    printf("%p", ptr);
}
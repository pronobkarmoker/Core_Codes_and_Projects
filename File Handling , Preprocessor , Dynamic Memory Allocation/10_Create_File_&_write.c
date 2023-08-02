#include<stdio.h>

int main(){
    FILE* ptr = fopen("Shuvo.txt","w");

    char str[] = " one day i will succeed.";
    fputs(str, ptr);

    fclose(ptr);
}

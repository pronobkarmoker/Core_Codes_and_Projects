#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Shuvo karmakar";
    char str2[] = "Shuvo karmakar";

    printf("%d", strcmp(str, str2)); // true = 0 ; false = 1;

    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    char* str = "Shuvo karmakar";
    int length =  strlen(str);  //  dont take '\0'
    printf("%d", length);
    return 0;
}
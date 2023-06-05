#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Shuvo karmakar";
    char str2[] = "IIT , DU";
    strcat(str, str2);
    puts(str);
    puts(str2);
    return 0;
}
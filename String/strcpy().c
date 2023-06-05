#include<stdio.h>
#include<string.h>

int main(){
    char str[40] = "Shuvo karmakar";
    char str2[40];
    strcpy(str2, str);
    puts(str2); // deep copy
    
    return 0;
}
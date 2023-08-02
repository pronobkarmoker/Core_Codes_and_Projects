#include<stdio.h>
#define PI 3.14159265359
#define area(r) PI*r*r

int main(){
    printf("%.11lf\n", PI);
    
    
    printf("%lf" , area(5));
    return 0;
}

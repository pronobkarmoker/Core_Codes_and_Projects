#include<stdio.h>

struct car  // global
{
    char *engine;
    char *fuel;
    int tank_capacity;
    int seating_capacity;
    float mileage;
}car1, car2;

int main(){
    car1.engine = "DDis 190"; 
    car2.engine = "kapppa";

    prinf("%s", car1.engine);
    printf("%s", car2.engine);

    return 0;
}
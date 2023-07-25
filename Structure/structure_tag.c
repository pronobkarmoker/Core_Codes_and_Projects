#include<stdio.h>

struct car// global
{
    char *engine;
    char *fuel;
    int tank_capacity;
    int seating_capacity;
    float mileage;
}car1, car2;

int bike(){
    struct car bike;  // struture tag
}

int main(){
    struct car car1;
    struct car car2;
    car1.engine = "DDis 190"; 
    car2.engine = "kapppa";
    

    prinf("%s", car1.engine);
    printf("%s", car2.engine);

    return 0;
}
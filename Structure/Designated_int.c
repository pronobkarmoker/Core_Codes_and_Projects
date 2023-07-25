#include<stdio.h>

struct car
{
    char *engine;
    char *fuel;
    int tank_capacity;
    int seating_capacity;
    float mileage;
};

int bike(){
    struct car bike;  // struture tag
}

int main(){
    struct car car1 = {.fuel="DDis", .engine="diesel" , .seating_capacity=50 , .tank_capacity=  6, .mileage=.6};
    // order maintain kora lage na
    

    prinf("%s", car1.engine);

    return 0;
}
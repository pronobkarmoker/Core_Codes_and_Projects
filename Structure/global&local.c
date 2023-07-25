#include<stdio.h>

struct  // global
{
    char *engine;
    char *fuel;
    int tank_capacity;
    int seating_capacity;
    float mileage;
}car1, car2;

int bike(){
    struct Bike{  //local
        char *name;
        int mileage;
    }R15;
}

int main(){
    car1.engine = "DDis 190"; 
    car2.engine = "kapppa";
    

    prinf("%s", car1.engine);
    printf("%s", car2.engine);

    return 0;
}
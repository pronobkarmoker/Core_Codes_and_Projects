#include<stdio.h>

struct car
{
    char *engine;
    char *fuel;
    int tank_capacity;
    int seating_capacity;
    float mileage;
};



int main(){
    struct car car1 = {"DDis", "diesel" , 50, 6, 80.6};
    
    prinf("%s", car1.engine);

    return 0;
}
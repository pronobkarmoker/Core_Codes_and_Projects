#include <stdio.h>
// typedef int INTEGER;

// int main(){
//     INTEGER var = 100;
//     printf("%d", var);
//     return 0;
// }

typedef struct car // global
{
    char *engine;
    char *fuel;
    int tank_capacity;
    int seating_capacity;
    float mileage;
} car;

int main()
{
    car c1;
    c1.engine = "DDis 190";
    car c2;
    c2.engine = "kapppa";

    prinf("%s", c1.engine);
    printf("%s", c2.engine);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Car {
    char owner_name[8];
    int plate_nr;
    float fines;
};

void printCarType(struct Car car[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (car[i].plate_nr > 500000)
        {
            printf("Truck\n");
        }
        else if (car[i].plate_nr > 400000)
        {
            printf("Family car\n");
        }
        else if (car[i].plate_nr > 300000)
        {
            printf("Van\n");
        }
        else
        {
            printf("Invalid Plate Number\n");
        }
    }
    

}


int main()
{
    struct Car my_car[5] = {
        {.plate_nr = 405000, .fines = 120.00}, 
        {.plate_nr = 305000, .fines = 120.00}, 
        {.plate_nr = 405000, .fines = 120.00}, 
        };
    //strcpy(my_car.owner_name, "Tyler");
    printCarType(my_car, 5);
    int bits = 0;

    printf("total bits: %zu\n", sizeof(my_car));


    return 0 ;
}
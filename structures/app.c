#include <stdio.h>
#include <string.h>

struct Car {
    char owner_name[8];
    int plate_nr;
    float fines;
};

struct Car printCarType(struct Car *car)
{
    struct Car return_car;

    if (car->plate_nr > 500000)
    {
        printf("Truck\n");
    }
    else if (car->plate_nr > 400000)
    {
        printf("Family car\n");
    }
    else if (car->plate_nr > 300000)
    {
        printf("Van\n");
    }
    else
    {
        printf("Invalid Plate Number\n");
    }
    
    car->fines = 0.00;

    return_car = *car;
    return return_car;

}


int main()
{
    struct Car my_car = {.plate_nr = 449505, .fines = 150.44};
    strcpy(my_car.owner_name, "Tyler");
    struct Car new_car = printCarType(&my_car);


    printf("%s\t%d\t%f\n", new_car.owner_name, new_car.plate_nr, new_car.fines);

    return 0 ;
}
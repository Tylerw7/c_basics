#include <stdio.h>

int is_db_connected = 0;
void db_connect(void)
{
    is_db_connected = 1;
}

int db_get_nr_entries(int *n)
{
    if (is_db_connected) {
        *n = 10;
        return 0;
    }
    else {
        return 1;
    }
    
}


int main(void) {
    int n = 0;
    int result = 0;
    //db_connect();
    result = db_get_nr_entries(&n);
    if (result == 0)
    {
        printf("The number of entiers is: %d\n", n);
    }
    else
    {
        printf("You have to connect to the database first \n");
    }
    


    return 0;
}
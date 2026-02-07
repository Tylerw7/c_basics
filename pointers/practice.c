#include <stdio.h>
#include <stdlib.h>

int *remove_odds(int *nums, int size, int *out_size)
{
    int evens = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] % 2 == 0) 
        {
            evens++;
        }
    }

    int *even_array = malloc(evens * sizeof(int));
    *out_size = evens;

    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] % 2 == 0) 
        {
            even_array[k] = nums[i];
            k++;
        }
    }

    return even_array;

}


int main()
{
    int even_count = 0;
    int numbers[] = {3,10,2,11,15,17,22,3};
    int *evens = remove_odds(numbers, 8, &even_count);
    printf("The number of even numbers in the array are: %d\n", even_count);

    for (int i = 0; i < even_count; i++)
    {
        printf("%d\n", evens[i]);
    }

    free(evens);

    return 0;
}
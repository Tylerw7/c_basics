#include <stdio.h>
#include <stdlib.h>

int *remove_odds(int *num, int size, int *out_size)
{
    int count_of_even = 0;

    // Step 1: Count evens
    for (int i = 0; i < size; i++)
    {
        if (num[i] % 2 == 0)
        {
            count_of_even++;
        }
    }

    // Step 2: Allocate array for evens
    int *out_nums = malloc(count_of_even * sizeof(int));

    // Step 3: Copy evens into new array
    int k = 0;
    for (int j = 0; j < size; j++)
    {
        if (num[j] % 2 == 0)
        {
            out_nums[k] = num[j];
            k++;
        }
    }

    // Step 4: Set output size
    *out_size = count_of_even;
    
    return out_nums;
}

int main()
{
    int numbers[] = {1, 3, 2, 4, 9, 5, 3, 1, 11};
    int output_count = 0;

    int *even_nums = remove_odds(numbers, 9, &output_count);

    printf("Number of even elements is %d\n", output_count);

    for (int i = 0; i < output_count; i++)
    {
        printf("%d\n", even_nums[i]);
    }

    // Free allocated memory
    free(even_nums);

    return 0;
}

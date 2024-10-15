/* DONEEE !!!!*/

#include <stdio.h>
#include <stdlib.h>

void FizzBuzz(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 5 == 0 && arr[i] % 3 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (arr[i] % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (arr[i] % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", arr[i]);
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of array:\n");
    scanf("%d", &size);

    int *arr = (int *)malloc(sizeof(int) * size);

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("This is your array sweetheart\n");
    FizzBuzz(arr, size);
    free(arr);
}
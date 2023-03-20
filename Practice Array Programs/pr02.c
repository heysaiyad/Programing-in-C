// Write a program in C to print all unique elements in an array.
#include <stdio.h>

int main()
{
    int size = 7;
    int arr[7] = {1, 2, 1, 7, 5, 2, 3};

    printf("Unique Elements\n");
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }

        if (i == j)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
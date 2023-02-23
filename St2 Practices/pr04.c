// Write a program to swap minimum and maximum elements in an array.
// 45 10 18 5 2 10 12
// Output Array: 2 10 18 5 45 10 12

#include <stdio.h>
int findMaxElement(int arr[], int n)
{
    int i, pos = 0;
    int maxVal = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            pos = i;
        }
    }
    return pos;
}

int findMinElement(int arr[], int n)
{
    int i, pos = 0;
    int minVal = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            pos = i;
        }
    }
    return pos;
}

void swapMaxMinElement(int arr[], int maxElementPos, int minElementPos)
{

    int temp;
    temp = arr[maxElementPos];
    arr[maxElementPos] = arr[minElementPos];
    arr[minElementPos] = temp;
}

int main()
{
    int arr[] = {45, 10, 18, 5, 2, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    int maxElementPos = findMaxElement(arr, n);
    // printf("\nThe maximum element : %d", arr[maxElementPos]);

    int minElementPos = findMinElement(arr, n);
    // printf("\nThe minimum element : %d", arr[minElementPos]);

    swapMaxMinElement(arr, maxElementPos, minElementPos);

    printf("The array after swap is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

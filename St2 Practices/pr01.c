// Write a C Program to Find the Number of Non Repeated Elements in an Array.

#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < count; j++)
        {
            if (arr[i] == temp[j])
                break;
        }
        if (j == count)
        {
            temp[count] = arr[i];
            count++;
        }
    }

    printf("Array After  Removing Duplicates: ");
    for (int i = 0; i < count; i++)
        printf("%d ", temp[i]);

    return 0;
}
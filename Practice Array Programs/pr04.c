// Write a program in C to insert a new value in the array (sorted list).
#include <stdio.h>
int main()
{
    int array[10] = {12, 13, 15, 16, 34, 454, 500, 600, 625, 640};
    int i, j, n, m, temp, key, pos;

    printf("Input array elements are \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    // Sorting the elements of the array
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted list is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("Enter the element to be inserted \n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key < array[i])
        {
            pos = i;
            break;
        }
        if (key > array[n - 1])
        {
            pos = n;
            break;
        }
    }
    if (pos != n)
    {
        m = n - pos + 1;
        for (i = 0; i <= m; i++)
        {
            array[n - i + 2] = array[n - i + 1];
        }
    }

    array[pos] = key;

    printf("Final list is \n");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d\n", array[i]);
    }
}

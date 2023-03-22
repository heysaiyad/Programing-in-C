// Write a program in C to find the second largest element in an array.

#include <stdio.h>
int main()
{
    int i, n, arr[20], pos, large, s_large;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    large = arr[0];
    pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            pos = i;
        }
        s_large = arr[n - pos - 1];
        for (int i = 0; i < n; i++)
        {
            if (i != pos)
            {
                if (arr[i] > s_large)
                {
                    s_large = arr[i];
                }
            }
        }
    }
    printf("%d ", s_large);
}
// C program to find smallest number in array that is repeated exactly 'k' times.
#include <stdio.h>
// const int MAX = 1000;

int findDuplicate(int arr[], int n, int k)
{
    int a[100000] = {0};

    for (int i = 0; i < n; i++)
        a[arr[i]]++;

    for (int i = 0; i < 100000; i++)
        if (a[i] == k)
            return i;

    return -1;
}

int main()
{
    int arr[] = {2, 2, 1, 3, 1};
    int k = 1;
    int n = sizeof(arr) / (sizeof(arr[0]));
    printf("%d", findDuplicate(arr, n, k));
    return 0;
}

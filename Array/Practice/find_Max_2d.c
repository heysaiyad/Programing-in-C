// find max from 2d arrays
#include <stdio.h>
int findMax2d(int arr[][3], int m, int n)
{

    int max = -10000;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    // int max = -10000;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int ans = findMax2d(arr, m, n);
    printf("%d", ans);

    return 0;
}
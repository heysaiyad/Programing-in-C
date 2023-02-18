// count distinct elements in array
#include <stdio.h>
int countdis(int arr[], int n)
{
    int cnt = 0;
    int isDistinct = 1;

    for (int i = 0; i < n; i++)
    {
        isDistinct = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct == 1)
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 5};
  printf("%d", countdis(arr, 6));
    

    return 0;
}
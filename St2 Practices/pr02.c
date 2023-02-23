// C program to print k-th distinct
// element in a given array
#include<stdio.h>

int printKDistinct(int arr[], int n, int k)
{
	int dist_count = 0;
	for (int i = 0; i < n; i++)
	{
		// Check if current element is
		// present somewhere else.
		int j;
		for (j = 0; j < n; j++)
			if (i != j && arr[j] == arr[i])
				break;

		// If element is unique
		if (j == n)
			dist_count++;

		if (dist_count == k)
			return arr[i];
	}

	return -1;
}

int main ()
{
	int ar[] = {1, 2, 50, 10, 20, 2};
	int n = sizeof(ar) / sizeof(ar[0]);
	int k = 3;
    printf("%d", printKDistinct(ar,n,k));
	return 0;
}

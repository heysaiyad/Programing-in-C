// Write a program in C to delete an element at the desired position from an array.
#include <stdio.h>
void deleteElement(int arr[], int n, int pos)
{
	for (int i = pos; i <= n; i++)
		arr[i] = arr[i+1];
}

int main()
{
	int arr[30] = { 12,13,45,56,78,89 };
	int n = 6;

	int pos = 3;

	deleteElement(arr, n, pos);
	// n = n -1;

	for (int i = 0; i < n-1; i++)
		printf("%d ",arr[i]);

	return 0;
}
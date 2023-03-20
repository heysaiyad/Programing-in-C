// Write a program in C to insert a new value in the array (unsorted list).
#include <stdio.h>
void insertEle(int arr[], int n, int x, int pos){
    for (int i = n; i >=pos; i--)
    {
        arr[i]=arr[i-1];
        arr[pos]=x;
    } 
}

int main()
{
	int arr[30] = { 12,13,45,56,78,89};
	int n = 6;

	int x = 14, pos = 3;

	insertEle(arr, n, x, pos);
	n++;

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}

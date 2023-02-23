// C program to find the minimum element of each row and each column
#include <stdio.h>
#define MAX 100

void smallestInRow(int mat[][MAX], int n, int m)
{
printf(" { ");
for (int i = 0; i < n; i++) {

	int minm = mat[i][0];

	for (int j = 1; j < m; j++) {

	if (mat[i][j] < minm)
		minm = mat[i][j];
	}
	printf("%d, ",minm);
}
printf("}");
}

void smallestInCol(int mat[][MAX], int n, int m)
{

printf(" { ");
for (int i = 0; i < m; i++) {

	int minm = mat[0][i];

	for (int j = 1; j < n; j++) {

	if (mat[j][i] < minm)
		minm = mat[j][i];
	}

	printf("%d, ",minm);
}

printf("}");
}

int main()
{

int n = 3, m = 3;
int mat[][MAX] = { { 2, 1, 7 },
					{ 3, 7, 2 },
					{ 5, 4, 9 } };
printf("Minimum element of each row is ");
smallestInRow(mat, n, m);

printf("\nMinimum element of each column is ");
smallestInCol(mat, n, m);

return 0;
}

// This code is contributed by kothavvasskash.

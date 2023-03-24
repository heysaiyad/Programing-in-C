// Write a program in ‘C” to Merge Two Arrays and also count the total number of Elements. 

#include <stdio.h>
int main()
{
	int m = 5, n = 5, o, i, j;


	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 6, 7, 8, 9, 10 };


	o = m + n;
	int c[o];

	for (i = 0; i < m; i++) {
		c[i] = a[i];
	}

	for (i = 0, j = m; j < o && i < n; i++, j++) {
		c[j] = b[i];
	}
	
    int cnt = 0;
	for (i = 0; i < o; i++) {
		printf("%d ", c[i]);
        cnt++;
	}
    printf("\n");
    printf("%d", cnt);
	return 0;
}


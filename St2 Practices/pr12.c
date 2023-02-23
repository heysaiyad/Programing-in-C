// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>

void swap(char* x, char* y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char* a, int start, int end)
{
	int i;
	if (start == end)
		printf("%s\n", a);
	else {
		for (i = start; i <= end; i++) {
			swap((a + start), (a + i));
			permute(a, start + 1, end);
			swap((a + start), (a + i)); // backtrack
		}
	}
}

/* Driver code */
int main()
{
	char str[] = "ABC";
	int n = strlen(str);
	permute(str, 0, n - 1);
	return 0;
}

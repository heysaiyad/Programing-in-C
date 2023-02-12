// C program to find LCM of two numbers
#include <stdio.h>
int main() {
	int x, y, res;
	printf("Enter two positive integers: ");
	scanf("%d %d", &x, &y);
	res = (x > y) ? x : y;

	while (1) {
		if (res % x == 0 && res % y == 0) {
			// printf("The LCM obtained from %d and %d is %d.", x, y, res);
            printf("%d", res);
			break;
		}
		++res;
	}

	return 0;
}

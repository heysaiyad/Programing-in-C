// C Program to Check Whether a Number is Prime or not
#include <stdio.h>

int main()
{
	// code
	int n = 11;
	int m = n - 1;
	int factm = 1;
// find factorial of n-1
	for (int i = 1; i <= m; i++) {
		factm *= i;
	}

// add 1 to (n-1)!
	int factn = factm + 1;
	if (factn % n == 0) {
		// if remainder is 0
		printf(" %d is prime number",n);
	}
	else {
		printf("%d is not prime number",n);
	}
	return 0;
}
// this code is contributed by devendra solunke


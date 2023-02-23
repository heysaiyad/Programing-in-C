#include <stdio.h>
#include <stdlib.h>

float findArea(float a, float b, float c)
{
	// Length of sides must be positive and sum of any two sides
	// must be smaller than third side.
	if (a < 0 || b < 0 || c <0 || (a+b <= c) ||
		a+c <=b || b+c <=a)
	{
		printf("Not a valid triangle");
		exit(0);
	}
	float s = (a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
	float a = 3.0;
	float b = 4.0;
	float c = 5.0;

	printf("Area is %f", findArea(a, b, c));
	return 0;
}

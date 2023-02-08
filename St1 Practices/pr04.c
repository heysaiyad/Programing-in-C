/*
4. Given number “11011011”. Write a program to get the decimal value of the number if the number is in format :

•	Unsigned binary
•	1’s complement
•	2’s complement
*/
#include<stdio.h>
int main()
{
	int num = 111;
	int dec = 0;
	int base = 1;
	int rem;
	while (num>0) {
		rem = num%10;
        dec = dec +rem*base;
        num = num/10;
        base = base*2;
	}
	printf("%d", dec);
}


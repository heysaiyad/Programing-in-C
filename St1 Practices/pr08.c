/*
Write a simple program to swap the numbers of three variables without using the forth variable.
Make a C program by taking three variables only of integer type.  The value of a will be swapped
 to b, and b’s value will be swapped to c and c to a respectively.
Note* No additional variable or container type can be used, using only these 3 variables.
Sample Input 1:
Input 3 numbers to swap:
25 50 75
Sample Output 1:
Before Swap: a = 25, b =50 and c = 75
After Swap: a = 75, b = 25 and c = 50
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers to swap ");
    scanf("%d %d %d", &a, &b, &c);

    // a = a + b + c;
    // b = a - (b + c);
    // c = a - (b + c);
    // a = a - (b + c);
    a = a ^ b ^ c;
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;
    printf("%d %d %d", a, b, c);
    return 0;
}

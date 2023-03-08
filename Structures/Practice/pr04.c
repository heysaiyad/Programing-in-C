// Write a program to read display, add, and subtract two complex numbers.

#include <stdio.h>
#include <conio.h>
struct hi
{
    int real1, real2;
    int comp1, comp2;
} arith;
int main()
{
    int a;
    printf("Enter the real and imaginary part of first number respectively\n");
    scanf("%d", &arith.real1);
    scanf("%d", &arith.comp1);
    printf("Enter the real and imaginary part of second number respectively\n");
    scanf("%d", &arith.real2);
    scanf("%d", &arith.comp2);
    printf("Select the operation\n1. Addition\n2. Subtraction\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Addition -> %d + %di", arith.real1 + arith.real2, arith.comp1 + arith.comp2);
    }
    else if (a == 2)
    {
        printf("Subtraction -> %d + (%di)", arith.real1 - arith.real2, arith.comp1 - arith.comp2);
    }
    else
    {
        printf("Not a valid operation.");
    }
}
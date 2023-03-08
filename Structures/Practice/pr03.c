// Write a program, using structures to find the biggest of three numbers.
#include <stdio.h>
#include<string.h>
struct numbers
{
    int a, b, c;
    int largest;
};

int main(){

    struct numbers num;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num.a, &num.b, &num.c);
    if (num.a > num.b && num.a>num.c)
    {
        num.largest = num.a;
    }
    else if (num.b > num.a && num.b>num.c)
    {
        num.largest = num.b;
    }
    else
        num.largest = num.c;
    printf("The largest number is: %d", num.largest);
    
        
    return 0;
}
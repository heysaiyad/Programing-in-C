/*2. Write a C program that use bitwise AND operator to check whether a number is even or odd in C programming.*/

#include <stdio.h>
#include <stdbool.h>

bool isEven(int n)
{
    return (!(n & 1));
}

int main()
{

    int n = 8;
    isEven(n) ? printf("Even") : printf("odd");
    return 0;
}

// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     if (num%2 == 0)
//     {
//         printf("Even number");
//     }
//     else{
//         printf("Odd Number");
//     }

//     return 0;
// }
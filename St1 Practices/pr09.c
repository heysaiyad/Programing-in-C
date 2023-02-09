/*
Gift Coupon Check
Suresh had completed his monthly purchase and paid the bill. At customer desk there was an offer board which
 mentioned that if the bill numbers addition is divisible by 5, then they will get a Gift Coupon worth Rs. 500.
  Write a program and Help Suresh to decide whether his bill number is eligible for Gift Coupon or not.
Sample Input 1:
Input a number
12345
Sample Output 1:
Bill Number 12345 is Eligible For Gift Coupon
*/

// #include <stdio.h>

// int main(){
//     int bil;
//     printf("Enter bill ");
//     scanf("%d",&bil);

//     if(bil%5 == 0){
//         printf("Bill Number %d",bil);
//         printf(" is Eligible for gift coupon ");
//     }
//     else{
//         printf("Not Eligible");
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int n, original_num, d5, d4, d3, d2, d1;
    int add_digit;
    scanf("%d", &n);
    original_num = n;
    
    /*Upcoming if else blocks are to determine the number of digits in number and process accordingly*/
    if(original_num > 0 && original_num < 10){
        d1 = n % 10;
        add_digit = d1;
    }
    else if (original_num >= 10 && original_num < 100){
        d2 = n % 10;
        n = n / 10;
        d1 = n % 10;
        add_digit = d2 + d1;
    }
    else if (original_num >= 100 && original_num < 1000){
        d3 = n % 10;
        n = n / 10;
        d2 = n % 10;
        n = n / 10;
        d1 = n % 10;
        add_digit = d3 + d2 + d1;
    }
    else if (original_num >= 1000 && original_num < 10000){
    d4 = n % 10;    /*4th digit*/
    n = n / 10;     /*remaining digits*/
    d3 = n % 10;    /*3rd digit*/
    n = n / 10;     /*remaining digits*/
    d2 = n % 10;    /*2nd digit*/
    n = n / 10;     /*remaining digits*/
    d1 = n % 10;    /*1st digit*/
    add_digit = d4 + d3 + d2 + d1;
    }
    else if (original_num >= 10000 && original_num < 100000){
    d5 = n % 10;
    n = n / 10;
    d4 = n % 10;    /*4th digit*/
    n = n / 10;     /*remaining digits*/
    d3 = n % 10;    /*3rd digit*/
    n = n / 10;     /*remaining digits*/
    d2 = n % 10;    /*2nd digit*/
    n = n / 10;     /*remaining digits*/
    d1 = n % 10;    /*1st digit*/
    add_digit = d5 + d4 + d3 + d2 + d1;
    }
    /*specifier %d is used for printing the integer*/
    if (original_num > 0 && original_num < 100000 ){   /*Condition to check if number is within the given input range*/
        if (add_digit % 5 == 0)     /*Condition to check if it is exactly divisible or not*/
        printf("Bill Number %d is Eligible for Gift Coupon", original_num);
        else
        printf("Bill Number %d is Not Eligible for Gift Coupon", original_num);
    }
    else
    printf("Bill Number %d is Not Eligible for Gift Coupon", original_num);
    return 0;
}


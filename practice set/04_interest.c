// Interest = P x R x T. P = Principal amount (the beginning balance). 
// R = Interest rate (usually per year, expressed as a decimal).
//  T = Number of time periods

#include <stdio.h>

int main(){
    int p, r, t;
    printf("Enter principal amount ");
    scanf("%d", &p);
    printf("Enter Enter interest rate ");
    scanf("%d", &r);
    printf("Enter Number of time periods ");
    scanf("%d", &t);

    int interest = (p * r * t)/100;

    printf("Total interest is %d", interest);
    return 0;
}
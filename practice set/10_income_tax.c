#include <stdio.h>

int main(){
    float i, tax;
    printf("Enter your income ");
    scanf("%f", &i);

    if (i>=250000 && i<=500000)
    {
        tax = tax +0.05*(i -250000);
    }
    if(i>=500000 && i<=1000000){
        tax = tax +0.20*(i -500000);
    }
    if(i>=1000000){
        tax = tax +0.30*(i -1000000);
        
    }
    printf("your tax is %f", tax);

    // else{
    //     printf(" Congratulation!😄 You are not eligible for tax");
    // }
    

}
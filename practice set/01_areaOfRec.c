#include<stdio.h>

int main(){

    float a, b;
    printf("Enter lengh \n");
    scanf("%f", &a);
    printf("Enter breadth \n");
    scanf("%f", &b);
    float area = a * b;

    printf("Area of rectangle is %f ", area); 
}
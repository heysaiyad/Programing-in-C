#include <stdio.h>

int main(){
    // area of cicle is pirsqure
    float pi = 3.14;
    float r;
    printf("Enter radius ");
    scanf("%f", &r);

    float area = pi * r * r;

    printf("Area of circle %f \n", area);

    float h;
    printf("Enter hieght for cylinder ");
    scanf("%f", &h);

    float volume = area * h;

    printf("Vloume of cylinder is %f ", volume);
      return 0;
}
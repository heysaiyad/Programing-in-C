// Fahrenheit = (1.8 * celsius) + 32
#include <stdio.h>

int main(){
    int cel;
    printf("Enter temprature in celsius ");
    scanf("%d", &cel);

    float fah = (1.8 * cel) + 32;

    printf("Temprature celsius to fahrenheit %f", fah);
    return 0;
}
/*
BMI Categorizing

The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square
 of the height ( in feet). Write a program that receives weight and height, calculates the BMI, and
  reports the BMI category as per the following table:
	
Starvation	< 15
Anorexic	15.1 to 17.5
Underweight	17.6 to 18.5
Ideal	18.6 to 24.9
Overweight	25 to 25.9
Obese	30 to 30.9
Morbidly Obese	>= 40
*/
#include <stdio.h>

int main(){
    int w; 
    float h;
    
    printf("Enter weight and hieght ");
    scanf("%d %f", &w, &h);
    h = h/3.281;
    
    float temp = w/(h*h);
    printf("%f",temp);

       if (temp < 15)
    printf("Starvation");
    else if(temp >= 15.1 && temp <= 17.5)
    printf("Anorexic");
    else if(temp >= 17.6 && temp <= 18.5)
    printf("Underweight");
    else if(temp >= 18.6 && temp <= 24.9)
    printf("Ideal");
    else if(temp >= 25 && temp <= 29.9)
    printf("Overweight");
    else if(temp >= 30 && temp <= 39.9)
    printf("Obese");
    else if(temp >= 40)
    printf("Morbidly Obese");
    return 0;
}


/*3. Write a C program to input any decimal number from user and convert it to binary number system using bitwise operator.*/

#include <stdio.h>


int main(){
  
    int n;
    printf("Enter number ");
    scanf("%d", &n);
   
    int i = n;
    while (i>0)
    {
        printf("%d", i%2);
        i = i/2;
    }
    
    
    return 0;
}
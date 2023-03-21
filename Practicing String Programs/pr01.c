//  Write a program in C to find the length of a string without using the library function.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    int i, cnt = 0;
 
    printf("Input a string : ");
    scanf("%s", str1);
 
    for (i = 0; str1[i] != '\0'; i++)
    {
        cnt++;
    }
    printf("The string contains %d  number of characters. \n",cnt);
}

// Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[100]; /* Declares a string of size 100 */
    int l,i;

       printf("Entrt the string : ");
       gets(str);
	   l=strlen(str);
	   printf("The characters of the string in reverse are : \n");
       for(i=l;i>=0;i--)
        {
          printf("%c  ", str[i]);
        }
    printf("\n");
}

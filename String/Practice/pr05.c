//write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal. 

#include <stdio.h>
#include<string.h>
int main(){
    char st1[40];
    char st2[40];
    char c;
    int  i = 0;
    printf("Enter the value of first string\n");
    scanf("%s", st1);
    printf("Enter the value of second string character by character\n");

    while (c!='\n') 
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';  // ek enter extra ja rha hai white space
    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    printf("strcmp for these strings returns %d", strcmp(st1, st2));
    

    return 0;
}
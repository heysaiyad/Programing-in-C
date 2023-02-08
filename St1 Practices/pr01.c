/*
1. Write a C program  that tests whether a given character variable c is
•	lower case letter
•	upper case letter
•	digit
•	white space (includes space,tab,new line)
*/

#include <stdio.h>

int main(){
    
    char c;
    printf("Enter character ");
    scanf("%c", &c);
    if (c>='A' && c<='Z')
    {
        printf("Upper case");
    }
    else if (c>='a' && c<='z')
    {
        printf("lower case");
    }
    else if (c>='0' && c<='9'){
        printf("Digit");
    }
    else{
        printf("white space");
    }

    
    return 0;
}

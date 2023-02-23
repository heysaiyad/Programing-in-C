// Reverse String
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char s[100];
    scanf("%s", s);
    char newString[100];
    int l = strlen(s)-1;
    int i = 0;
    while (s[i]!= '\0') 
    {
        newString[i] = s[l];
        i++;
        l--;
    }
    printf("%s", newString);
    
    return 0;
}
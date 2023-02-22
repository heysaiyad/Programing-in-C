// check for palindrome
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char s[100];
    scanf("%s", s);
    int start = 0;
    int end = strlen(s) - 1;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            printf("No");
            return 0;
        }
        else{
            start++;
            end--;
        }   
    }
    printf("Yes");
    return 0;
}
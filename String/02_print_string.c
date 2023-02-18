#include <stdio.h>

int main(){
    // char str[] = "SAIYAD";
    char str[] = {'S', 'A','I', 'Y','A','D', '\0'};
    char *ptr = str;
    while (*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
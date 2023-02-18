#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main(){
    char *st = "Md Saiyad Ali";
    int cnt = 0;

    while (*st != '\0')  //*(st++)
    {
        cnt++;
        st++;
    }
    printf("%d", cnt);
    
    // int a = strlen(st);
    // printf("The length of string st is %d", a);
    return 0;
}
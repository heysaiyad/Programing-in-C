// String Binary to decimal
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s[100];
    scanf("%s", s);
    int base = 1;
    int ans = 0;
    int last_index = strlen(s) - 1;
    
    for (int i = last_index; i >= 0; i--)
    {
        int convert_num = s[i] - 48;
        ans = ans + (convert_num * base);
        base = base * 2;
       
    }
    printf("%d", ans);
    
    return 0;
}
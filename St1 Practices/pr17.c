// C Program to Find Factorial of a Number

#include <stdio.h>

int main(){
    int num;
    int ans = 1;
    scanf("%d", &num);

    for(int i = 1; i<=num; i++){
        ans = ans*i;
        
    }
    printf("%d", ans);
    return 0;
}
#include <stdio.h>

int main(){
    int x;
    printf("Enter age");
    scanf("%d", &x);

    (x<5)? printf("x is less than 5") : printf("x is not less than 5");
    
    return 0;
}
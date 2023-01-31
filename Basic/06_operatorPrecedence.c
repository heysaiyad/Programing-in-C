#include <stdio.h>

int main(){
    int a = 5;
    int b = 2;

    printf("The value of 3*a - 4*b is %d\n", 3*a - 4*b);
    printf("The value of 3*a / 4*b is %d\n", 3*a / 4*b);
    // 3*a / 4*b = 15/8 will give wrong answer
    //15/4*b
    // 3*2
    // 6

    return 0;
}
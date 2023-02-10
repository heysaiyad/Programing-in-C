// C Program to Generate Multiplication Table 

#include <stdio.h>

int main(){
    int num;
    int mul;
    scanf("%d", &num);

    for(int i = 1; i<=10; i++){
        mul = i*num;
        printf("%d * %d = %d", num, i, mul);
        printf("\n");

    }
    
    return 0;
}
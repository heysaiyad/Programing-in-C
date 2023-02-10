// C Program to Find Largest Number Among Three Numbers
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c){
        printf("A is large");
    }
    else if(b>a && b>c){
        printf("B is large");
    }
    else{
        printf("C is large");
    }
    return 0;
}
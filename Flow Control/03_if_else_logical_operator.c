#include <stdio.h>

int main(){
    int x;
    printf("Enter age\n");
    scanf("%d", &x);

    if(x>= 18 && x<70){
        printf("You can drive");
    }
    else if (x==70)
    {
        printf("You can drive but");
    }
    
    else{
        printf("You can't drive");
    }

    return 0;
}
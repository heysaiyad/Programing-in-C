#include <stdio.h>

int main(){
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);

    if(x>0){
        printf("%d is positive\n",x);
    }
    else if (x<0)
    {
        printf("%d is negative\n",x);
    }
    
    else{
        printf("%d is zero\n",x);
    }

    return 0;
}
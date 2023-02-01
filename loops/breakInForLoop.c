//Find the smallest divisor such that the divisor greater than 1

#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            printf("Smallest Divisor is %d", i);
            break;
        }
    }
    return 0;
}
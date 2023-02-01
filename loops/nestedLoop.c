#include <stdio.h>

int main(){
    int n = 5;

    for(int i = 1; i<n; i++){
        for(int j = 1; j<=10; j++){
            printf("%d ", i*j);
        }
        printf("\n");
       
    }
    return 0;
}
#include <stdio.h>

int main(){
    int arr[5] = {4,5,85,56,12};
    printf("%d", arr[2]);
    arr[2] = 50;
    printf("%d", arr[2]);
    return 0;
}
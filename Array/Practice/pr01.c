// find size of array

#include <stdio.h>

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    // printf("%zu", sizeof(arr));  // output 28 (4 byte * 7)
    // return 0;

    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d \n", n);

    int a[6] = {10, 20};
    int m = sizeof(arr)/sizeof(arr[0]);
    printf("%d", m);  //6
    
}
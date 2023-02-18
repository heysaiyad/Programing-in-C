// Avg of array
#include <stdio.h>
int avg(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

    }
    return sum/n;
    
}

int main(){
    int arr[] = {10,20,30,40,50};
    int  n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", avg(arr, n));

    return 0;
}
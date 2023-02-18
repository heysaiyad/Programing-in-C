// Maximum element in array

#include <stdio.h>

int main(){
    int arr[] = {10,50,20,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxi)
        {
                maxi = arr[i];
        }
        
    }
    printf("%d", maxi);
    
    
    return 0;
}
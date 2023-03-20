// Write a program in C to copy the elements of one array into another array.

#include <stdio.h>

int main(){
    int arr1[5] = {11, 21, 31, 41, 51};
    int arr2[5];

    for (int i = 0; i < 5; i++)
    {
        arr2[i]=arr1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    
    return 0;
}
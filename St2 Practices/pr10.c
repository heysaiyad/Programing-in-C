// 4.	Write a C program for binary search using function.
#include <stdio.h>

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while (start <= key){
        if (arr[mid]== key) 
        {
            return mid;
        }

        // go to right part

        if (key>arr[mid])
        {
            start = mid+1;
            
        }
        else{
            end = mid - 1;
        }

        mid = (start + end)/2;
        
        
    }

    return -1;
}

int linSearch(int arr[], int size, int key){
    int i = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }   
    }
     return -1;
    
}

int main(){
    int arr[] = {10, 20, 30 , 40, 50, 60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 30;

    printf("%d\n",binarySearch(arr, size, 30));
    printf("%d",linSearch(arr, size, 30));
    return 0;
}
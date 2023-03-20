// Write a program in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>

int main(){
    int s1=4, s2=4, s3=8;
    int arr1[4] = {5, 3, 1, 7};
    int arr2[4] = {4, 3, 9, 6};
    int arr3[8];
    int i, j, k;
    s3 = s1 +s2;

    for (i = 0; i < s1; i++)
    {
        arr3[i]=arr1[i];
    }

    for (j = 0; j < s2; j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    //sorting

    for (i = 0; i < s3; i++)
    {
        for ( k = 0; k < s3-1; k++)
        {
            if (arr3[k]<= arr3[k+1])
            {
                j=arr3[k+1];
                arr3[k+1]=arr3[k];
                arr3[k]=j;
            }
            
        }
        
    }
// print
    for (int i = 0; i < s3; i++)
    {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}
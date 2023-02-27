// 5.	Write a program such that it displays a histogram(bar graph) for given set of numbers. The numbers should range between 0 to 10.
//  E.g if numbers entered are 5 2 6 3 then histogram looks like:
//     * 
// *   * 
// *   * 
// *   * *
// * * * *
// * * * *


#include <stdio.h>

int main(){
    int n = 4;
    int arr[] = {5, 2, 6, 1};
    
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] == max)
            {
                // printf("%d ", arr[j]);
                printf("* ");
                arr[j]--;
            }
            else
                printf("  ");
            
        }
        printf("\n");
        max --;
        
    }
    
    
    return 0;
}
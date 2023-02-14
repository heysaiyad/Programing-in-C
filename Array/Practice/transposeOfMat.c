#include <stdio.h>
int main(){
    int n = 4, temp; 
    int arr[4][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         temp = arr[i][j];
    //         arr[i][j] =arr[j][i];
    //         arr[j][i] = temp;
    //     }
        
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
            
        }
        printf("\n");
        
    }
    
    

    return 0;
}
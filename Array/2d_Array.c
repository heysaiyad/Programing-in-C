#include <stdio.h>

int main(){
    int arr[4][2] = {{10, 20}, {30}};

    for(int i = 0; i<4; i++)
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",arr[i][j]);
        }
        
    return 0;
}
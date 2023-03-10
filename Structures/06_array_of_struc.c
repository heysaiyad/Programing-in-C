#include <stdio.h>
typedef struct point
{
    int x, y;
}POINT;

int main(){
    POINT arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i].x = i;
        arr[i].y = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d %d \n", arr[i].x, arr[i].y);
    }
    
    


    return 0;
}
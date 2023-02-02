#include <stdio.h>

int getMax(int x, int y){
    if (x>y)
    {
        return x;
    }
    else{
        return y;
    }
    
}

int main(){
    int x = 10;
    int y = 20;
    printf("%d", getMax(x, y));    
    return 0;
}
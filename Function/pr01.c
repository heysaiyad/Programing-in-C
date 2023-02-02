#include <stdio.h>
void fun(){
    static int x = 0;
    int y = 0;
    x++;
    y++;
    printf("%d %d \n", x, y);
}

int main(){
    fun();
    fun();
    
    return 0;
}
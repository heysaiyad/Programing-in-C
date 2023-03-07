#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main(){
    struct point p1 = {.y = 20, .x = 10};
    printf("%d %d \n", p1.x, p1.y);  
    struct point p2 = {.y = 100};
    printf("%d %d", p2.x, p2. y);  
    return 0;
}
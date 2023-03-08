// Write a program to enter two points and then calculate the distance between  them..

#include <stdio.h>
#include<string.h>
#include<math.h>

typedef struct point
{
    int x ,y;
}POINT;

int main(){

    POINT p1, p2;
    float distance;
    printf("Enter the coordinates of the first point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the coordinates of the second point: ");
    scanf("%d %d", &p2.x, &p2.y);
    distance = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y -p2.y), 2));
    printf("The coordinates of the first point are: %dx %dy", p1.x, p1.y);
    printf("\n The coordinates of the second point are: %dx %dy", p2.x, p2.y);
    printf("\n Distance between p1 and p2 = %f", distance);



    return 0;
}
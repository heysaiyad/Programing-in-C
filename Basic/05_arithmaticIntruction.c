#include <stdio.h>

int main(){
    int a = 3;
    int b = 12;

    int z = b*a;
    // int z, b*a = z;     // ILLEGEL (Not Allowed)

    printf("the value of a*b is %d\n", a*b);
    printf("the value of b*a is %d\n", b*a);
    printf("the value of a+b is %d\n", a+b);
    printf("the value of a-b is %d\n", a-b);
    printf("the value of a/b is %d\n", a/b);
    printf("the value of a/b is %d\n", a%b);
    printf("the value of z is %d\n", z);


    return 0;
}
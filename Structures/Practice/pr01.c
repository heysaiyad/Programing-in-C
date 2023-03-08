// Write a program to store the details of 3 emp from user defiind data . use the structure declared above.

#include <stdio.h>
#include<string.h>
struct emp
{
    int code;
    float salary;
    char f_name[10];
};

int main(){

    struct emp e1, e2, e3;
    printf("Enter the value for code of e1 ");
    scanf("%d",&e1.code);
    printf("Enter the value for salary of e1 ");
    scanf("%f", &e1.salary);
    printf("Enter the value for name of e1 ");
    scanf("%s", e1.f_name);

    printf("Enter the value for code of e2 ");
    scanf("%d",&e2.code);
    printf("Enter the value for salary of e2 ");
    scanf("%f", &e2.salary);
    printf("Enter the value for name of e2 ");
    scanf("%s", e2.f_name);

    printf("Enter the value for code of e3 ");
    scanf("%d",&e3.code);
    printf("Enter the value for salary of e3 ");
    scanf("%f", &e3.salary);
    printf("Enter the value for name of e3 ");
    scanf("%s", e3.f_name);
    return 0;
}
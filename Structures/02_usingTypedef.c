#include <stdio.h>
#include<string.h>
typedef struct employee
{
    int id;
    char name[100];
}emp;

int main(){
    emp e;
    e.id = 100;
    strcpy(e.name, "Saiyad");
    printf("%d %s", e.id, e.name);    
    return 0;
}
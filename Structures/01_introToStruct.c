#include <stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[100];
};

// created variable student1 for structure Student 
int main(){

    struct emp e;
     // accessing student1 member and initializing them
    e.id = 101;
    strcpy(e.name,"Saiyad");
    printf("%d %s",e.id, e.name);

    return 0;
}
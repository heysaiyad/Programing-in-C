#include <stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Hello"; //add without space
    char *st2 = "Saiyad";
    strcat(st1, st2);
    printf("Now the st1 is %s", st1);
    return 0;
}
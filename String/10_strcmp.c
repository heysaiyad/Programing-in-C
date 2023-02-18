#include <stdio.h>
#include<string.h>

int main(){
    char st1[45] = "hele";
    char *st2 = "helo";
    int val = strcmp(st1, st2);
    
    printf("Now the val is %d", val);  // diff btw first mismatching char.. agar negative aaya to 0 otherwise 1


    return 0;
}
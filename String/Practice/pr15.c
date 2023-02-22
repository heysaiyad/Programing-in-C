// Search substring

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char txt[] = "geeks for geeks";
    char pat[] = "eek";
    char *p = strstr(txt, pat);
    if (p == NULL)
    {
        printf("Not Found");
    }
    while (p)
    {
        printf("%ld ", p - txt);
        p = strstr(p+1, pat);
    }
    
    
    return 0;
}
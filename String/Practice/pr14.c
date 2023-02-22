// Search first substring

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char txt[] = "geeks for geeks";
    char pat[] = "eek";
    char *p = strstr(txt, pat);
    if (p)
    {
        printf("First occurence in at index %ld", p-txt);
    }
    else{
        printf("Not Found");
    }
    
    return 0;
}
// Tokenizer
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[] = "geek - for - geeks, c course";
    const char *sep = "- ,";
    char *token = strtok(str, sep);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, sep);
    }
    
    return 0;
}
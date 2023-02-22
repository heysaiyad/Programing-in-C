// Write a function to slice a string

#include <stdio.h>
void slice(char *st, int m, int n){
    int i = 0;
    while ((m+i)<n)
    {
       st[i] = st[i+m];
       i++;

    }
    st[i] = '\0';
    
}

int main(){
    char st[] = "HelloWorld";
    slice(st, 0, 6);
    printf("%s", st);
    return 0;
}
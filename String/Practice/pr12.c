// Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
int matched(char st[], char c){
    char *ptr = st;
    int cnt = 0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            cnt++;
            break;
        }
        
        ptr++;
        
    }
    return cnt;
    
}

int main(){
    char st[] = "Saiayd";
    int cnt = matched(st, 'c');
    printf(" %d", cnt);

    
    return 0;
}
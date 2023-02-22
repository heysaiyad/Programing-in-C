//Write a program to count the occurence of a given character in a string.

#include <stdio.h>
int occurance(char st[], char c){
    char *ptr = st;
    int cnt = 0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            cnt++;
        }
        ptr++;
        
    }
    return cnt;
    
}

int main(){
    char st[] = "Saiayd";
    int cnt = occurance(st, 'd');
    printf("Occurences = %d", cnt);

    
    return 0;
}
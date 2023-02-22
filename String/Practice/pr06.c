// Write your own version of strlen function from <string.h>

#include <stdio.h>
int strlen(char *st){
     int cnt = 0;
    while (*st != '\0')  //*(st++)
    {
        cnt++;
        st++;
    }
    return cnt;
}

int main(){
 
    char *st = "Md Saiyad Ali";
    int l = strlen(st);
    printf("The length of this string is %d",l);
   
    
    return 0;
}
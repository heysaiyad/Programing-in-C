// Write your own version of strcpy function from <string.h>

#include <stdio.h>
int main(){
    char st1[] = "This";
    char st2[45];
    int i;
    for (i = 0; st1[i] != '\0'; i++)
    {
        st2[i] = st1[i];
        
    }
    st2[i] = '\0';
    
    printf("Now the st2 is %s", st2);
    return 0;
}
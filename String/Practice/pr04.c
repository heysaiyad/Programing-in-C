//compare string
#include <stdio.h>

int main(){
    char st1[100] = {' '};
    char st2[100] = {' '};
    scnaf("%s", st1);
    scnaf("%s", st2);
    int i =  0;
    while (st1[i] != NULL && st2[i]!= NULL){
        if (st1[i]!=st2[i])
        {
            break;
        }
        i++;
    }
    if (st1[i]!=NULL || st2[i]!=NULL)
    {
        printf("%d index %c st1char %c st2char", i, st1[i], st2[i]);
    }
    else{
        printf("Equal strings");
    }
    
 


    return 0;
}
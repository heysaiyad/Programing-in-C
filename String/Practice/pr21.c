// Remove White space from string
#include <stdio.h>

int main(){
    int i, len = 0, j;

    char arr[] = "I am Mayank";
     len = sizeof(arr)/sizeof(arr[0]);

    for ( i = 0; i < len; i++)
    {
        if (arr[i] == ' ')
        {
    
        for ( j = i; j < len; j++)
        {
            arr[j] = arr[j + 1];
        }
        len--;
        }  
    }
    printf("%s",arr);    
    return 0;
}
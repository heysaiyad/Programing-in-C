// capital to small and small to capital
#include <stdio.h>
#include<string.h>

int main(){
    char arr[100] = {' '};
    // scanf("%s", arr);
    fgets(arr, 100, stdin);
    int len = strlen(arr);

    for (int  i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i]>= 'A' && arr[i] <= 'Z')
        {
          arr[i] = arr[i]+32;  
        }
        else if (arr[i]>= 'a' && arr[i]<= 'z')  
        {
            arr[i] = arr[i] -32;
        }
   
    }
    printf("%s", arr);
    return 0;
}
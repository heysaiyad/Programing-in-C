// count Capitale letter, small letter & extra char
#include <stdio.h>
#include<string.h>

int main(){
    char arr[1000] = {' '};
    scanf("%s", arr);
    int len = strlen(arr);
    int countCap = 0, countsm = 0, countrem = 0;   
    // for(int i = 0; i<len; i++){
    //     int temp = arr[i];
    //     if(temp>=65 && temp<=90){
    //         countCap++;  
    //     }
    //     else if (temp>=97 && temp<=122)
    //     {
    //         countsm++;
    //     }
    //     else{
    //         countrem++;
    //     }   
    // }

    for (int  i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i]>= 'A' && arr[i] <= 'Z')
        {
            countCap++;
        }
        else if (arr[i]>= 'a' && arr[i]<= 'z')  
        {
            countsm++;
        }
        else{
            countrem++;
        }
        
        
        
    }
    
    printf("%d %d %d", countCap, countsm, countrem);
    
    return 0;
}
#include <stdio.h>

int main(){
    char ch;
    // 97 - 122 -> a - z
    printf("Enter letter ");
    scanf("%d", &ch);

    if(ch>=97 && ch<=122){
        printf("It is lowercase");
    }
    else{
        printf("It is Uppercase");
    }
    return 0;
}
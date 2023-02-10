// C Program to Check Leap Year

#include <stdio.h>

int main(){
    int y;
    scanf("%d", &y);
    if(y%400 == 0 || y%4 == 0){
        printf("Leap year");   
    }
    else{
        printf("Not leap year");
    }
    return 0;
}
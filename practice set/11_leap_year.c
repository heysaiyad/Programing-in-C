#include <stdio.h>

int main(){
    int y;
    printf("Enter year ");
    scanf("%d", &y);

    if(y%4==0 || y%400 == 0){
        printf("This year is leap year");
    }
    else{
        printf("this year is not leap year");
    }
    return 0;
}
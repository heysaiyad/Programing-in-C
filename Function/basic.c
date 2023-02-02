#include <stdio.h>
void fun(){
    printf("fun() called \n");
}

int main(){
    
    printf("Before calling fun() \n");
    fun();
    printf("After calling fun \n");
    return 0;
}
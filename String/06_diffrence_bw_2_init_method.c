#include <stdio.h>

int main(){
    char *ptr = "Md Saiyad ALi";        //A string using pointers can be reinitialized ptr = "Abhinav Gupta"; 
    // char ptr[] = "Md Saiyad Ali";    //once a string is defined using char ptr[] = "Md Saiyad Ali", it can't be reinitialized to something else.
    ptr = "Abhinav Gupta";
    printf("%s", ptr);
    return 0;
}
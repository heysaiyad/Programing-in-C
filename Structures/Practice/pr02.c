// write a program using structures to readand display the information about a strudent 

#include <stdio.h>
#include<string.h>
struct student
    {
        int roll_no;
        char name[100];
        float fees;
        char DOB[80];
    };

int main(){
    

    struct student stud1;

    printf("\n Enter the roll number: ");
    scanf("%d", &stud1.roll_no);
    printf("\n Enter the name: ");
    scanf("%s", &stud1.name);
    printf("\n enter the fees: ");
    scanf("%f", &stud1.fees);
    printf("\n Enter the DOB: ");
    scanf("%s", &stud1.DOB);

    printf("\n ********** STUDENT'S DETAILS ************");
    
    printf("\n ROLL NO. = %d", stud1.roll_no);
    printf("\n NAME = %s", stud1.name);
    printf("\n FEES = %f", stud1.fees);
    printf("\n DOB = %s", stud1.DOB);


    return 0;
}
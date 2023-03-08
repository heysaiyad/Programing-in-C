// Wrote a program to read and display the informationn of all the students in the class.

#include <stdio.h>
#include<conio.h>

struct student
{
    int roll_no;
    char name[90];
    int fees;
    char DOB[90];
};

int main(){
    struct student stud[50];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the roll number: ");
        scanf("%d",&stud[i].roll_no);
        printf("\n Enter the name: ");
        fflush(stdin);
        gets(stud[i].name);
        
        printf("\n Enter the fees: ");
        scanf("%d", &stud[i].fees);
        printf("\n Enter the DOB: ");
        fflush(stdin);
        gets(stud[i].DOB);
    }
    for (i = 0; i < n; i++)
    {
        printf(" \n ********DETAILS OF STUDENTS %d *********", i+1);
        printf("\n ROLL NO. = %d", stud[i].roll_no);
        printf("\n NAME = %d", stud[i].name);
        printf("\n FEES = %d", stud[i].fees);
        printf("\n DOB = %s",stud[i].DOB);
    }  
 
    return 0;
}
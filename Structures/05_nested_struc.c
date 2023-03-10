#include <stdio.h>
#include <string.h>
  
/* dependent structure 1*/
struct college
{
    int college_id;
    char college_name[50];
    float cgpa;
};

/* dependent structure 2*/
struct school
{
    char school_name[50];
    float percentage;
};


/* Parent structure */
struct intern
{
     char name[30];
     int intern_id;
     char job_role[30];
     struct school schl; /* 1st nested structure */
     struct college clg;  /* 2nd nested structure */
};

int main()
{
    /*Initializing*/
    struct college clg = {100, "National Institute of Technology", 8.7}; /* initializing nested structure */
    struct school schl = {"HindMotor Education Centre", 96.4}; /* initializing nested structure */
    struct intern intrn = {"Sujana", 23, "SDE", schl, clg}; /* initializing main structure */
    
    /*Accessing*/
    
    /*Data members of outer structure are accessed using a single dot*/
    printf("Enter name, intern-id and job-role of intern:\n");
    printf("Name: %s\nIntern-id: %d\nJob-role: %s\n",intrn.name, intrn.intern_id, intrn.job_role);
    
    /*Data members of nested structure are accessed using two dots*/
    printf("Enter school name and school percentage:\n");
    printf("School Name: %s\nPercentage: %0.1f\n",intrn.schl.school_name, intrn.schl.percentage);
    printf("Enter college name, college-id and cgpa:\n");
    printf("College Name: %s\nCollege-id: %d\nCgpa: %0.1f\n",intrn.clg.college_name, intrn.clg.college_id, intrn.clg.cgpa);
    return 0;
}

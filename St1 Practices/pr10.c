/*
Subject Grading
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer,
 calculate percentage and grade according to given conditions:

Percentage	Grade
	
If Percentage >= 90%	Grade: A
If Percentage >= 80%	Grade: B
If Percentage >= 70%	Grade: C
If Percentage >= 60%	Grade: D
If Percentage >= 40%	Grade: E
If Percentage < 40%	Grade: F


Sample Input 1:
Input the marks of 5 subjects:
40 60 29 80 76
Sample Output 1:
Percentage = 57.00 %
Grade: E
*/
#include <stdio.h>

int main(){
    int p,ch,b,m,c;
    printf("Enter five sub marks ");
    scanf("%d %d %d %d %d", &p, &ch, &b, &m, &c);

    float per = (p+ch+b+m+c)/5.0;
    printf("%.2f", per);
    if (per>=90)
    {
        printf("Grade: A");
    }
    else if (per>=80)
    {
        printf("Grade: B");
    }
    else if (per>=70)
    {
        printf("Grade: C");
    }
    else if (per>=60)
    {
        printf("Grade: D");
    }
    else if (per>=40)
    {
        printf("Grade: E");
    }
    else if (per<40)
    {
        printf("Grade: F");
    }
    
    
    return 0;
}

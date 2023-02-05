#include <stdio.h>

int main()
{
    int p;
    int c;
    int m;

    printf("Enter physics marks ");
    scanf("%d", &p);
    printf("Enter CHemistry marks ");
    scanf("%d", &c);
    printf("Enter math marks ");
    scanf("%d", &m);

    int total_marks = (p + c + m) / 3;

    if (total_marks < 40 || p < 33 || c < 33 || m < 33)
    {
        printf("You are fail");
    }
    else
    {
        printf("You are pass");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("positive ");

        if (x % 2 == 0)
        {
            printf("even ");
        }
        else
        {
            printf("odd");
        }
    }
    else if (x < 0)
    {
        printf("negative ");
        if (x % 2 == 0)
        {
            printf("even ");
        }
        else
        {
            printf("odd ");
        }
    }
    else{
        printf("Zero");
    }

    return 0;
}
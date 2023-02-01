// while Loop using break

#include <stdio.h>

int main()
{

    int i = 1;
    while (i <= 5)
    {
        if (i == 4)
            break;
        printf("%d ", i);
        i++;
    }
    printf("\n %d", i);

    return 0;
}
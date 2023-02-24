#include <stdio.h>

int fun(int num)
    {
        while (num>10)
        {
            num = num /10;
        }
        return num;
        
    }

int main()
{
    int num = 234;
    printf("%d",fun(num));

    
    return 0;
}
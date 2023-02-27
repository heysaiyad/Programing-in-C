// 12. Check for Prime
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n==0 || n==1)
    {
        printf("Not Prime");
        return 0;
    }

    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            printf("Not Prime");
            return 0;
        }
        i++;   
    }
    printf("Prime");
    
    

    return 0;
}
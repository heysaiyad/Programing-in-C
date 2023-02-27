//10. Inverted Triangle Pattern
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        while (j<=(n -i))
        {
            printf(" ");
            j++;
        }
        while (j<=n)
        {
            printf("*");
            j++;
        } 
        printf("\n");  
    }
    
    return 0;
}
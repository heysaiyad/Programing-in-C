#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (n % 10 != 0)
        {
            cnt++;
        }
        n = n/10;
        
    }
    printf("%d", cnt);
    
    return 0;
}
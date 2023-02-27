// 16. LCM of Two Numbers
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int st;
    if (a >= b)
    {
        st = a;
    }
    else
        st = b;

    int end = a * b;
    int ans = st;

    for (int i = st; i <= end; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);

    return 0;
}
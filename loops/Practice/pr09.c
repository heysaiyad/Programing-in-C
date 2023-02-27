//13. Next Prime Number

// #include <stdio.h>
// int nextPrime(int n)
// {
//     while (1)
//     {
//         int i;
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//                 break;
//         }
//         if (i == n)
//             return n;
//         n++;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", nextPrime(n + 1));
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i, j, n, count = 0;
    scanf("%d", &n);
    for (int i = n; i > 0; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%d", i);
            break;
        }
       
    }

    
}
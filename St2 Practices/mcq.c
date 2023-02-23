// #include<stdio.h>
// void main()
// {
// 	int a[]={10,20,30,40,50,60};
// 	int *p[]={a,a+1,a+2,a+3,a+4,a+5};
// 	int **pp = p;
// 	*pp++;
// 	printf("%d %d %d\n", pp-p, *pp-a, **pp);
// 	*pp++;
// 	printf("%d %d %d\n",pp-p,*pp-a, **pp);
// 	++*pp;
// 	printf("%d %d %d\n",pp-p, *pp-a, **pp);
// 	++**pp;
// 	printf("%d %d %d",pp-p, *pp-a, **pp);
// }

// #include<stdio.h>
// void main()
// {
// 	char arr[2][2][3]={'B','A','S','I','C',' ','C'};
// 	char (*p)[2][2][3]=arr;
// 	printf("%d",(*(*(*p)[1]-2))-(*(*(*p)[0]+1)));
// }

// #include<stdio.h>
// int fun(int x)
// {
// 	if(x>100)
// 		return (x-10);
// 	else
// 	   fun(fun(x+11));
// }
// void main()
// {
// 	printf("%d",fun(90));
// }

// #include <stdio.h>
//     int main()
//     {
//         char a[2][6] = {"hello", "hi"};
//         printf("%d", sizeof(a));
//         return 0;
//     }

//  #include <stdio.h>
// int main()
// {
//     int a[][] = {{1,2},{3,4}};
//     int i, j;
//     for (i = 0; i < 2; i++)
//         for (j = 0; j < 2; j++)
//             printf("%d ", a[i][j]);
//     return 0;
// }

// #include "stdio.h"
// int main()
// {
//   int i = 1, j;
//   for ( ; ; )
//   {
//     if (i)
//         j = --i;
//     if (j < 10)
//        printf("GeeksQuiz ", j++);
//     else
//        break;
//   }
//   return 0;
// }


// #include<stdio.h>
// void main()
// {
//     int a[5] = {5, 1, 15, 20, 25};
//     int i, j, m;
//     i = ++a[1];
//     j = a[1]++;
//     m = a[i++];
//     printf("%d, %d, %d", i, j, m);
// }

#include<stdio.h>
void main()
{
    int arr[] = {12, 14, 15, 23, 45};
    printf("%u, %u", arr, &arr);
}

// Write a program in C to insert a new value in the array (unsorted list).

#include <stdio.h>

void main()
{
   int arr1[100],i,n,p,x; 
       printf("Enter the size of array : ");
       scanf("%d", &n);
    /* Stored values into the array*/
       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {

	      scanf("%d",&arr1[i]);
	    }
	
	
   printf("Enter the value to be inserted : ");
   scanf("%d",&x);
   printf("Enter the Position, where the value to be inserted :");
   scanf("%d",&p);
   
   for(i=n;i>=p;i--)
      arr1[i]= arr1[i-1];
   /* insert value at given position */
      arr1[p-1]=x;

 
   printf("\n\nAfter Insert the element the new list is :\n");
   for(i=0;i<=n;i++)
      printf("% d ",arr1[i]);

}

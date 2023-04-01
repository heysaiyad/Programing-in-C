// Write a program in ‘C” to Find the Second and third Smallest Element in the Array

#include<stdio.h>

int Print3Smallest(int array[], int n)
{
	// Sorting the array
    int i,j,k;
    for (i = 0; i < n; i++)
    {
        for ( k = 0; k < n-1; k++)
        {
            if (array[k]<= array[k+1])
            {
                j=array[k+1];
                array[k+1]=array[k];
                array[k]=j;
            }
            
        }
        
    }
	
	printf("%d \n", array[0]);
    printf("%d \n", array[1]);
    printf("%d \n", array[2]);
}

// Driver code
int main()
{
	int array[] = {4, 9, 1, 32, 12};
	int n = sizeof(array) / sizeof(array[0]);
	Print3Smallest(array, n);
	return 0;
}



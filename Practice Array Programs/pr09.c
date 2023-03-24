// Write a program in C to find the majority element of an array.

#include <stdio.h>

void findMajElem(int arr1[], int n) 
{
 int i,IndexOfMajElem = 0, ctr = 1;
    for(i = 1; i < n; i++) 
	{
        if(arr1[IndexOfMajElem] == arr1[i])
            ctr++;
        else
            ctr--;
         
        if(ctr == 0) {
            IndexOfMajElem = i;
            ctr = 1;
        }
    }
    ctr = 0;
    for (i = 0; i < n; i++) 
	{
        if(arr1[i] == arr1[IndexOfMajElem])
            ctr++; 
 }
    if(ctr > (n/2))
        printf("Majority Element : %d\n", arr1[IndexOfMajElem]);
    else
        printf("There are no Majority Elements in the given array.\n");
}
 
int main()
{
    int i, ctr,m;
    int arr1[] = { 4, 8, 4, 6, 7, 4 , 4, 4};	
    ctr = sizeof(arr1)/sizeof(arr1[0]);
    printf("The given array is :  ");

	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");
	    findMajElem(arr1, ctr);
    return 0;
}

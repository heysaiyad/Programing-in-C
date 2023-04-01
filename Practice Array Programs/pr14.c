// Write a program in ‘C” to Move all the negative elements to one side of the array.
#include <stdio.h>

void shiftall(int arr[], int left, int right)
{

  while (left<=right)
  {
     if (arr[left] < 0 && arr[right] < 0)
      left+=1;

     else if (arr[left]>0 && arr[right]<0)
     {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left+=1;
        right-=1;
     }

     else if (arr[left]>0 && arr[right] >0)
        right-=1;

     else{
        left += 1;
        right -= 1;
     }
   }
}

void display(int arr[], int right){

    for (int i=0;i<=right;++i){
      printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
   int n;
   scanf("%d", &n);

   int arr[n];

   for(int i=0; i<n; i++)
     scanf("%d", &arr[i]);

   // Function Call
   shiftall(arr,0,n-1);
   display(arr,n-1);
}
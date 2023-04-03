// write a program in ‘C” to find the first repeating element in an array of integers

#include<stdio.h>

int main() {

    int arr[] = {1, 2, 3, 3, 3, 6, 6};
    int n = sizeof(arr) / sizeof(*arr);

    for(int i=0;i<n;i++) // select an element
    {
      // j is intialized with i+1, because 'j = i' is the element itself to compare
      for(int j=i+1;j<n;j++) //traverse ahead and check for duplicate
      {
        // Comparing the element with whole array

        if(arr[i]==arr[j])
          {
            printf("%d ", arr[i]);
            return 0;
          }
      }
    }
    // If none of the element is repeating
    
  printf("No repeating integer found\n");
  
  return 0;
}
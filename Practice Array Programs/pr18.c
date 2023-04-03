// Write a program in ‘C” to find the first non-repeating element in a given array of integers
#include<stdio.h>

int firstNonRepeatingElem(int arr[], int len) {
  for(int i = 0; i < len; i++)  // iterates over every element of the array
    for(int j = 0; j < len; j++) {  // checks if that element is repeating in the array
      if(arr[i] == arr[j] && i != j)  // breaks the loop if a repeating element is found
        break;
      
      if(j == len - 1)  // if we reach the last index of the array and
        return i;       // haven't found a repetition for the element at index i,
    }                   // then we return the index i

    return -1;  // if all the elements in the array are repeating then we return a -1 flag.
}


int main() {
  int arr[] = {1, 2, 3, 8, 2, 3, 4};
  int length = sizeof(arr)/sizeof(int);

  int answer = firstNonRepeatingElem(arr, length);  // calling our function

  if(answer == -1)  // if the flag is returned, we print the following line.
    printf( "No non-repeating elements.");
  else
    printf("%d",arr[answer]);  // if a non-repeating element is found, we return the element at
  return 0;                   // the index returned from the function.
}
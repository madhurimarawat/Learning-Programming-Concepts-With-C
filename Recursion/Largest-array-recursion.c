// This program finds the largest number in the array using recursion

// This program finds the largest number in the array using recursion
#include <stdio.h>

// Declaring variable to store array
int large(int[]);

int N, i, max;

// Main Function
void main()
{
  int arr[20];
  printf("enter number of elements");
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    printf("number %d:", i + 1);
    scanf("%d", &arr[i]);
  }
  max = large(arr);
  printf("the largest number is %d", max);
}
int large(int arr[])
{
  int static i = 0;
  if (i < N)
  {
    if (max < arr[i])
      max = arr[i];
    i++;
    large(arr);
  }
  return max;
}

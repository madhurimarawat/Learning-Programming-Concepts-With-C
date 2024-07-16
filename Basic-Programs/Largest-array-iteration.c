/**
 * This C program prompts the user to enter a set of numbers, then finds and prints the largest number
 * among them.
 */

#include <stdio.h>

// Main Function
void main()
{
  int N, i, max = 0;
  int arr[20];
  printf("Enter number of elements:");
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    printf("Number %d:", i + 1);
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < N; i++)
  {
    if (max < arr[i])
      max = arr[i];
  }
  printf("The largest number is: %d", max);
}
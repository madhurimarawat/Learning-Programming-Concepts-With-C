/**
 * This C program takes an integer input from the user and determines if it is even or odd.
 */

#include <stdio.h>

// Main Function
void main()
{
  int n;
  printf("Enter an integer:");
  scanf("%d", &n);
  n % 2 == 0 ? printf("number is even") : printf("number is odd");
}
/**
 * This C program takes two integers as input, performs multiplication operations, and displays the
 * results.
 */

#include <stdio.h>

// Main Function
void main()
{
  int n1, n2;
  printf("enter");
  scanf("%d %d", &n1, &n2);
  printf("           %d\n        x  %d\n", n1, n2);
  printf("%d x %d is %d\n", n2 % 10, n1, (n2 % 10) * n1);
  printf("%d x %d is %d\n", n2 / 10, n1, (n2 / 10) * n1);
  printf("add them %d", n1 * n2);
}
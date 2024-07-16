/**
 * The function checks if a given number is odd or even.
 */

// Including Header Files
#include <stdio.h>

// Main Function
void main()
{
  int m;
  printf("Enter number to check:");
  scanf("%d", &m);
  (m & 1) == 1 ? printf("%d is odd", m) : printf("%d is even", m);
}

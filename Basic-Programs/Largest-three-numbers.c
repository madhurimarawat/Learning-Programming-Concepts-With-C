/**
 * This C program takes three numbers as input and prints the largest among them.
 */

#include <stdio.h>

// Main Function
void main()
{
  int n1, n2, n3, l;
  printf("Enter three numbers:");
  scanf("%d %d %d", &n1, &n2, &n3);
  l = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
  printf("%d", l);
}
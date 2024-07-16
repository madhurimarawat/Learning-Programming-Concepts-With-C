/**
 * The above C program defines a function to swap the values of two integers and demonstrates its usage
 * in the main function.
 *
 * @param a 5
 * @param b 6
 */

#include <stdio.h>

// Function to Swap variables
void swap(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}

// Main Function
void main()
{
  int a = 5, b = 6;
  printf("value before swap a=%d,b=%d\n", a, b);
  swap(&a, &b);
  printf("value after swap a=%d ,b=%d\n", a, b);
}
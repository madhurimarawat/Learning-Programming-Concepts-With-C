/**
 * The function swaps the values of two variables without using a temporary variable.
 */

#include <stdio.h>

// Main Function
void main()
{
  int a = 10, b = 20;
  printf("before swap a =%d,b=%d", a, b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("after swap a=%d, b=%d", a, b);
}
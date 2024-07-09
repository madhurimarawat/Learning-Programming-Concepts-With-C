// This program finds the Factorial of a number using recursion

// Importing Header File
#include <stdio.h>

// Function to find factorial
int fact(int n)
{
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

// Main function
void main()
{
  int n;
  printf("enter number");
  scanf("%d", &n);
  printf("Factorial is %d", fact(n));
}

/**
 * This C program calculates the sum of the digits of a given number.
 *
 * @return The main function is returning an integer value of 0.
 */

// Including Header Files
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Main Funtion
int main()
{

  // Declaring Variables
  int n, sum = 0, temp, r;

  printf("Enter number of digits: ");
  scanf("%d", &r);

  printf("Enter number: ");
  scanf("%d", &n);

  // Code to calculate the sum of the five digits on n

  for (int i = 0; i < r; i++)
  {
    temp = n % 10;
    sum += temp;
    n = n / 10;
  }

  printf("Sum is :%d", sum);

  return 0;
}
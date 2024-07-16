/**
 * The function checks if a given year is a leap year or not.
 */

#include <stdio.h>

// Main Function
void main()
{
  int year;
  printf("enter year:");
  scanf("%d", &year);
  year % 4 == 0 ? printf("%d is leap", year) : printf("%d is not leap", year);
}
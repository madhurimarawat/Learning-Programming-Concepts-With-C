/**
 * This C program prints a pattern of stars in a decreasing order based on the number of rows entered
 * by the user.
 */

#include <stdio.h>

// For star Pattern Printing

/*

For r=6

 ******
  *****
   ****
    ***
     **
      *
*/

// Main Function
void main()
{
  int r, i, j, s;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  for (i = 0; i <= r; i++)
  {
    for (s = 0; s <= i - 1; s++)
    {
      printf(" ");
    }
    for (j = i; j <= r; j++)
    {
      printf("*");
    }
    if (i < r)
    {
      printf("\n");
    }
  }
}

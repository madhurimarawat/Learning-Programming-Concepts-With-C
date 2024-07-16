/**
 * The function prints a pattern of stars in a triangular shape based on the number of rows specified
 * by the user.
 */

#include <stdio.h>

// For star Pattern Printing

/*

For r=6

*
 **
  ***
   ****
    *****
     ******

*/

// Main Function
void main()
{
  int r, i, j, s;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Pattern is:");
  for (i = 0; i <= r; i++)
  {
    for (s = 1; s < i; s++)
    {
      printf(" ");
    }
    for (j = 0; j < i; j++)
    {
      printf("*");
    }
    if (i < r)
    {
      printf("\n");
    }
  }
}

/**
 * This C program prints a pattern of stars in rows based on user input.
 */

#include <stdio.h>

// For star Pattern Printing

/*

For r=6

*
* *
* * *
* * * *
* * * * *
* * * * * *

*/

// Main Function
void main()
{

  int r, i, j;

  printf("Enter number of rows: ");
  scanf("%d", &r);

  for (i = 1; i <= r; i++)
  {
    for (j = 1; j <= i; j++)
    {

      printf("* ");
    }
    printf("\n");
  }
}

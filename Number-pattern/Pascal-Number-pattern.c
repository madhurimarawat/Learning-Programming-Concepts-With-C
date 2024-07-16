/**
 * The function prints a Pascal's Triangle pattern up to a specified number of rows.
 */

#include <stdio.h>

// For  Pascal Number pattern Printing

/*

For r=6

         1
        1   1
       1   2   1
      1   3   3   1
     1   4   6   4   1
    1   5  10  10   5   1

*/

// Main Function
void main()
{
  int r, i, j, s, coef;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  for (i = 0; i < r; i++)
  {
    for (s = 1; s <= r - i; s++)
    {
      printf(" ");
    }
    for (j = 0; j <= i; j++)
    {
      if (j == 0 || i == 0)
      {
        coef = 1;
      }
      else
      {
        coef = coef * (i - j + 1) / j;
      }
      printf("%4d", coef);
    }
    printf("\n");
  }
}
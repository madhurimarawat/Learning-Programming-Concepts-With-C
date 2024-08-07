/**
 * The function prints a number pattern based on the user input of the number of rows, where each row
 * contains decreasing numbers from the input number to 1.
 */

#include <stdio.h>

// For Number pattern Printing

/*

For r=6

6 6 6 6 6 6
 5 5 5 5 5
  4 4 4 4
   3 3 3
    2 2
     1

*/

// Main Function
void main()
{
  int r, i, j, s;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  for (i = r; i >= 1; i--)
  {
    for (s = 1; s <= r - i; s++)
    {
      printf(" ");
    }
    for (j = 1; j <= i; j++)
    {
      printf("%d ", i);
      // printf("*");
    }
    printf("\n");
  }
}

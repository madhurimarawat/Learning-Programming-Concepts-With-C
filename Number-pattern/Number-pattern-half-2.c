/**
 * The function prints a number pattern where each row contains the same number repeated based on the
 * row number.
 */

#include <stdio.h>

// For Number pattern Printing

/*

For r=6

1
22
333
4444
55555
666666

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

      printf("%d", i);
    }
    printf("\n");
  }
}

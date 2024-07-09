#include <stdio.h>

// Program for pattern printing

/*

AAAA
BBBB
CCCC
DDDD
EEEE

*/

void main()
{

  char i, j;

  for (i = 'A'; i <= 'E'; i++)
  {
    for (j = 'A'; j < 'E'; j++)
    {

      printf("%c", i);
    }

    printf("\n");
  }
}

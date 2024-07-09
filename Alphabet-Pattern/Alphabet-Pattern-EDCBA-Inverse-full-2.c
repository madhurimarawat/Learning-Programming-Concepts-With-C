#include <stdio.h>

// Program for printing pattern

/*

For r = 6

F E D C B A
 E D C B A
  D C B A
   C B A
    B A
     A

*/

void main()
{

     int i, s, j, r;

     printf("Enter number of rows: ");
     scanf("%d", &r);

     for (i = 0; i < r; i++)
     {
          for (s = i; s > 0; s--)
          {

               printf(" ");
          }
          for (j = r - i; j > 0; j--)
          {
               printf("%c ", 64 + j);
          }
          printf("\n");
     }
}

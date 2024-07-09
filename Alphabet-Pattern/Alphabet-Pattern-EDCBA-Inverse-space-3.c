#include <stdio.h>

// Program for printing pattern

/*

For r = E

    E
   DD
  CCC
 BBBB
AAAAA

*/

void main()
{
    char i, j, s, r;
    char k = 'A';
    printf("Enter Ending character of rows: ");
    scanf("%c", &r);
    printf("\n");
    for (i = r; i >= 'A'; i--)
    {
        for (s = 1; s <= i; s++)
        {
            printf(" ");
        }
        for (j = i; j <= r; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
}

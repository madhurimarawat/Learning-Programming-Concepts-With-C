#include <stdio.h>

// For converting to uppercase
#include <ctype.h>

// Program for printing pattern

/*

For r=E

EEEEE
 DDDD
  CCC
   BB
    A

*/

void main()
{

    int j, s, i;
    char r;

    printf("Enter last character: ");
    scanf("%c", &r);

    // Converting to uppercase
    r = toupper(r);

    for (i = r; i >= 'A'; i--)
    {
        for (s = 1; s <= r - i; s++)
        {

            printf(" ");
        }

        for (j = i; j >= 'A'; j--)
        {
            printf("%c", i);
        }

        if (i != 'A')
        {
            printf("\n");
        }
    }
}

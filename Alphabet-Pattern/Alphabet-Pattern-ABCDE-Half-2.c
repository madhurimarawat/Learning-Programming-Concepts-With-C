#include <stdio.h>

// Program for printing pattern

/*

For c=F

AAAAAA
BBBBB
CCCC
DDD
EE
F

*/

void main()
{

    char c;
    int r, i, j, s;

    printf("Enter uppercase ending letter: ");
    scanf("%c", &c);

    for (i = 'A'; i <= c; i++)
    {

        for (s = 1; s >= i; s++)
        {

            printf(" ");
        }

        for (j = i; j <= c; j++)
        {
            printf("%c", i);
        }

        printf("\n");
    }
}

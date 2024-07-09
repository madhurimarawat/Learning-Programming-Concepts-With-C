// Importing header files
#include <stdio.h>
#include <ctype.h>

// Program for pattern printing

/*

For c=F

 A A A A A A
 B B B B B B
 C C C C C C
 D D D D D D
 E E E E E E
 F F F F F F

*/

void main()
{

    int i, j;

    char c = 'A';

    printf("Enter Ending character: ");
    scanf("%s", &c);

    c = toupper(c);

    for (i = 'A'; i <= c; i++)
    {
        for (j = 'A'; j <= c; j++)
        {

            printf(" ");

            printf("%c", i);
        }
        printf("\n");
    }
}

/**
 * This C program calculates and prints the length of a string entered by the user.
 */

#include <stdio.h>

// Main Function
void main()
{
  char str[100], i;
  printf("Enter a string:\n");
  scanf("%s", str);
  for (i = 0; str[i] != '\0'; ++i)
    ;
  printf("Length of string is %d", i);
}
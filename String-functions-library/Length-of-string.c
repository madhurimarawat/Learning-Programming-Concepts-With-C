/**
 * This C program reads a string input from the user, calculates its length, and then prints the length
 * of the string.
 */

#include <stdio.h>
#include <string.h>

// Main Function
void main()
{
  char str[100], i;
  printf("Enter a string:\n");
  scanf("%s", str);
  i = strlen(str);
  printf("Length of string is %d", i);
}
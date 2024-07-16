/**
 * The function takes a user input string, calculates its length, and then prints the reverse of the
 * string.
 */

#include <stdio.h>
#include <string.h>

// Main Function
void main()
{
  char str[56];
  printf("Enter string:");
  scanf("%s", str);
  printf("The length of string is: %d\n", strlen(str));
  printf("The reverse of string is: %s\n", strrev(str));
}
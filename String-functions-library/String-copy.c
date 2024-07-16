/**
 * The function takes a user input string, copies it to another string, and then prints the copied
 * string.
 */

#include <stdio.h>
#include <string.h>

// Main Function
void main()
{
  char s1[100], s2[100], i;
  printf("Enter string s1:");
  fgets(s1, sizeof(s1), stdin);
  strcpy(s2, s1);
  printf("s2 : %s", s2);
}
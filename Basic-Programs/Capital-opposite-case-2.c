/**
 * This C program takes a user input string, converts all lowercase letters to uppercase and vice
 * versa, and then prints the modified string.
 */

// Main Function
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Main Function
void main()
{
  char str[100];
  char *ptr = str;
  int i;
  printf("enter string");
  scanf("%s", str);
  for (i = 0; i < strlen(str); i++)
  {
    if (islower(str[i]))
      str[i] = toupper(str[i]);
    else if (isupper(str[i]))
      str[i] = tolower(str[i]);
  }
  printf("%s", ptr);
}
/**
 * The function takes a string as input, converts lowercase letters to uppercase and vice versa, and
 * then prints the modified string.
 */

// Including Header Files
#include <stdio.h>

// Main Function
void main()
{
  char str[100];
  char *ptr = str;
  int i;
  printf("enter string:");
  scanf("%s", str);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 97 && str[i] <= 122)
    {
      str[i] = str[i] - 32;
    }
    else if (str[i] >= 65 && str[i] <= 90)
    {
      str[i] = str[i] + 32;
    }
  }
  printf("%s", ptr);
}
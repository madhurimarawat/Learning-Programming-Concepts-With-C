/**
 * This C program calculates and prints the area of a circle based on user input of the radius.
 */

// Including Header Files
#include <stdio.h>

// Main Function
void main()
{
  const float pie = 3.14;
  float r, area;
  printf("Enter radius:");
  scanf("%f", &r);
  area = pie * r * r;
  printf("%f", area);
}
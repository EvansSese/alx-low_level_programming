#include <stdio.h>
/**
 * print_to_98 - This function prints from n to print_to_98
 * n: Starting point
 * Return: int of sum
 */
void print_to_98(int n)
{
  int i;
  
  i = n;
  if (i <= 98)
  {
    for (i = n; n <= 98; n++)
    {
      printf("%d, ", n);
    }
  }
  else
  {
    for (i = n; n >= 98; n--)
    {
      printf("%d, ", n);
    }
  }
  printf("\n");
}

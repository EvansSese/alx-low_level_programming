#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints array separated by commas
 * @a: Array parameter
 * @n: Number of elements in array
 */
void print_array(int *a, int n)
{
	int i;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i !=n)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}

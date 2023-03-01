#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - Function to return an interger
 * @a: Array to be reversed
 * @n: Length of the string
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start;
	int end = n - 1;

	for (start = 0; start < n/2; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
	}
}

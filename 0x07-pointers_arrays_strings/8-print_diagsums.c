#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_diagsums - Function to print diagonal sums
 * @a: Array to be used
 * @size: Size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int leftSum = 0;
	int rightSum = 0;

	for (i = 0; i < size; i++)
	{
		leftSum += *(a + i * size + i);
		rightsum += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d", leftSum, rightSum);
}

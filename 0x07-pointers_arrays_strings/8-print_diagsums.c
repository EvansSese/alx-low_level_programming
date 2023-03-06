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
	int j = size - 1;
	int leftSum = 0;
	int rightSum = 0;

	for (i = 0; i < size; i++)
	{
		leftSum = leftSum + a[i][i];
		rightSum = rightSum + a[i][j];
	}
	printf("%d, %d", leftSum, rightSum);
}

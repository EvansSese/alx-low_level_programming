#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swaps the values of 2 integers
 * @a: Value for a
 * @b: Value for b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

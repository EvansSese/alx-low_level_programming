#include "search_algos.h"

/**
 * binary_search - Function to find element
 * @array: Array to search from
 * @size: Size of the array
 * @value: Value to be found
 *
 * Return: Index of the value
 */

int binary_search(int *array, size_t size, int value)
{

	int left = 0;
	int right = (int)(size - 1);
	int mid, i;

	while (left <= right) 
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
            		if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return(-1);
}

#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Determines if a number is a digit
 * @c: Character to be checked
 * @i: Number in the for loop
 *
 * Return: 1 if is digit. 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}

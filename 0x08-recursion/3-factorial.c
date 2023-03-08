#include <stdio.h>
#include "main.h"
/**
 * factorial - Function to find factorial
 * @n: Number
 * 
 * Return: Returns factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

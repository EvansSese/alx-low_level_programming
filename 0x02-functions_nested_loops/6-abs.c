#include <stdio.h>
#include "main.h"
/**
 * _abs - This function prints the abs value
 * @n: Given number to return abs value
 * Return: abs value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}

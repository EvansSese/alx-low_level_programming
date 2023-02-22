#include <stdio.h>
/**
 * print_sign - Prints the sign infornt of a given number
 * @n: Number to be checked
 * Return: 1 if number is positive, 0 if number is 0 and -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}

#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints last digit of the number
 * @n: n is the number given
 * @last_digit - paramenter to hold last digit
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	putchar(last_digit + '0');
	return (last_digit);
}

#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Prints numbers between 0 and 9
 * @n: Number parameter
 *
 * Return: Always 0(Success)
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <=9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}

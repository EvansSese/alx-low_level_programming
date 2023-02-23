#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @r - Parameter to hold returned value
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _isupper('E');
	putchar(r + '0');
	return (0);
}

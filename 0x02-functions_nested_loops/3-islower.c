#include <stdio.h>
#include "main.h"

/**
 * _islower - Returns 1 if c is lower, otherwise Returns 0
 * @c: The character to be checked
 * Return: 1 if character is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

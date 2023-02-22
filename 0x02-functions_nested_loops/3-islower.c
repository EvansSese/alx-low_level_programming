#include <stdio.h>
#include "main.h"

/**
 * _islower - function to check if c is lowercase
 * @c - the character to be checked
 * Return: 1 if character is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

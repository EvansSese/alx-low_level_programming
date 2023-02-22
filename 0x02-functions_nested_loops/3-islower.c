#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - Returns 1 if c is lower, otherwise Returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

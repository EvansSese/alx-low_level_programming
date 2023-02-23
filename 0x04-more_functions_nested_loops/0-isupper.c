#include <stdio.h>
#include "main.h"
/**
 * _isupper - This determines if a character is uppercase
 * @c: Character to be checked
 * @letter: Paramenter to hold current letter
 *
 * Return: 1 if is upper, 0 otherwise
 */
int _isupper(int c)
{
	int letter;

	letter = 'A';
	while (letter <= 'Z')
		if (c == letter)
			return (1);
		letter++;
	return (0);
}

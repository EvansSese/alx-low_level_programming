#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 */
void print_alphabet_x10()
{
	char letter;

	for (int i = 0; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);

	}
	putchar('\n');
}

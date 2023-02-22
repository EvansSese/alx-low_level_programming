#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
}

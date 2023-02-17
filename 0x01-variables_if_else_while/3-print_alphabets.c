#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l_letters;
	char u_letters;

	for (l_letters = 'a'; l_letters <= 'z'; l_letters++)
		putchar(l_letters);
	for (u_letters = 'A'; u_letters <= 'Z'; u_letters++)
		putchar(u_letters);
	putchar('\n');
	return (0);
}

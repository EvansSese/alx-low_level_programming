#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Function to print all
 * @format: Format to be used
 * @char: String to be printed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	int printed = 0;

	va_start(args, format);
	while ((c = *(format)) != '\0')
	{
		switch (c)
		{
			case 'c':
				i = (char) va_arg(args, int);
				printf("%c", i);
				printed = 1;
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				printed = 1;
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				printed = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				printed = 1;
				break;
			default:
				break;
		}
		if (*(format) != '\0' && printed)
		{
			printf(", ");
			printed = 0;
		}
	}
	va_end(args);
	printf("\n");
}

#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Function to print all
 * @format: Format to be used
 * @char: String to be printed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	char c_val;
	int i_val;
	double f_val;
	char* s_val;
	int printed = 0;

	va_start(arg_list, format);
	while ((c_val = *(format++)) != '\0')
	{
		switch (c_val)
		{
			case 'c':
				i_val = va_arg(arg_list, int);
				printf("%c", i_val);
				printed = 1;
				break;
			case 'i':
				i_val = va_arg(arg_list, int);
				printf("%d", i_val);
				printed = 1;
				break;
			case 'f':
				f_val = va_arg(arg_list, double);
				printf("%f", f_val);
				printed = 1;
				break;
			case 's':
				s_val = va_arg(arg_list, char*);
				if (s_val != NULL)
				{
					printf("%s", s_val);
				}
				else
				{
					printf("(nil)");
				}
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
	print("\n");
	va_end(arg_list);
}

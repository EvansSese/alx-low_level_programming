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
	char *s_val;
	int i, j = 0;

	va_start(arg_list, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				c_val = (char)va_arg(arg_list, int);
				printf("%c", c_val);
				break;
			case 'i':
				i_val = va_arg(arg_list, int);
				printf("%d", i_val);
				break;
			case 'f':
				f_val = va_arg(arg_list, double);
				printf("%f", f_val);
				break;
			case 's':
				s_val = va_arg(arg_list, char *);
				if (s_val)
				{
					printf("%s", s_val);
				}
				else
				{
					printf("(nil)");
				}
				break;
			default:
				break;
		}
		j++;
		if (format && format[j])
		{
			printf(", ");
		}
	}
	print("\n");
	va_end(arg_list);
}

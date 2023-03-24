#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function to print name
 * @name: Name parameter
 * @f: Function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
	(*f)(name);
}

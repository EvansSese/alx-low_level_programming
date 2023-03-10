#include "main.h"
/**
 * *cap_string - Func to cap words
 * @str: String param
 *
 * Return: Returns a pointer
 */
char *cap_string(char *str)
{
	int len = strlen(str);
	int cap_next = 1;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || str[i] == ',' || 
			str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || 
			str[i] == '"' || str[i] == '(' || 
			str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
	}
	return (str);
}

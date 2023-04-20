#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: Argumrents
 * @argv: Arguments
 *
 * Return: Returns intehegfr
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *ptr

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr)
		{
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

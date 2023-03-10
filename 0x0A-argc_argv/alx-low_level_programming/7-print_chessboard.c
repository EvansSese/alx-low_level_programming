#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_chessboard - Function to print chessboard
 * @a: Array containing chess figures
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int len = sizeof(*a) / sizeof((*a)[0]);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			_putchar((a)[i][j]);
		}
		_putchar('\n');
	}
}

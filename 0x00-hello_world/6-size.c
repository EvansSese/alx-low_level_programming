#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int int_type;
	long long_type;
	unsigned long u_long_int;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(u_long_int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - Function to check prime number
 * @n: Number to be checked
 * @i: Index
 *
 * Return: 1 if prime, else 0
 */
int is_divisible(int n, int i);
int is_divisible(int n, int i)
{
	if (i * i > n)
		return (0);
	else if (n % i == 0)
		return (1);
	else
		return (is_divisible(n, i + 1));
}

/**
 * is_divisible - Function to check divisibility
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (!is_divisible(n, 3));
}

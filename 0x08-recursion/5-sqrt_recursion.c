#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Function to find root
 * @n: Number
 *
 * Return: The sqrt
 */
int _sqrt_helper(int n, int low, int high);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0, n));
}
int _sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int guess = mid * mid;

	if (low > high)
		return (-1);
	if (guess == n)
		return (mid);
	else if (guess > n)
		return (_sqrt_helper(n, low, mid - 1));
	else
		return (_sqrt_helper(n, mid + 1, high));
}

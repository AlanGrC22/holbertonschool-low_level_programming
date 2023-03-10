#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return the square
 * @x: val
 * Return: If n has a natural square root - the natural square root of n
 *         If n does not have a natural square root - -1
 */
int _sqrt(int n, int x);
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - return the square root of a number
 * @n: test number
 * @x: val
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}

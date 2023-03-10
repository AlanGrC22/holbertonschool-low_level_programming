#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return the square
 * Return: If n has a natural square root - the natural square root of n
 *         If n does not have a natural square root - -1
 */
int _sqrt(int n, int s, int e);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 1, n));
}

/**
 * _sqrt - return the square root of a number
 * @n: test number
 * @s: start
 * @e: end
 * Return: the square root of n
 */

int _sqrt(int n, int s, int e)
{
	int m = (s + e) / 2;
	int sqre = m * m;
	if (s > e)
		return (-1);
	if (sqre == n)
		return (m);
	if (sqre > n)
		return (_sqrt(n, s, m - 1));
	else
		return (_sqrt(n, m + 1, e));
}

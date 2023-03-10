#include "main.h"
/**
 * _sqrt - returns the natural square root of a number
 * @n: number to return the square
 * @e: end
 * @s: start
 * Return: If n has a natural square root - the natural square root of n
 *         If n does not have a natural square root - -1
 */
int _sqrt(int n, int s, int e);
int _sqrt(int n, int s, int e)
{
		int m = (s + e) / 2;

		if (s > e)
		{
			return (-1);
		}

		if (m * m == n)
		{
			return (m);
		}
		if (m * m < n)
		{
			return (_sqrt(n, m + 1, e));
		}
		else
		{
			return (_sqrt(n, s, m - 1));
		}
}
/**
 * _sqrt_recursion - return the square root of a number
 * @n: test number
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
		if (n == 0 || n == 1)
		{
			return (n);
		}
		return (_sqrt(n, 0, n));
}

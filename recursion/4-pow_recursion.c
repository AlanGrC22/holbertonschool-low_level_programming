#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *@x: eje x
 *@y: eje y
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
	{
	return (-1);
	}
	if (y <= 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}

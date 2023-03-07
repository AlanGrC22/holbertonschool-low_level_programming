#include "main.h"
#include <stdio.h>
/**
 * factorial - Write a function that returns the factorial of a given number
 *@n: number
 * Return: always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n >= 1)
	{
	return (n * factorial(n - 1));
	}
	else
		return (1);
}

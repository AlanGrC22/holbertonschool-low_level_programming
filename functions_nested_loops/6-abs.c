#include "main.h"
/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @c: absolute value
 * Return: c
 **/
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}

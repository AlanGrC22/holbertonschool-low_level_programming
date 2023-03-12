#include "main.h"
/**
 * _isalpha - void
 * @c: character
 * Return: Always 0.
 **/
int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * Return: 1 if c is lowercase, 0 otherwise.
 * @c: character
 **/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

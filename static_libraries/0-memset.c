#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: character to fill the memory area with
 * @n: number of bytes to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Write a function that copies a string.
 * @dest: destino
 * @src: source
 * @n: bytes
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}

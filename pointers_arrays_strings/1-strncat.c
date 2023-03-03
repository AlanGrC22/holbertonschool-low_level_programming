#include "main.h"
#include <stdio.h>
/**
* _strncat - Write a function that concatenates two strings
* @dest: destino
* @src: source
* @n: bytes
* Return: dest
**/
char *_strncat(char *dest, char *src, int n);
{
	int a = strlen(dest);
	int b;

	for (b = 0; b < n && dest[b] != '\0'; b++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] != '\0';
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	dest[b + a] = '\0';
	return (dest);

}

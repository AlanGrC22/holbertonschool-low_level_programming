#include "main.h"
#include <stdio.h>
/**
* _strncat - Write a function that concatenates two strings
* @dest: destino
* @src: source
* @n: bytes
* Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int a;

	for (b = 0; dest[b] != '\0'; b++)
	{
		;
	}
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	dest[b + a] = '\0';
	return (dest);

}

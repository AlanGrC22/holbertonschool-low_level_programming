#include "main.h"
#include <stdio.h>
/**
 * _strcat - Write a function that concatenates two strings
 * @dest: destino
 * @src: source
 * Return: dest
 **/
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
	{
		;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	dest[b + a] = '\0';
	return (dest);
}

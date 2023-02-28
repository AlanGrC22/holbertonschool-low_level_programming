#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Write a function that returns the length of a string
 * @s: string
 * Return: Always 0
*/
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

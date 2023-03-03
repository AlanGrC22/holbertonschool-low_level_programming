#include "main.h"
#include <stdio.h>
/**
* _strcmp - Write a function that compares two strings
* @s1: destino
* @s2: source
* Return: Always 0
**/
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*(s1 + a) == *(s2 + a))
	{
		if (*(s1 + a) == '0' || *(s2 + a) == '0')
		{
			break;
		}
	}
	a++;
	if (*(s1 + a) == '0' && *(s2 + a) == '0')
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

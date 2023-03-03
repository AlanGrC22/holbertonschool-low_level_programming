#include "main.h"
#include <stdio.h>
/**
* _strcmp - Write a function that compares two strings
* @s1: destino
* @s2: source
* Return: dest
**/
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	for (b = 0; s1[b] != '\0'; b++)
	{
		;
	}
	for (a = 0; s2[a] != '\0'; a++)
	{
		s1[b + a] == s2[a];
	}
	s1[b + a] = '\0';
	return (*s1);

}

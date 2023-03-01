#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_atoi - Write a function that convert a string to an integer
 *@s: string
 *Return: Always r
 */
int _atoi(char *s)
{
	int r = 0;
	int sig = 1;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
	if (s[i] == '-')
		sig = -sig;
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	r *= sig;
	return (r);
}

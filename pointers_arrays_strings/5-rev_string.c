#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Write a function that reverses a string.
 * @s: string
 * Return: Always 0
*/
void rev_string(char *s)
{
	int l, m = 0, n = 0;
	char c;

	while (s[m] != '\0')
	{
		m++;
	}
	n = m - 1;
	for (l = 0; l < m / 2; l++)
	{
		c = s[l];
		s[l] = s[n];
		s[n--] = c;
	}
}

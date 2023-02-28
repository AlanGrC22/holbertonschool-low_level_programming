#include "main.h"
#include <stdio.h>
/**
 * puts_half - Write a function that prints half of a string
 * @str: string
*/
void puts_half(char *str)
{
	int i;
	int f = 0;

	while (str[f] != '\0')
	{
		f++;
	}
	if (f % 2 == 1)
	{
		i = (f - 1) / 2;
		i += 1;
	}
	else
	{
		i = f / 2;
	}
	for (; i < f; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

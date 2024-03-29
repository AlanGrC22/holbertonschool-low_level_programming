#include "main.h"
/**
 * puts_half - Write a function that prints half of a string
 *             followed by a new line..
 * @str: string
 **/
void puts_half(char *str)
{
	int index = 0;
	int len = 0;
	int n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	for (index = n; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

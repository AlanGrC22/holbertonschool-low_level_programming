#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other character of a string,
 *         starting with the first character
 * @str: string
*/
void puts2(char *str)
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

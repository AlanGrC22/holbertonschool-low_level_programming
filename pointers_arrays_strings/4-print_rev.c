#include "main.h"
/**
 * print_rev - function that prints a string, in reverse followed by a new line
 *@s: string
 */
void print_rev(char *s)
{
	int l = 0;

	for (l = 0; s[l]; l++)
	{
		;
	}
	for (l = l - 1; s[l]; l--)
	{
		putchar(s[l]);
	}
	putchar('\n');
}

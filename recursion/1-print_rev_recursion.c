#include "main.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 *@s: string
 */
void _print_rev_recursion(char *s)
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
}

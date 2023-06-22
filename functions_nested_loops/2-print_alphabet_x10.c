#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 *                      in lowercase, followed by a new line.
 **/
void print_alphabet_x10(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar (a);
	}
	for (a = 0; a <= 10; a++)
	{
		_putchar (a);
	}
	_putchar ('\n');
}

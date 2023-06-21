#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse
 *        followed by a new line.
 * Return: Always 0
 **/
int main(void)
{
	int reva;

	for (reva = 'z'; reva >= 'a'; --reva)
	{
		putchar (reva);
	}
	putchar ('\n');
	return (0);
}

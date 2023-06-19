#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers of
 *        base 10 starting from 0, followed by a new line.
 * Return: Always 0
 **/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		char digit = '0' + number;

		putchar(digit);
	}
	putchar ('\n');
	return (0);
}

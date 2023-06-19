#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers of base 10
 *        starting from 0, followed by a new line.
 *        You are not allowed to use any variable of type char
 * Return: Always 0
 **/
int main(void)
{
	int alphabet;

	for (alphabet = 48; alphabet <= 57; alphabet++)
	{
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}

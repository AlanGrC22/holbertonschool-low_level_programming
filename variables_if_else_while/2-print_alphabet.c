#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 *        followed by a new line.
 * Return: Always 0
 **/
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

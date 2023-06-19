#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase,
 *        and then in uppercase, followed by a new line.
 * Return: always 0
 **/
int main(void)
{
	int alphabet, alphabetup;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar (alphabet);
	}
		putchar('\n');
	for (alphabetup = 'A'; alphabetup <= 'Z'; alphabetup++)
	{
		putchar (alphabetup);
	}
	putchar('\n');
	return (0);
}

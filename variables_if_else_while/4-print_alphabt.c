#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase,
 *        Print all the letters except q and e
 *        followed by a new line.
 * Return: Always 0
 **/
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}

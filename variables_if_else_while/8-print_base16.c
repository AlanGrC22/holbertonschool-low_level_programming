#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16 in lowercase
 *        followed by a new line.
 * Return: Always 0
 **/
int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar ('\n');
	return (0);
}

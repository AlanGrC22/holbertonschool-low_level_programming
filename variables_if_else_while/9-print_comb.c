#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations
 *        single-digit numbers. Numbers must be separated by ,
 *        followed by a space
 * Return: Always 0
 **/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar (num + '0');
		if (num == 9)
		{
			continue;
		}
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}

#include "main.h"
#include <stdbool.h>
/**
 * print_most_numbers - prints the numbers, from 0 to 9, not print 2 and 4
 * @n: void n
 * Return: Always 0.
*/
void print_most_numbers(void)
{
		char i;
		bool n = true;

			for (i = 0; i <= 9; i++)
			{
			if (n && (i == 2 || i == 4))
			{
				continue;
			}
				putchar(i + '0');
			}
				putchar('\n');
}

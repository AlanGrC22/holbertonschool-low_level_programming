#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: the size of the square
*/
void print_square(int size)
{
	int l, s;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (s = 0; s < size; s++)
			putchar('#');

			if (l == size - 1)
				continue;
				putchar('\n');
		}
	}

	putchar('\n');
}

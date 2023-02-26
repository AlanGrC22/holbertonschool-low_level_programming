#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: the size of the triangle
 */
void print_triangle(int size)
{
	int f, c;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (f = 1; f <= size; f++)
		{
			for (c = 1; c <= f; c++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

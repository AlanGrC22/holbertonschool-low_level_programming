#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number printed _
*/
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			putchar('_');
	}
	putchar('\n');
}

#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number printed \
*/
void print_diagonal(int n)
{
	int l, s;

		if (n > 0)
		{
			for (l = 0; l < n; l++)
			{
				for (s = 0; s < l; s++)
					putchar(' ');
				putchar('\\');

				if (l == n - 1)
					continue;

				putchar('\n');
			}
		}

		putchar('\n');
}

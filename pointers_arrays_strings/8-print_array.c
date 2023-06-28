#include "main.h"
/**
 * print_array - Prints an inputted number of elements
 *               of an array of integers.
 * @a: array
 * @n: number
 **/
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}

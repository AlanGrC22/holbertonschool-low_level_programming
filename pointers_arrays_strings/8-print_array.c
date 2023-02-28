#include "main.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers
 *@a: array
 *@n: number
 */
void print_array(int *a, int n)
{
	int u;

	for (u = 0; u < n; u++)
	{
		if (u == 0)
			printf("%d", a[u]);
		else
			printf(", %d", a[u]);
	}
	printf("\n");
}

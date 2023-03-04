#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int b, m;

	for (m = n - 1; m >= n / 2; m--)
	{
		b = a[n - 1 - m];
		a[n - 1 - m] = a[m];
		a[m] = b;
	}
}

#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: integer a
 * @b: integer b
 **/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

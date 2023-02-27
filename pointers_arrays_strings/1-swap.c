#include "main.h"
#include <stdio.h>
/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: integer a
 * @b: integer b
 */
void swap_int(int *a, int *b)
{
	int o = *a;
	*a = *b;
	*b = o;
}

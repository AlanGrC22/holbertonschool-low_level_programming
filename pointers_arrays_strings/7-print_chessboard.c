#include "main.h"
/**
* print_chessboard - Write a function that prints the chessboard
* @a: chessboard to be printed
*/
void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; a[i][7]; i++)
	{
		for (b = 0; b < 8; b++)
			putchar(a[i][b]);

		putchar('\n');
	}
}

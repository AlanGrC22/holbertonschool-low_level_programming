#include "main.h"
/**
 * Write a function that reverses a string.
 * @s: string
 **/
void rev_string(char *s)
{
	int count = 0;
	int i, j;
	char aux;

	while (s[count] != '\0')
		count++;
	j = count -1;
	for (i = 0; i < j; i++)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
		j--;
	}
}

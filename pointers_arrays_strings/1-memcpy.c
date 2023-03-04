#include "main.h"
/**
* _memcpy - Write a function that copies memory area
* @dest: pointer to the memory area to copy @src into
* @src: source buffer to copy characters from
* @n: number of bytes to copy from @src
* Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];

	return (dest);
}

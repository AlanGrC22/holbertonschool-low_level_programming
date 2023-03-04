#include "main.h"
/**
* _strpbrk - Write a function that searches a string for any of a set of bytes
* @s: string to be searched
* @accept: bytes to be searched
* Return: null
*/
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}

		s++;
	}

	return ('\0');
}

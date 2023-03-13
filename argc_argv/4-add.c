#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that adds positive numbers
 * @argc: number of arguments to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
	for (b = 0; argv[a][a] != '\0' ; b++)
		{
		if (argv[a][b] < 47 || argv[a][b] > 57)
		{
			printf("Error\n");
			return (1);
		}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}

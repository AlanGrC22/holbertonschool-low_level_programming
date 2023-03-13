#include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives
 * @argc: number of arguments to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}

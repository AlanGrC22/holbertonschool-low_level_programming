#include "main.h"
/**
* print_last_digit - imprime el ultimo digito de un numero
* @n: digito a verificar
* Return: Always 0.
**/
int print_last_digit(int n)
{
	int neg;

	neg = (n % 10);
	if (neg < 0)
	{
		neg = (neg * -1);
	}
	_putchar(neg + '0');
	return (neg);
}

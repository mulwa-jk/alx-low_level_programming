#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the numbe to be checked
 * Return: 1 and prints + if n is greater that zero
 * 0 and prints 0 if is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
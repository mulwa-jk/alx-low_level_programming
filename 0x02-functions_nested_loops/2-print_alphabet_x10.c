#include "main.h"

/**
 * print_alphabet_x10 - Prints 10x alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count = 0;

	while (count++ <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_triangle - print triangle of base size
 * @size: size of triangle base
 *
 * Return: void
 */

int print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (spaces = size - row; spaces >= 1; spaces--)
		{
			_putchar(' ');
		}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}
}

